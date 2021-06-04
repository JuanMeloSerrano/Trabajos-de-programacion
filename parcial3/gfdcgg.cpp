#include <iostream>
using namespace std;
int main(){
	int A[5];
   for(int i = 4; i>= 0; i--){
   	A[i]= 2*(4-i)+1;
   	cout<<A[i];
   }
    
   return 0;
}
