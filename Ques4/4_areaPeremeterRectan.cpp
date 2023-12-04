/*Given the length and breadth of a rectangle, write a program to find whether numerically the area of
the rectangle is greater than its perimeter.
Input 1: length = 5 breadth = 7

Output 1: Area is greater than perimeter.*/
#include<iostream>
using namespace std;
int main()
{
    int l,b,a,p;
    /*l=length
      b=breadth
      a=area
      p=perimeter
    */
   cout<<"length= ";
   cin>>l;
   cout<<"breadth= ";
   cin>>b;
   a = l * b;
   p = 2 * (l + b);
   if(a>p) cout<<"Area is greater than perimeter";
   else cout<<"Area is not greater than perimeter";


}
