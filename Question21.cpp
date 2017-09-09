# include <iostream>
# include <conio.h>
using namespace std;
int main()
{
	int a=0;
	double b=0,c=0;
	cout<<"enter the units of electricity\n";
	cin>>a;
	if(a<=50)
	b=a*0.5;
	else if(a>50 && a<=150)
	b=(50*0.5)+((a-50)*0.75);
	else if(a>150 && a<=250)
	b=(50*0.5)+(100*0.75)+((a-150)*1.20);
	else if(a>250)
	b=(50*0.5)+(100*0.75)+(100*1.20)+((a-250)*1.50);
	c=b+(20*b/100);
	cout<<"the total electricity bill is: "<<c;
	return 0;
}
