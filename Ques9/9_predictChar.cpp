/*Write a C++ program to input any character and check whether it is the alphabet, digit or special
character.
Input 1: ch = ‘9’
Output 1: digit*/

#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"ch = ";
    cin>>ch;
    if((ch>=65 && ch<=90)||(ch>=97 && ch<=122))
      cout<<ch<<" is an alphabet";
    else if(ch>=48 && ch<=57)
      cout<<ch<<" is a digit";
    else cout<<ch<<" is a special character";
}
