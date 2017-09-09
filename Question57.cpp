# include<iostream>
# include<conio.h>
using namespace std;
int main()
{
	int a=1,b=1,c,d,n,i,j;
	cout<<"enter the natural number limit\n";
	cin>>n;
	cout<<"the fibonacci series upto "<<n<<" is:\n";
	while(a<=n && b<=n)
	{
		cout<<a<<", "<<b<<", ";
		a=a+b;
		b=a+b;
	}
	if(a<=n)
	cout<<a;
	return 0;
}
