# include<iostream>
# include<conio.h>
using namespace std;
int main()
{
	int a,i;
	cout<<"enter the numbers whose factors are to be found\n";
	cin>>a;
	cout<<"the factors of "<<a<<" are:\n";
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		cout<<i<<endl;
	}
	return 0;
}
