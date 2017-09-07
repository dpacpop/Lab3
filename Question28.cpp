# include<iostream>
# include<conio.h>
using namespace std;
int main()
{
	int a,n,s=0;
	cout<<"enter the natural number limit for the sum\n";
	cin>>n;
	for(a=2;a<=n;a=a+2)
	{
		s=s+a;
	}
	cout<<"sum of even numbers from 1 to "<<n<<" is "<<s;
	return(0);
}
