#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	long int binnum, rem, quot;
	int octnum[100], i=1, j;
	cout<<"Enter any binary number : ";
	cin>>binnum;
	quot=binnum;
	while(quot!=0)
	{
		octnum[i++]=quot%8;
		quot=quot/8;
	}
	cout<<"Equivalent octal value of "<<binnum<<" :\n";
	for(j=i-1; j>0; j--)
	{
		cout<<octnum[j];
	}
	getch();
}
