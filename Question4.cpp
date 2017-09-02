# include<iostream>
# include<conio.h>
using namespace std;
int main()
{
	int a=0,b=0,c=0;
	cout<<"enter the number\n";
	cin>>a;
	b=a%5;
	c=a%11;
	if(b==0 && c==0)
	{
		cout<<"the number is divisible by 5 and 11.";
	}
	else if(b==0 && c!=0)
	{
		cout<<"the number is divisible by 5 but not divisible by 11.";
	}
	else if(b!=0 && c==0)
	{
		cout<<"the number is not divisible by 5 but is divisible by 11.";
	}
	else
	{
		cout<<"the number is neither divisible by 5 nor 11.";
	}
	return 0;
}
