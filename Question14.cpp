# include<iostream>
# include<conio.h>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter the angles of the triangle\n";
	cin>>a,b,c;
	if(a>0 && b>0 && c>0)
	{
		if((a+b+c)==180)
		cout<<"these are the angles of a triangle.";
	}
	else
	cout<<"these are not the angles of a triangle.";
	return 0;
}
