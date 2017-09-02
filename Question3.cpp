# include<iostream>
# include<conio.h>
using namespace std;
int main()
{
	double a=0;
	cout<<"enter the number\n";
	cin>>a;
	if(a>0)
	{
		cout<<"the number is positive.";
	}
	else if(a==0)
	{
		cout<<"the number is equal to 0.";
	}
	else if(a<0)
	{
		cout<<"the number is negative.";
	}
	return 0;
}
