  // WAP to create simple calculator using class.
  
  
#include<iostream>
using namespace std;
class calculator{
	public:
		    int a=100,b=50;
	    	float total;
		    void get()
		    {
		    	cout<<"enter value of a and b"<<endl;
 	  		  cin>>a>>b;
		    	
			  }
		    void add()
		    {
		    	total=a+b;
 	  		  cout<<"addition is: "<<total<<endl;
			}
			void sub()
			{
				total=a-b;
 	  		cout<<"subtraction is: "<<total<<endl;
			}
			void mul()
			{
				
 	  		 total=a*b;
 	  		 cout<<"multiplication is: "<<total<<endl;
			}
			void div()
			{
				 total=a/b;
 	  		 cout<<"division is: "<<total<<endl;
			}
			void mod()
			{
				total=a%b;
 	  		cout<<"modulo is: "<<total<<endl;
				
			}
 };
 int main()
 {
 	calculator c1;
 	c1.get();
 	c1.add();
  c1.sub();
 	c1.mul();
 	c1.div();
 	c1.mod();
 }
				
		    
