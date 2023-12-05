//Write a program to find the multiplication values and the
// cubic values using inline function. 

#include<iostream>
using namespace std;
inline float mul(float x,float y){
	 return (x*y);
}
inline float cube_x(float x){
	 return(x*x*x);
}
inline float cube_y(float y){
	 return(y*y*y);
}

int main()
{
	
	 float value=mul(5,7);
	 cout<<"multiplication of x and y is: "<<value<<endl;
	 
	 float var1=cube_x(5);
	 cout<<"cube of x(5) is: "<<var1<<endl;
	 
	 float  var2=cube_y(7);
	 cout<<"cube of y(7) is: "<<var2<<endl;
}
