# include<iostream>
# include<conio.h>
using namespace std;
int main()
{
	int a,b,n,i,j,s=0;
	cout<<"enter the natural number limit\n";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		b=0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			b++;
		}
		if(b==1)
		s=s+i;
	}
	cout<<"the sum of prime numbers between 1 and "<<n<<" is: "<<s;
	return 0;
}
