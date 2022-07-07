from sys import argv
import urllib
from bs4 import BeautifulSoup
import datetime


def ShowHelp():
    print('Insta Image Downloader')
    print('')
    print('Usage:')
    print('insta.py [OPTION] [URL]')
    print('')
    print('Options:')

    print('-u [Instagram URL]\tDownload single photo from Instagram URL'
          '-h, --help\t\tShow this help message'
          ''
          'Example:')
    print('python insta.py -u https://instagram.com/p/xxxxx')
    print('python insta.py -f /home/username/filelist.txt')
    print('')
    exit()


def DownloadSingleFile(fileURL):
    print('Downloading image...')
    f = urllib.urlopen(fileURL)
    htmlSource = f.read()
    soup = BeautifulSoup(htmlSource, 'html.parser')
    metaTag = soup.find_all('meta', {'property': 'og:image'})
    imgURL = metaTag[0]['content']
    fileName = datetime.datetime.now().strftime("%Y-%m-%d_%H:%M:%S") + '.jpg'
    urllib.urlretrieve(imgURL, fileName)
    print('Done. Image saved to disk as ' + fileName)


if __name__ == '__main__':
    if len(argv) == 1:
        ShowHelp()
    if argv[1] in ('-h', '--help'):
        ShowHelp()
    elif argv[1] == '-u':
        instagramURL = argv[2]
        DownloadSingleFile(instagramURL)
    elif argv[1] == '-f':
        filePath = argv[2]
        f = open(filePath)
        line = f.readline()
        while line:
            instagramURL = line.rstrip('\n')
            DownloadSingleFile(instagramURL)
            line = f.readline()
        f.close()