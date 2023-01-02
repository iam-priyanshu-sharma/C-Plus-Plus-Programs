/* C++ Program to Find Area of Shapes using Function Overloading */

#include<iostream>
using namespace std;
class measure
{
        public:
                void shape(int r);
                void shape(int l,int b);
                void shape(float t,int d,int e);
                void shape(long a);
                void shape(float c, long int g);
                void shape(double j);
                void shape(float h, double f);
};
void measure::shape(int r)
{
        cout<<"area of the circle is "<<3.14*r*r;
}
void measure::shape(int l,int b)
{
        cout<<"area of the rectangle is"<<l*b;
}
void measure::shape(float t,int d,int e)
{
        cout<<"area of the triangle is"<<t*d*e;
}
void measure::shape(long a)
{
        cout<<"area of the square is"<<a*a;
}
void measure::shape(float c, long int g)
{
        cout<<"Volume of the cone is "<<(1/3)*3.14*c*c*g;
}
void measure::shape(double j)
{
        cout<<"Volume of the sphere is "<<(4/3)*3.14*j*j*j;
}
void measure::shape(float h, double f)
{
        cout<<"\nVolume of the Cylinder is "<<3.14*f*f*h;
}
int main()
{
        int r,d,e,l,b;
        float t,c,h;
        long a;
        int ch;
        double j,f;
        long int g;
        measure obj;
        cout<<"\tCALCULATION OF AREA AND VOLUME";
        cout<<"\n\n1. area of circle";
        cout<<"\n2. area of rectangle";
        cout<<"\n3. area of triangle";
        cout<<"\n4. area of square";
        cout<<"\n5. Volume of the cone";
        cout<<"\n6. Volume of the sphere";
        cout<<"\n7. Volume of the cylinder";
        cout<<"\n\tEnter your choice ";
        cin>>ch;
        switch(ch)
        {
                case 1:
                        cout<<"enter the value of radius of the circle \n";
                        cin>>r;
                        obj.shape(r);
                        break;
                case 2:
                        cout<<"enter the sides of rectangle \n";
                        cin>>l>>b;
                        obj.shape(l,b);
                        break;
                case 3:
                        cout<<"enter the sides of triangle \n";
                        cin>>d>>e;
                        obj.shape(0.5,d,e);
                        break;
                case 4:
                        cout<<"enter the sides of square";
                        cin>>a;
                        obj.shape(a);
                        break;
                case 5:
                        cout<<"\nEnter the radius of the cone";
                        cin>>c;
                        cout<<"\nEnter the height of the cone";
                        cin>>g;
                        obj.shape(c,g);
                        break;
                case 6:
                        cout<<"\nEnter the radius";
                        cin>>b;
                        obj.shape(b);
                        break;
                case 7:
                        cout<<"\nEnter the radius";
                        cin>>f;
                        cout<<"\nEnter the height";
                        cin>>h;
                        obj.shape(h,f);
                        break;
                default:
                        cout<<"\nThe choice entered is a wrong choice";
        }
        return 0;
}