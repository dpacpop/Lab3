# include<iostream>
# include<conio.h>
using namespace std;
int main()
{
	long int a,b,c=1,i;
	cout<<"enter the base and the exponent(both integers)\n";
	cin>>a>>b;
	for(i=0;i<=b;i++)
	c=c*a;
	cout<<"the power is "<<c;
	return 0;
}
