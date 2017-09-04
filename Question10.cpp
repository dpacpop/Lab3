# include<iostream>
# include<conio.h>
using namespace std;
int main()
{
	char a;
	cout<<"enter the character\n";
	cin>>a;
	if(a>=65 && a<=90)
	{
		cout<<"the character is in upper case.";
	}
	else if(a>=97 && a<=122)
	{
		cout<<"the character is in lower case.";
	}
	else
	{
		cout<<"the character is not an alphabet";
	}
	return 0;
}
