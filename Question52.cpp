# include<iostream>
# include<conio.h>
using namespace std;
int main()
{
	int a,b,c,n,i;
	cout<<"enter the natural number limit\n";
	cin>>n;
	cout<<"the Armstrong numbers between 1 and "<<n<<" are:\n";
	for(i=1;i<=n;i++)
	{
		a=i;
		c=0;
		while(a!=0)
    	{
    		b=a%10;
    		c=c+(b*b*b);
    		a=a/10;
    	}
    	if(c==i)
    	cout<<c<<endl;
	}
	return 0;
}
