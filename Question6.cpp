# include<iostream>
# include<conio.h>
using namespace std;
int main()
{
	int a=0;
	cout<<"enter the year\n";
	cin>>a;
	if((a%4)==0)
	{
		if((a%100)==0)
		{
			if((a%400)==0)
			{
				cout<<"the year is leap.";
			}
			else
			{
				cout<<"the year is not leap.";
			}
		}
		else
		{
			cout<<"the year is leap.";
		}
	}
	else
	{
		cout<<"the year is not leap.";
	}
	return 0;
}
