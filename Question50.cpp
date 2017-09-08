# include<iostream>
# include<conio.h>
using namespace std;
int main()
{
	int a,b,n,i,j;
	cout<<"enter the natural number (greater than 1) whose prime factors are to be found\n";
	cin>>n;
	cout<<"the prime factors of "<<n<<" are:\n";
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
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
	}
	return 0;
}
