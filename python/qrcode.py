import qrcode
img = qrcode.make("https://instagram.com/insxn_iac?utm_medium=copy_link")
img.save("pg.jpg")
