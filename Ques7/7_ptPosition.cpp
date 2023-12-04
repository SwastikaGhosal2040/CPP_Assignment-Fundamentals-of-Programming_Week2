/*Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0).
Input 1: 2 0
Output 1: the point lies on the x - axis.*/
#include<iostream>
using namespace std;
int main()
{
    float x,y;
    cout<<"Enter the X-coordinate:";
    cin>>x;
    cout<<"Enter the Y-coordinate:";
    cin>>y;
    if(x==0 && y==0) cout<<"The point is at the origin";
    else if(y==0) cout<<"The point is on X-axis";
    else if(x==0) cout<<"The point is on Y-axis";
    else cout<<"The point is neither on X-axis nor on Y-axis";
}
