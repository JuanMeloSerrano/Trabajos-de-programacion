#include <iostream>
using namespace std;
int main(){
	int  b[3][3];
	int v=0;
   for(int i = 0; i< 3 ; i++){
   	for(int j = 0; j< 3 ; j++){
   		if(i+j==4){
   			b[i][j]=2*i;
		   }else{
		   	b[i][j]=i-j;
		   }
   }
   }
   for(int i = 0; i< 3 ; i++){
   	for(int j = 0; j< 3 ; j++){

   			cout<<b[i][j];
   }
   cout<<endl;
   }

   return 0;
}
