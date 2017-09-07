# include<iostream>
# include<conio.h>
using namespace std;
int main()
{
	long int a,b,c,s=0;
	cout<<"enter the natural number whose first and last digits are to be found\n";
	cin>>a;
	c=a%10;
	b=a;
	while(a!=0)
	{
		b=a;
		a=a/10;
	}
	cout<<"the first and the last digits are "<<b<<" and "<<c;
	return(0);
}
