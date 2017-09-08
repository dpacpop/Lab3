# include<iostream>
# include<conio.h>
using namespace std;
int main()
{
	long a,b=0,i;
	cout<<"enter the natural number to check whether it is prime or not\n";
	cin>>a;
	for(i=1;i<a;i++)
	{
		if(a%i==0)
		b++;
	}
	if(b==1)
	cout<<"the number is prime";
	else
	cout<<"the number is not prime";
	return 0;
}
