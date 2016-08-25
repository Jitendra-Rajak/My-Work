#include <iostream>
#include "cal.h"
using namespace std;
int main()
{
	int a,b,r;
	cout<<"enter the numbers";
	cin>>a>>b;
	r=sum(a,b);
	cout<<"sum is :"<<r;

	r=sub(a,b);
	cout<<"sub is :"<<r;
	cout<<"Good Morning from Bhagat";
return 0;
}

