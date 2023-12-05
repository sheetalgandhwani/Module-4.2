 //Write a program to calculate the area of circle,rectangle and
 // triangle using Function Overloading.
 
 #include<iostream>
using namespace std;
class space{
	
	public:
		      
		    void area(float r)
		    {
		    	float total;
		    	total=3.14*r*r;
		    	cout<<"area of circle is :"<<total<<endl;
		    	
				}
				void area(int l,int b)
				{
					int total;
					total=l*b;
					cout<<"area of rectangle is :"<<total<<endl;
				}
					void area(double base,double hei)
				{
					double total;
					total=(base*hei)/2;
					cout<<"area of triangle is:"<<total<<endl;
				}
				  
};
 int main()
 {
 	 space s1;
 	 s1.area(4);
 	 s1.area(3,3);
 	 s1.area(3.3,4.5);
 	 
	} 
