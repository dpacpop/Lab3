# include<iostream>
# include<conio.h>
using namespace std;
int main()
{
	cout<<"the various ASCII characters are :\n";
	char c=0;
	int a,i;
	for(i=0;i<256;i++)
	{
		a=c;
		cout<<a<<" : "<<c<<"\n";
		c++;
	}
	return(0);
}
