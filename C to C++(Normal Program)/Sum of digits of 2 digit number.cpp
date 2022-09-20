#include<iostream>

using namespace std;

class Sum
{
    private:
            int n,sum;
    public:
            void getdata()
            {
                cout<<"Enter 2 digit No.:";
                cin >> n;
            }
            void display()
            {
                sum=n%10;
                n=n/10;
                sum=sum+n;
                cout<<"\nSum of digits of 2 digit No.:"<<sum;
            }
};
int main()
{
    Sum S;
    S.getdata();
    S.display();
    return 0;
}