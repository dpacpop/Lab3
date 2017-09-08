# include<iostream>
# include<conio.h>
using namespace std;
int main()
{
	int a,b,c=0,n;
	cout<<"enter the natural number to check if it is armstrong number or not\n";
	cin>>n;
	a=n;
	while(a!=0)
	{
		b=a%10;
		c=c+(b*b*b);
		a=a/10;
	}
	if(c==n)
	cout<<"the number is Armstrong number.";
	else
	cout<<"the number is not Armstrong number.";
	return 0;
}
