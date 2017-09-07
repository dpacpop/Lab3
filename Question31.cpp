# include<iostream>
# include<conio.h>
using namespace std;
int main()
{
	long int a,s=0;
	cout<<"enter the natural number whose number of digits is to be calculated(max. limit=9 digits)\n";
	cin>>a;
	while(a!=0)
	{
		a=a/10;
		s++;
	}
	cout<<"the number of digits is "<<s;
	return(0);
}
