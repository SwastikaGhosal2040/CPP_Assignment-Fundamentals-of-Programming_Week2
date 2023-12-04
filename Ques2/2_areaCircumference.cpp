/*Given the radius of the circle, predict whether numerically the area of this circle is larger than the
circumference or not.
Input 1: radius = 4
Output 1: Area is greater than circumference.
Explanation: area = 3.14 * 4 * 4 = 50.24 unit2
Perimeter = 2 * 3.14 * 4 = 25.12 unit
Therefore area > perimeter.*/


#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float radius, pi, area, circumference;
    cout<<"radius=";
    cin>>radius;
    pi = 3.1415;
    area = pi * pow(radius,2);
    circumference = 2 * pi * radius;
    if(area>circumference) cout<<"area "<<area<<" sq.unit is greater than circumference "<<circumference<<" unit";
    else if(area<circumference) cout<<"area "<<area<<" sq.unit is not greater than circumference "<<circumference<<" unit";
    else cout<<"area "<<area<<" sq.unit is equal to circumference "<<circumference<<" unit";
}
