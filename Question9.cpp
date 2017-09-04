# include<iostream>
# include<conio.h>
using namespace std;
int main()
{
	char a;
	cout<<"enter the character\n";
	cin>>a;
	if((a>=65 && a<=90) || (a>=97 && a<=122))
	{
		cout<<"the charcter is an alphabet";
	}
	else if((a>=30) && (a<=39))
	{
		cout<<"the character is a number";
	}
	else if(a!=0)
	{
		cout<<"the character is a special character";
	}
	else
	cout<<"the character is null";
	return 0;
}
