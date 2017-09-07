# include<iostream>
# include<conio.h>
using namespace std;
int main()
{
	long int a,c,s=1;
	cout<<"enter the natural number whose product of digits is to be found\n";
	cin>>a;
	while(a!=0)
	{
		c=a%10;
		a=a/10;
		s=s*c;
	}
	cout<<"the product of digits is "<<s;
	return(0);
}
