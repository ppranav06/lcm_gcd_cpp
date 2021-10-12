//Finding LCM and GCD

/* Do not use VOID data type, you'll fail! */
#include<iostream>
using namespace std;

// Finding the GCD using ''while' loop
long long GCD(long long int a, long long int b) {
    while(a != b) {
    if(a > b)
      a -= b;
    else
      b -= a;
  }
  return a;
}

// Easily finding LCM using (n1 * n2)/GCD formula
long long LCM(long long int a, long long int b) {
    return((a*b)/GCD(a,b));
}

int main() {
    int a,b;
    cout<<"Enter first number: "; cin>>a;
    cout<<endl<<"Enter second number: "; cin>>b;
    cout<<endl<<"GCD of numbers is "<<GCD(a,b)<<endl;
    cout<<"LCM of numbers is "<<LCM(a,b)<<endl;
    return 0;
}