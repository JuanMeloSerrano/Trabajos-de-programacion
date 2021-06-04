 #include <iostream>
 #include <math.h>
using namespace std;
int main (){
	double v=0;
	int a[]={-1,3,-6,7,9};
	for(int i=0; i<5; i++){
		v=v+a[i]*a[i];
	}
	cout<<sqrt(v)<<endl;
return 0;
}
