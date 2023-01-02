/*  C++ Program for Complex Operations using Operator Overloading */

#include<iostream>
#include<stdio.h>
using namespace std;
class complex
{
        int real;
        float image;
        public:
        void getdata()
        {
                cout<<"\n enter the real part of the complex :: ";
                cin>>real;
                cout<<"\n enter the imaginary part of the complex :: ";
                cin>>image;
        }
        void operator + (complex);
        void operator - (complex);
};

void complex :: operator +  (complex c1)
{
        complex temp;
        temp.real=real+c1.real;
        temp.image=image+c1.image;
        if (temp.image>=0)
        {
                cout<<"\n complex no. after addition :: ";
                cout<<temp.real<<"+"<<temp.image<<"i\n";
        }
        else
        {
                cout<<"\n complex no. after addition :: ";
                cout<<temp.real<<temp.image<<"i\n";
        }
}
void complex ::operator-(complex c1)
{
        complex temp;
        temp.real = real-c1.image;
        temp.image= image-c1.image;
        if (temp.image>=0)
        {
                cout<<"\n complex no. after subtraction :: ";
                cout<<"\n temp.real"<<"+"<<temp.image<<"i\n";
        }
        else
        {
                cout<<"\n complex no. after subtraction :: ";
                cout<<temp.real<<temp.image<<"i\n";
    }
}
int main()
{

        complex c1, c2;
        int n;
        do
        {
                cout<<"\n 1. Input data for complex no. ";
                cout<<"\n 2. Addition of complex no. ";
                cout<<"\n 3. Subtraction of complex no. ";
                cout<<"\n 4. Quit";
                cout<<"\n Enter your choice :: ";
                cin>>n;
                switch(n)

                {
                         case 1:
                         cout<<endl<<"\n Enter the data for First Complex No......";
                         c1.getdata();
                         cout<<endl<<"\n Enter the data for seconds Complex No.....";
                         c2.getdata();

                         break;

                         case 2:
                         c1+c2;

                         break;

                         case 3:
                         c1-c2;

                         break;

                         case 4:
                         exit(1);
                         break;
                        }
                } while (n!=4);
     return 0;
}