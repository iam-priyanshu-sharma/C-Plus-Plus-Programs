#include<iostream>

using namespace std;

class Reverse
{
    private:
            int n,i,r,sum=0;
    public:
            Reverse(int a)
            {
                n = a;
            }
            Reverse(Reverse &rev)
            {
                n = rev.n;
            }
            void display()
            {
                for (i = n; i > 0;)
                {
                    r = i % 10;
                    sum = sum * 10 + r;
                    i = i / 10;
                }
                cout << "\nReverse of given number is:" << sum;
            }
            /*void getdata(int a)
            {
                n = a;
            }
            void rev()
            {
                for(i=n;i>0;)
                {
                    r=i%10;
                    sum=sum*10+r;
                    i = i / 10;
                }
                cout<<"\nReverse of given number is:"<<sum;
            } */       
};
int main()
{
    int a1;
    cout<<"Enter a number:";
    cin>>a1;
    Reverse R(a1);
    // R.getdata(a1);
    Reverse R1(R);
    // R1.rev();
    R1.display();
    return 0;
}