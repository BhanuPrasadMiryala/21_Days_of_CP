#include<std.h>
using namespace std;
int main()
{
	int i =4;
	double d=4.0;
	string s= "Hacktoberfest ";
	int a;
	double b, e;
	string c;
	cin>>a;
	cin>>b;
	cin.ignore();
	getline(cin,c);
	e=(double)b+d;
	cout<<i+a<<endl;
	cout<<fixed;
	cout<<std::setprecicion(1) e<<endl;
	cout<<s+c<<endl;

}