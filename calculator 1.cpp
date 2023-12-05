#include<iostream>
using namespace std;
class student{
	public:
		int a,b,total;
		void get()
		{
			cout<<"enter two values"<<endl;
			cin>>a>>b;
		}
		void add()
		{
		   total=a+b;
			cout<<"addition is "<<total<<endl;
		}
		void sub()
		{
			
			total=a-b;
			cout<<"subtraction is "<<total<<endl;
		}
		void mul()
		{
		    
			total=a*b;
			cout<<"multiplication is "<<total<<endl;	
		}
		void div()
		{
		  
			total=a/b;
			cout<<"division is "<<total<<endl;	
		}
};
int main()
{
	student e1;
	e1.get();
	e1.add();
	e1.sub();
	e1.mul();
	e1.div();
}
