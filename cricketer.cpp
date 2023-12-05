//Assume a class cricketer is declared. 
//Declare a derived class batsman from cricketer. 
//Data member of batsman. Total runs, Average runs and
// best performance. Member functions input data, 
// calculate average runs, Display data. (Single Inheritance)

#include<iostream>
using namespace std;
class cricketer{
	public:
		void read()
		{
			char name[30];
		  cout<<"enter name of  first cricketer"<<endl;
			cin>>name;
			
		}
};
class batsman:public cricketer{
	public:
		void getdata()
		{
			char name[30];
			char best[30];
			int total,run1,run2,run3;
			float average;
			cout<<"enter batsman name"<<endl;
			cin>>name;
			cout<<"enter runs 1st match"<<endl;
			cin>>run1;
			cout<<"enter runs 2nd match"<<endl;
			cin>>run2;
			cout<<"enter runs 3rd match"<<endl;
			cin>>run3;
			total=run1+run2+run3;
			cout<<"total run is"<<total<<endl;
		
			average=total/3;
			cout<<"average run is"<<average<<endl;
			cout<<"enter name of crickter whose performance is best"<<endl;
			cin>>best;
			
			
			
		}
};
int main()
{
	batsman b1;
	b1.read();
	b1.getdata();
} 
