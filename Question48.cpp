# include<iostream>
# include<conio.h>
using namespace std;
int main()
{
	int a,b,n,i,j;
	cout<<"enter the natural number limit\n";
	cin>>n;
	cout<<"the list of prime numbers between 1 and "<<n<<" is:\n";
	for(i=1;i<=n;i++)
	{
		b=0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			b++;
		}
		if(b==1)
		cout<<i<<endl;
	}
	return 0;
