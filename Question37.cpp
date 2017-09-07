# include<iostream>
# include<conio.h>
using namespace std;
int main()
{
	long int a,b,c,s=1;
	cout<<"enter the natural number whose reverse is to be found\n";
	cin>>a;
	b=a;
	while(b!=0)
	{
		b=b/10;
		s=s*10;
	}
	while(a!=0)
	{
		s=s/10;
		c=a%10;
		a=a/10;
		b=b+(c*s);
	}
	cout<<"the reverse number is "<<b;
	return(0);
}
