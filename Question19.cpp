# include<iostream>
# include<conio.h>
using namespace std;
int main()
{
	double a,b,c,d,e,f;
	cout<<"enter the marks(out of 100) in Physics, Chemistry, Mathematics, Biology and Computer\n";
	cin>>a>>b>>c>>d>>e;
	f=(a+b+c+d+e)/5;
	cout<<"percentage marks :"<<f<<endl;
	if(f>=90)
	cout<<"Grade A";
	else if(f>=80)
	cout<<"Grade B";
	else if(f>=70)
	cout<<"Grade C";
	else if(f>=60)
	cout<<"Grade D";
	else if(f>=50)
	cout<<"Grade E";
	else
	cout<<"Grade F"; 
	return 0;
}
