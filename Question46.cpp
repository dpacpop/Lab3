# include<iostream>
# include<conio.h>
using namespace std;
int main()
{
	long a,b,c,i;
	cout<<"enter the natural numbers whose LCM is to be found\n";
	cin>>a>>b;
	if(a>=b)
	{
		for(i=a*b;i>=a;i--)
		{
			if(i%a==0 && i%b==0)
			c=i;
		}
	}
	else
	{
		for(i=a*b;i>=b;i--)
		{
			if(i%a==0 && i%b==0)
			c=i;
		}
	}
	cout<<"the LCM of "<<a<<" and "<<b<<" is "<<c;
	return 0;
}
