
#include<iostream>
using namespace std;
int main() {
 float celsius, fahrenheit;
 
 cout <<"\nEnter temperature in Celsius : ";
 cin >> celsius;
 
 fahrenheit = (1.8 * celsius) + 32;
 cout<<"\nTemperature in Fahrenheit : "<<fahrenheit;
 
 return 0;
}