#include <iostream>
using namespace std;

int main()
{

  int n1;
  int n2;
  int n3;
  int gn;

  cout << "Enter an integer: ";
  cin >> n1;
  cout << "Enter an integer: ";
  cin >> n2;
  cout << "Enter an integer: ";
  cin >> n3;
  // checks if the number is positive
  if (n1 > n2)
  {
    gn = n1;
    cout << "greater integer is " << gn << endl;
  }
  else if (n2 > n3)
  {
    gn = n2;
    cout << "greater integer is " << gn << endl;
  }
  else
  {
    gn = n3;
    cout << "greater integer is " << gn << endl;
  }

  return 0;
}
