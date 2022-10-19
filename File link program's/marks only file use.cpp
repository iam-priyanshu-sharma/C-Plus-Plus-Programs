using namespace std;
class result
{
	protected:
	int m1,m2,m3,m4,p1,p2;
	float p;
	void marks()
	{
	 cout<<"Enter the marks of C++ ";
	 cin>>m1;
	 cout<<"Enter the marks of Numerical methodology ";
	 cin>>m2;
	 cout<<"Enter the marks of Accounts ";
	 cin>>m3;
	 cout<<"Enter the marks of DBMS ";
	 cin>>m4;
	 cout<<"Enter the marks of 1st lab paper ";
	 cin>>p1;	 	
	 cout<<"Enter the marks of 2nd lab paper ";
	 cin>>p2;
	}
	
	void percentage()
	{ 
		
		p= m1+m2+m3+m4+p1+p2;
		p=(p*100)/600;
	}
	
	void display()
	{
		cout<<endl<<"********YOUr RESULT****************"<<endl;
		cout<<"Marks of C++ ->                      "<<m1<<endl;
		cout<<"Marks of Numerical methodology ->    "<<m2<<endl;
		cout<<"Marks of Accounts ->                 "<<m3<<endl;
		cout<<"Marks of DBMS ->                     "<<m4<<endl;
		cout<<"Marks of 1st lab paper ->            "<<p1<<endl;
		cout<<"Marks of 2nd lab paper ->            "<<p2<<endl;
		
		cout<<"Your percentage                      "<<p<<"%"<<endl;
		if(p>40)
		cout<<endl<<"Congratulation \nYou eligible for next semester"<<endl;
		else
		cout<<"Sorry. \n work hard for next time."<<endl;
	}
		
};
