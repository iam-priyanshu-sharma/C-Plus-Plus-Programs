/*  C++ Program to Access Protected Data Member using Inheritance  */

#include <iostream>

using namespace std;

class A{
        private:
                int a;
        protected:
                int p;
        public:
                void get_a(int a){
                        this->a=a;
                }
                void put_a(){
                        cout<<"a="<<a<<endl;
                }
};
class B: public A{
        private:
                int b;
        public:
                void get_b(int b){
                        this->b=b;
                }
                void get_p(int p){
                        this->p=p;
                }
                void put_b(){
                        cout<<"b="<<b<<endl;
                }               
                void put_p(){
                        cout<<"p="<<p<<endl;
                }               
};
int main(){
        
        B objB;
        
        objB.get_a(10);
        objB.get_b(20);
        objB.get_p(30);
        
        objB.put_a();
        objB.put_b();
        objB.put_p();
        
        return 0;
}