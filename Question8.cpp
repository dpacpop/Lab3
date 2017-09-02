# include<iostream>
# include<conio.h>
using namespace std;
int main()
{
	char a;
	cout<<"enter the character\n";
	cin>>a;
	switch(a)
	{
		case 'a':
		case 'e':
		case 'i':	
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			cout<<"the character is a vowel";
			break;
		default:
			cout<<"the character is not a vowel";
	}
	return 0;
}
