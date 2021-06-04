#include<iostream>
using namespace std;
int main(){
	int filA, colA, filB, colB;
	cout<<"NOTA: El numero de filas y colunas de la matriz A y B deben coincidir"<<endl;
	cout<<"Ingrese el numero de filas de la matriz A: ";
	cin>>filA;
	cout<<"Ingrese el numero de columnas de la matriz A: ";
	cin>>colA;
	cout<<"Ingrese el numero de filas de la matriz B: ";
	cin>>filB;
	cout<<"Ingrese el numero de columnas de la matriz B: ";
	cin>>colB;
	
	if(filA == filB && colA == colB){
		
		int  A[filA][colA], B[filA][colB], C[filA][colA];
		cout<<endl<<"Matriz A."<<endl;
	  for( int i=0;i<filA;i++){
	     for(int j=0;j<colA;j++){
	            cout<<"A["<<i<<"]["<<j<<"]:";
	            cin>>A[i][j];
	      }
	  }
	  cout<<endl<<"Matriz B."<<endl;
	   for( int i=0;i<filB;i++){
	      for(int j=0;j<colB;j++){
	            cout<<"B["<<i<<"]["<<j<<"]:";
	            cin>>B[i][j];
	      }
	   }
	 for( int i=0;i<filA;i++){
	     for(int j=0;j<colA;j++){
	            C[i][j]=A[i][j]+B[i][j];
	      }
	 }
	 cout<<endl<<"Matriz A + matriz B = matriz C."<<endl;
	 for( int i=0;i<filA;i++){
	     for(int j=0;j<colA;j++){
	 
	            cout<<"["<<C[i][j]<<"]";
	      }
	      cout<<endl;
	  }
		
	}else{
		cout<<"Las matrices no se pueden sumar."<<endl;
	}
}
