# include<iostream>
# include<conio.h>
using namespace std;
int main()
{
	int a,b,c,d,n,i,j;
	cout<<"enter the natural number limit\n";
	cin>>n;
	cout<<"the Strong numbers between 1 and "<<n<<" are:\n";
	for(i=1;i<=n;i++)
	{
		a=i;
		d=0;
		while(a!=0)
    	{
    		b=a%10;
    		a=a/10;
    		c=1;
    		for(j=1;j<=b;j++)
    		c=c*j;
    		d=d+c;
    	}
    	if(d==i)
    	cout<<d<<endl;
	}
	return 0;
}
