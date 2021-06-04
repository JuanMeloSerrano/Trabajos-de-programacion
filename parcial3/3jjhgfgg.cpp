#include <iostream>
using namespace std;
int main(){
	int  b[]={-1,3,-6,7,9};
	int a[]={4,5,-2,0,8};
	int v=0;
   for(int i = 0; i< 5 ; i++){
   	v=v+a[i]*b[i];
   	
   }
    cout<<v;
   return 0;
}
