# include<iostream>
# include<conio.h>
using namespace std;
int main()
{
	int a,b,c,i;
	cout<<"enter the natural numbers whose HCF(GCD) is to be found\n";
	cin>>a>>b;
	if(a>=b)
	{
		for(i=1;i<=b;i++)
		{
			if(a%i==0 && b%i==0)
			c=i;
		}
	}
	else
	{
		for(i=1;i<=a;i++)
		{
			if(a%i==0 && b%i==0)
			c=i;
		}
	}
	cout<<"the HCF(GCD) of "<<a<<" and "<<b<<" is "<<c;
	return 0;
}
