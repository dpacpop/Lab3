# include<iostream>
# include<conio.h>
using namespace std;
int main()
{
	double a=0,b=0;
	cout<<"enter the two numbers\n";
	cin>>a>>b;
	if(a>b)
	{
		cout<<"the greater number is: "<<a;
	}
	else if(b>a)
	{
		cout<<"the greater number is: "<<b;
	}
	else
	{
		cout<<"the numbers are equal.";
	}
	return 0;
}
