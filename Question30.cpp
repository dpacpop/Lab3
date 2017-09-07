# include<iostream>
# include<conio.h>
using namespace std;
int main()
{
	int a,n,s=0;
	cout<<"enter the natural number whose multiplication table is to be printed\n";
	cin>>n;
	for(a=1;a<=10;a++)
	{
		s=n*a;
		cout<<n<<"*"<<a<<"="<<s<<"\n";
	}
	return(0);
}
