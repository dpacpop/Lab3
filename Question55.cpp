# include<iostream>
# include<conio.h>
using namespace std;
int main()
{
	int a,b,c=0,d,e,i;
	cout<<"enter the number to check if it is strong number or not\n";
	cin>>a;
	b=a;
	while(b!=0)
	{
		d=b%10;
		b=b/10;
		e=1;
		for(i=1;i<=d;i++)
		e=e*i;
		c=c+e;
	}
	if(a==c)
	cout<<"the number is a strong number";
	else
	cout<<"the number is not a strong number";
	return(0);
}
