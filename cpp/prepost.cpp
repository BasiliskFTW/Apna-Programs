#include <iostream>
using namespace std;
int main()
{
    int i = 5;
    cout << "The pre incremented value :" << i;
    while (++i < 10)
        cout << "\n"
             << i;
    cout << "\n The Post incremented value :" << i;
    while (i++ < 15)
        cout << "\n"
             << i;
    return 0;
}