/*Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or
isosceles triangle.
Input : side1 = 5 side2 = 4 side3 = 4
Output: This is an Isosceles triangle.*/
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"side1 = ";
    cin>>a;
    cout<<"side2 = ";
    cin>>b;
    cout<<"side3 = ";
    cin>>c;
    if((a+b>c)&&(b+c>a)&&(c+a>b))
       if((a==b)&&(b==c)&&(c==a))
           cout<<"This is an equilateral triangle";
       else if((c!=a && c!=b && a==b)||(a!=b && a!=c && b==c)||(b!=a && b!=c && a==c)) cout<<"This is an isosceles triangle";
       else cout<<"This is an scalene triangle";
    else cout<<a<<","<<b<<","<<c<<" are not the sides of a triangle";
}
