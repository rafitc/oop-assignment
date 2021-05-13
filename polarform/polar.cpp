#include <iostream>
#include <math.h>
using namespace std;

void convert_to_rect()
{
    float r, angle, a ,b;
    cout<<"Enter R : ";
    cin>>r;
    cout<<"Enter Angle : ";
    cin>>angle;
    cout<<"Polar form is: "<<r<<"*(cos("<<angle<<")+isin("<<angle<<"))"<<endl;
    a=r*cos(angle);
    b=r*sin(angle);
    cout<<"Rectangular form is: "<<a<<" + i("<<b<<")"<<endl;
}
void convert_to_pola()
{
    float x, y, rad, a, r, pi=3.14;
    cout<<"Enter the value of X: ";
    cin>>x;
    cout<<"Enter the value of Y: ";
    cin>>y;
    rad=atan(y/x);
    a=(180/pi)*rad;
    r=sqrt(x*x + y*y);
    cout << "\nThe polar coordinates are: " << endl;
    cout << "  Distance from origin: " << r << endl;
    cout << "  Angle (in degrees) from x-axis: " << a << endl;
}

int main() 
{ 
    int option;
    cout<<"1 - Polar to Rectangular "<<endl;
    cout<<"2 - Rectangular to Polar "<<endl;
    cin>>option;
    switch(option){
        case 1:
            convert_to_rect();
            break;
        case 2:
            convert_to_pola();
            break;
        default:
            cout<<"Invalid option";
            exit(0);
            break;
    }
    
    return 0; 
} 