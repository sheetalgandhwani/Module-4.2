 //Define a class to represent a bank account .Include the 
//following  members:
 //  1. Data Member:
//  -Name of depositor, Account number, Type of account,
//  Balance amount in the account
//    2. Member Functions:
 //     -To assign values, To deposite an amount,
 //   To withdraw an amount after checking balance,
//    To display name and balance.

#include<iostream>
using namespace std;
class bank{
	public:
		char name[50],type[60];
     double acc,balance,amount,damount,wamount;
     void assign()
     {
     	cout<<"enter name of depositor"<<endl;
     	cin>>name;
     	cout<<"enter account number:"<<endl;
     	cin>>acc;
     	cout<<"account type"<<endl;
     	cin>>type;
     	cout<<"Balance amount in the account"<<endl;
     	cin>>amount;
     	
     	}
     	
     	
		 void depo()
		 {
		 	cout<<"enter the amount to deposite"<<endl;
		 	cin>> damount;
		 }
		 
		 
		 void withdraw()
		 {
		 	cout<<"enter the  amount to withdraw"<<endl;
		 	cin>>wamount;
		 	balance= amount+damount-wamount;
		 	
		 }
		 
		 
     void display()
     {
     	cout<<"Name of depositor is:  "<<name<<endl;
     	cout<<"Balance is:"<<balance<<endl;
		 }
     
		
	
};
int main()
{
	bank b1;
	b1.assign();
	b1.depo();
	b1.withdraw();
	b1.display();
	
}
