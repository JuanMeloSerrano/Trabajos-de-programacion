#include <iostream>
using namespace std;
int main()
{int m,n,f,c,i,j,k;
float A[100][100],B[100][100],C[100][100];
cout<<endl<<"Ingrese la filas y colomnas de la matriz A."<<endl;
cin>>m;
cin>>n;
cout<<endl<<"---------------------------------------------------"<<endl;
cout<<endl<<"Ingrese la filas y colomnas de la matriz B."<<endl;
cin>>f;
cin>>c;
cout<<endl;
if (n==f){
cout<<endl<<"---------------------------------------------------"<<endl;
cout<<"Ingrese los valores de la matriz A."<<endl;
for (i=1;i<=m;i++)
 for (j=1;j<=n;j++){ 
cout<<"A["<<i<<"]["<<j<<"]=";
cin>>A[i][j];
}
 
cout<<endl;
cout<<endl<<"---------------------------------------------------"<<endl;
cout<<"Ingrese los valores de la matriz B."<<endl;
for (i=1;i<=f;i++)
 for (j=1;j<=c;j++){ 
cout<<"A["<<i<<"]["<<j<<"]=";
cin>>B[i][j];
}

 for (i=1;i<=m;i++){
 	for (j=1;j<=c;j++){
	  C[i][j]=0;
	}
 }

 for (i=1;i<=m;i++){
 	for (j=1;j<=c;j++){
         for (k=1;k<=n;k++){
		 C[i][j]+=A[i][k]*B[k][j];
          }
       }
    }

cout<<endl<<"La multiplicacion de las matrices es: "<<endl;
  for (i=1;i<=m;i++){
   for (j=1;j<=c;j++){
    cout<<"["<<C[i][j]<<"]";
		}
		cout<<endl;
    }
}else{
cout<<endl;
cout<<endl<<"---------------------------------------------------"<<endl;
cout<<"Estas matrices no se pueden multiplicar "<<endl;
cout<<"debido a que el numero de columnas de la"<<endl;
cout<<"matriz A es diferente al numero de filas"<<endl;
cout<<"de la matriz B, !Vuelva a intentarlo!   "<<endl;
}
}
