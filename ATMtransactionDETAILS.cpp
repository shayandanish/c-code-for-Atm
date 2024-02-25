#include<iostream>
#include<cmath>
using namespace std;
void startAmount();
void deposit();
void withdraw();
void remaining();


    int option,start_amount,op,code;
	double Amount_after_deposit,Amount_after_withdraw;
	char ch;
	int dep,count=0;
    int withdw;
     int cash;
int main()
{
	
 
 
	do
	{
	cout<<"*************ATM TRANSACTION DETAILS***************"<<endl;
    cout<<"1.Start Amount : "<<endl;
	cout<<"2.Cash Deposit : "<<endl;
	cout<<"3.Cash Withdraw: "<<endl;
	cout<<"4.Remaining Balance : "<<endl;
	cout<<"************      **************"<<endl;
	
	
	cout<<"Enter your password = ";
	cin>>code; 
	if(code==2002)
	{
	cout<<"\n\t\"welcome to your account\"";
	cout<<"\noption : ";cin>>option;
	cout<<endl;
	 if(option==1)
	{
	  startAmount();
	 
	}
	else if(option==2)
	{
	
	 deposit();
	} 
	else if (option==3)
	{
	   withdraw();	
	}
	else if(option==4)
	{
	  remaining();
	}	

	
cout<<"\ndo you want to check current balance = ";
cin>>ch;

}
else
{	
	cout<<count<<"\" Sorry You typed invalid code \" ";
}
	}
	while(ch!='n'||'N'&&ch=='y'||'Y');

	
}






void startAmount()
{
	cout<<"Enter your amount = ";
	cin>>start_amount;
	
}





void deposit()
{
	cout<<"Enter amount of cash deposit = ";
	cin>>dep;
    
}



void withdraw()
{   
	cout<<"Enter amount of withdraw cash = ";
	cin>>withdw;
	
}
void remaining()
{
	cout<<"for checking remaining balance after withdraw(press 2) / deposit cash(press 1) = "<<endl;
	cin>>op;
	if(op==1)
	{
	Amount_after_deposit=start_amount+dep;
	cout<<"You have successfully  amount of "<<dep<<" in your account and current available is "<<Amount_after_deposit;
	cout<<" on "<<"\""<<__DATE__<<"\""<<" and time "<<"\""<<__TIME__<<"\"";
	cout<<endl;
	}
	else if(op==2)
	{
	Amount_after_withdraw=start_amount-withdw;	
	cout<<"You have successfully  amount of "<<withdw<<" from your account and current available is "<<Amount_after_withdraw;
	cout<<" on "<<"\""<<__DATE__<<"\""<<" and time "<<"\""<<__TIME__<<"\"";
	cout<<endl;
	}	
}

