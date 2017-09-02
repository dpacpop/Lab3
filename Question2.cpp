# include<iostream>
# include<conio.h>
using namespace std;
int main()
{
	double a=0,b=0,c=0;
	cout<<"enter the three numbers\n";
	cin>>a>>b>>c;
	if(a==b && a==c)
	{
		cout<<"the numbers are equal.";
	}
	else if(a>=b && a>=c)
	{
		cout<<"the greater number is: "<<a;
	}
	else if(b>=a && b>=c)
	{
		cout<<"the greater number is: "<<b;
	}
	else if(c>=a && c>=b)
	{
		cout<<"the greater number is:"<<c;
	}
	return 0;
}
