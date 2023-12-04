/*Any year is input through the keyboard. Write a program to determine whether the year is a leap year
or not. (Considering leap year occurs after every 4 years)
Input 1: 1976
Output: yes
Input 2: 2003
Output: no*/


#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter year: ";
    cin>>year;
    if(year % 4 == 0)
       if(year % 100 == 0)
          if(year % 400 == 0)
             cout<<"yes "<<year<<" is a leap year";
          else cout<<" no "<<year<<" is not a leap year";
        else cout<<"yes "<<year<<" is a leap year";
    else  cout<<"no "<<year<<" is not a leap year";
}
