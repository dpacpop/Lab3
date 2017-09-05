# include<iostream>
# include<conio.h>
using namespace std;
int main()
{
	double a,b;
	cout<<"enter the selling price and the cost price\n";
	cin>>a>>b;
	if(a>=0 && b>=0)
	{
	    if(a>b)
	    cout<<"the profit is "<<(a-b);
	    else if(a<b)
	    cout<<"the loss is "<<(b-a);
	    else
	    cout<<"there is neither profit nor loss.";
	}
	return 0;
}
