#include<iostream>
using namespace std;
int main()
{
	int x,y,n;
	cout<<"enter first value: ";
	cin>>x;
	cout<<"enter second value: ";
	cin>>y;
	
	cout<<"\t1: Addition"<<endl;
	cout<<"\t2: Substraction"<<endl;
	cout<<"\t3: Multiplication"<<endl;
	cout<<"\t4: Divison"<<endl;
	cout<<"\t5: Reminder"<<endl;
	cout<<"select operator: ";
	cin>>n;
	switch(n)
	{
		case 1:
			cout<<"addition is: "<<x+y;
			break;
		case 2:
			cout<<"substraction is: "<<x-y;
			break;
		case 3:
			cout<<"multiplication is: "<<x*y;
			break;
		case 4:
			cout<<"divition is: "<<x/y;
			break;
		case 5:
			cout<<"reminder is: "<<x%y;
			break;
		default:
			cout<<"\\invalid operator\\";
	}
}
