# include<iostream>
# include<conio.h>
using namespace std;
int main()
{
	int a,b,n,i,j;
	cout<<"enter the natural number limit\n";
	cin>>n;
	cout<<"the Perfect numbers between 1 and "<<n<<" are:\n";
	for(i=1;i<=n;i++)
	{
		b=0;
		for(j=1;j<i;j++)
    	{
    		if(i%j==0)
    		b=b+j;
    	}
    	if(b==i)
    	cout<<b<<endl;
	}
	return 0;
}
