#include<iostream>
using namespace std;
class bank
{
	public:
	long int acc,balance;
	string name;
	int depo;
	int wth;
	void bankde(int a,string b,int c)
	{
		acc=a;
		name=b;
		balance=c;
	}
    void deposit()
	{
		cout<<"\nEnter Amount to be deposited:";
		cin>>depo;
		balance+=depo;
	}
    void withdraw()
	{
		cout<<"\nEnter Amount to be witdraw:";
		cin>>wth;
		balance-=wth;
	}
	void display()
	{
		cout<<"\nAccount holder Name:"<<name;
		cout<<"\nAccount Number:"<<acc;
		cout<<"\nBalance:"<<balance;
	}
}b1;
void input()
{
	long int a,c;
	char b[1000];
	cout<<"\nACCOUNT NUMBER:";
	cin>>a;
	cout<<"\nACCOUNT HOLDER NAME:";
	cin>>b;
	cout<<"\nACCOUNT BALANCE:";
	cin>>c;
	
	b1.bankde(a,b,c);
	
}

int main()
{
	cout<<"----------------------------------"<<endl;
	cout<<"-------------BANK DETAIL----------"<<endl;
	cout<<"----------------------------------"<<endl;
	int e;
	for(int j=0;;j++)
	{
	
	cout<<"\n\n1.Enter detail..\n2.Deposit..\n3.Withdraw..\n4.Display Balance..\n5.Exit..\n\n\n";
	cout<<"Enter option(1/2/3/4/5):";
	cin>>e;
	cout<<"\n\n";
	switch(e)
	{
		case 1:
			input();
			continue;
		case 2:
			b1.deposit();
			continue;
		case 3:
			b1.withdraw();
			continue;
		case 4:
			b1.display();
			continue;
		case 5:
			return 0;
			break;
		default:
			return 0;
			break;
			
			
	}
}
}

