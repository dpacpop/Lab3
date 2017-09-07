# include<iostream>
# include<conio.h>
using namespace std;
int main()
{
	long int a;
	int i,j;
	int b[10];
	for(i=0;i<10;i++)
	b[i]=0;
	cout<<"enter the natural number.\n";
	cin>>a;
	while(a!=0)
	{
		i=a%10;
		for(j=0;j<10;j++)
		{
			if(i==j)
			b[j]++;
		}
		a=a/10;
	}
	cout<<"the frequencies of the digits are:\n";
	for(j=0;j<10;j++)
	{
		cout<<j<<" : "<<b[j]<<"\n";
	}
	return(0);
}
