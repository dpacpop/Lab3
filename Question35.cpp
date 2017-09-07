# include<iostream>
# include<conio.h>
using namespace std;
int main()
{
	long int a,b,c,s=0;
	cout<<"enter the natural number whose sum of digits is to be found\n";
	cin>>a;
	while(a!=0)
	{
		c=a%10;
		a=a/10;
		s=s+c;
	}
	cout<<"the sum of digits is "<<s;
	return(0);
}
