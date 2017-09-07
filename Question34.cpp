# include<iostream>
# include<conio.h>
using namespace std;
int main()
{
	long int a,b,c,d,s=1;
	cout<<"enter the natural number whose first and last digits is to be found\n";
	cin>>a;
	c=a%10;
	b=a;
	while(b!=0)
	{
		b=b/10;
		s=s*10;
	}
	s=s/10;
	d=a/s;
	a=a-c;
	a=a+d;
	a=a-(s*d);
	a=a+(s*c);
	cout<<"the new number is "<<a;
	return(0);
}
