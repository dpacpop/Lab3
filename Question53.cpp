# include<iostream>
# include<conio.h>
using namespace std;
int main()
{
	int a,b=0,c,i;
	cout<<"enter the number to check if it is perfect number or not\n";
	cin>>a;
	for(i=1;i<a;i++)
	{
		if(a%i==0)
		b=b+i;
	}
	if(a==b)
	cout<<"the number is a perfect number";
	else
	cout<<"the number is not a perfect number";
	return(0);
}
