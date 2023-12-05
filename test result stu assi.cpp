#include<iostream>
using namespace std;
class student{
	public:
		int roll;
		 void get()
		 {
		 	//for(i=1;i<=3;i++)
		 	//{
			  cout<<"enter roll number of first student"<<endl;
		 	  cin>>roll;
		 	 //}
		 }
};

class test: public student{
	 public:
	 	int m1,m2;
	 	void set()
	 	{
	 	   cout<<"enter the marks obtained in physics "<<endl;
	 		 cin>>m1;
	 		 cout<<"enter the marks obtained in mathematics"<<endl;
	 		 cin>>m2;
		 }
};

class result:public test{
	public:
		int total;
	 	void show()
	 	{
	 		  total=m1+m2;
				cout<<"total marks obtained in  test: "<<total<<endl;
	 		 
	 		 
		 }
	
};


int main()
{
	result r1;
	r1.get();
	r1.set();
	r1.show();
}
