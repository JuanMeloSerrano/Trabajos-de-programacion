#include<iostream>
#include<string>
using namespace std;
int main(){
	double p= 15.4, q=26.1, c, d;
	
	c= (p--)+(q--);
	d= (--p)-(--q);
	
	cout<<"\n "<<p;
	cout<<"\n "<<c;
	cout<<"\n "<<d;
 return 0;
}
