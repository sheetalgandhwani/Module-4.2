//Create a class person having members name and age.
// Derive a class student having member percentage. 
// Derive another class teacher having member salary.
//  Write necessary member function to initialize, 
//	read and write data. 
//  Write also Main function (Multiple Inheritance)

#include<iostream>
using namespace std;     //scope resolution::
class person{
	public:
	      int age;
			  char name[50];
		void set()            //method
		{
			  
			  cout<<"enter name of person:"<<endl;
			  cin>>name;
			  cout<<"enter the age of person"<<endl;
			  cin>>age;
		}
};
class student{
	   public: 
	   float percent;          
		void put()         
		{
			
			   cout<<"enter percentage of student"<<endl;
			   cin>>percent;
			   
	  }
};
class teacher:public person,public student{
      public:
			double salary;            
		       void get()   
		{
			  cout<<"enter salary of teacher"<<endl;
			  cin>>salary;
			  
		}
		void display()
		{
	    cout<<"Name of person is: "<<name<<endl;
			cout<<"Age of person is: "<<age<<endl;
			cout<<"Percentage of student is: "<<percent<<endl;
			cout<<"salary of teacher is: "<<salary;
		}
}; 
int main()
{
	  teacher t1;
	  t1.get();
	  t1.put();
	  t1.set();
	  t1.display();
}

