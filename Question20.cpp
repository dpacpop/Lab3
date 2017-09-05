# include<iostream>
# include<conio.h>
using namespace std;
int main()
{
	double a,b;
	cout<<"enter the basic salary\n";
	cin>>a;
	if(a<=10000 && a>0)
	b=a+(20*a/100)+(80*a/100);
	else if(a<=20000 && a>0)
	b=a+(25*a/100)+(90*a/100);
	else if(a>20000)
	b=a+(30*a/100)+(95*a/100);
	else
	cout<<"incorrect input";
	cout<<"the gross salary, including TA and DA is: "<<b;
	return 0;
}
