//Write a program to swap the two numbers using friend function
// without using third variable.
 
#include<iostream>
using namespace std;

class A{
	private:
		 int a=10,b=20;
		 
		  public:
		  void display()
		  {
		  	cout<<"before wapping value of a is "<<a<<"  and b is: "
				<<b<<endl;
			}
			friend void swap(A &s1);
	    
};

void swap(A &s1)
{
	  
	s1.a=s1.a+s1.b;
	s1.b=s1.a-s1.b;
	s1.a=s1.a-s1.b;
	cout<<"after swapping value of a is "<<s1.a<<" and  b is: "
	 <<s1.b<<endl;
	
}

int main()
{  
  A s1;
  s1.display();
	swap(s1);
}
