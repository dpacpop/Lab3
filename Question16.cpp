# include<iostream>
# include<conio.h>
using namespace std;
int main()
{
	double a,b,c;
	cout<<"enter the sides of the triangle\n";
	cin>>a>>b>>c;
	if(a>0 && b>0 && c>0)
	{
		if(a==b && b==c)
		cout<<"the triangle is equilateral.";
		else if(a==b || b==c || a==c)
		cout<<"the triangle is isoceles.";
		else
		cout<<"the triangle is scalene.";
	}
	else
	cout<<"the triangle is not valid.";
	return 0;
}
