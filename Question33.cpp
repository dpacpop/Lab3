# include<iostream>
# include<conio.h>
using namespace std;
int main()
{
	long int a,b,c,s;
	cout<<"enter the natural number whose sum of first and last digits is to be found\n";
	cin>>a;
	c=a%10;
	b=a;
	while(a!=0)
	{
		b=a;
		a=a/10;
	}
	s=b+c;
	cout<<"the sum of first and the last digits is "<<s;
	return(0);
}
