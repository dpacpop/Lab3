# include<iostream>
# include<conio.h>
using namespace std;
int main()
{
	long int a,b,c,d,s=1;
	cout<<"enter the natural number to check if it is palindrome or not.\n";
	cin>>a;
	b=a;
	while(b!=0)
	{
		b=b/10;
		s=s*10;
	}
	d=a;
	while(d!=0)
	{
		s=s/10;
		c=d%10;
		d=d/10;
		b=b+(c*s);
	}
	if(a==b)
	cout<<"the number is a palindrome.";
	else
	cout<<"the number is not a palindrome";
	return(0);
}
