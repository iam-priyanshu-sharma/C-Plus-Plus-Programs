/* C++ Program for Complex Operations using Operator Overloading  */

#include<iostream>
#include<string>
using namespace std;
struct complex
{
float real;
float imag;
};
complex operator + (complex a,complex b);
complex operator - (complex a,complex b);
complex operator * (complex a,complex b);
complex operator / (complex a,complex b);

int main()
{
complex a,b,c;
int ch;
void menu(void);
cout<<"\nEnter the first complex no :: ";
cin>>a.real>>a.imag;
cout<<"\nEnter the second complex no :: ";
cin>>b.real>>b.imag;
menu();
while ((ch = getchar()) != 'q')
{
switch(ch)
{
case 'a':c =a + b;
cout<<"\nAddition of 2 no’s :: ";
cout<<c.real<<"+i"<<c.imag;
break;
case 's':c=a-b;
cout<<"\nSubstraction of 2 no’s :: ";
cout<<c.real<<"i"<<c.imag;
break;
case 'm':c=a*b;
cout<<"\nMultiplication of 2 no’s :: ";
cout<<c.real<<"i"<<c.imag;
break;
                                case 'd':c=a/b;
cout<<"\nDivision of 2 no’s :: ";
cout<<c.real<<"i"<<c.imag;
break;
                        }
                }
        }
void menu()
{
cout<<"\ncomplex no: operators";
cout<<"\na->addition";
cout<<"\ns->substraction";
cout<<"\nm->multiplication";
cout<<"\nd->division";
cout<<"\nq->quit";
cout<<"\n\noptions please :: ";
}
complex operator -(struct complex a, struct complex b)
{
complex c;
c.real=a.real-b.real;
c.imag=a.imag-b.imag;
return(c);
}
complex operator *(struct complex a, struct complex b)
{
complex c;
c.real=((a.real*b.real)-(a.imag*b.imag));
c.imag=((a.real*b.imag)+(a.imag*b.real));
return(c);
}
complex operator +(struct complex a,struct complex b)
{
complex c;
c.real=a.real+b.real;
c.imag=a.imag+b.imag;
return(c);
}
complex operator /(struct complex a, struct complex b)
{
complex c;
float temp;
temp=((b.real*b.real)+(b.imag*b.imag));
c.real=((a.real*b.real)+(a.imag*b.imag))/temp;
                 return(c);
}