# include<iostream>
# include<conio.h>
using namespace std;
int main()
{
	int a,b=1,i;
	cout<<"enter the numbers whose factorial is to be found\n";
	cin>>a;
	for(i=1;i<=a;i++)
	{
		b=b*i;
	}
	cout<<"the factorial of "<<a<<" is "<<b;
	return 0;
}
