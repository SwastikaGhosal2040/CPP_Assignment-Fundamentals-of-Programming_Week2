/*If the marks of A, B and C are input through the keyboard, write a program to determine the student
scoring the least marks.
Input 1: A = 23 , B = 34 , C = 71
Output : ‘A’ has the least marks.*/


#include<iostream>
using namespace std;
int main()
{
    float a,b,c;
    cout<<"A = ";
    cin>>a;
    cout<<"B = ";
    cin>>b;
    cout<<"C = ";
    cin>>c;
    if(a<b && a<c)      cout<<"'A' has the least marks";
    else if(b<a && b<c) cout<<"'B' has the least marks";
    else                cout<<"'C' has the least marks";
    
    
}
