#include<iostream>
using namespace std;

const float pi=3.14;
float areaoftriangle(float n,float b,float h);
float areofcircle(float r);
float areaofrectangle(float l,float b);
float areaofsqare(float side);


float areaoftriangle(float n,float b,float h)
{
    float ar;
    ar=n*b*h;
    return ar;
}
float areaofcircle(float r)
{
    float ar;
    ar=pi*r*r;
    return ar;
}
float areaofrectangle(float l,float b)
    {
    float ar;
    ar=l*b;
    return ar;
    }

float areaofsquare(float side)
{

    float ar;
    ar=side*side;
    return ar;
}


int main()
{
        float b,h,r,l;
        float result;
        float side;

        cout<<"Enter the Base & Height of Triangle : ";
        cin>>b>>h;
        result=areaoftriangle(0.5,b,h);
        cout<<"Area of Triangle: "<<result<<endl;

        cout<<"Enter the Radius of Circle: ";
        cin>>r;
        result=areaofcircle(r);
        cout<<"Area of Circle: "<<result<<endl;

        cout<<"Enter the Length & Breadth of Rectangle: ";
        cin>>l>>b;
        result=areaofrectangle(l,b);
        cout<<"Area of Rectangle: "<<result<<endl;

        cout<<"Enter the side of square : ";
        cin>>side;
        result=areaofsquare(side);
        cout<<" Area of square : "<<result<<endl;

        return 0;

}

