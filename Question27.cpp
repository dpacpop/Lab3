# include<iostream>
# include<conio.h>
using namespace std;
int main()
{
	int a,n,s=0;
	cout<<"enter the natural number limit for the sum\n";
	cin>>n;
	for(a=1;a<=n;a++)
	{
		s=s+a;
	}
	cout<<"sum of "<<n<<" natural numbers is "<<s;
	return(0);
}
