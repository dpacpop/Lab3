#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	int a,b=0,c=0,d,i,j=1;
	cout<<"enter a binary number(type 1 before  the number).\n";
	cin>>a;
	b=a;
	while(b>0)
	{
		b=b/10;
		c++;
	}
	b=a;
	for(i=1;i<c;i++)
	{
		d=b%10;
		b=b/10;
		a=a-(d*pow(10,i-1));
		if(d==0)
		d=1;
		else if(d==1)
		d=0;
		a=a+(d*pow(10,i-1));
		j=j*10;
	}
	cout<<"the 1's complement of the number is(removing the first digit i.e. 1 from the number) "<<a;
	return 0;
}
