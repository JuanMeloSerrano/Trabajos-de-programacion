#include <iostream>
using namespace std;
int main(){
	int A[13];
   for(int i = 0; i<13; i++){
   	A[i]=i;
   	cout<<A[i];
   	cout<<endl;
   	if(i%7==2){
   		cout<<"nume"<<A[i]<<endl;
   	}
   }
    
   return 0;
}
