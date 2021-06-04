#include <iostream>
using namespace std;
int main(){
	double cort1, cort2, cort3, definit;
    cout<<"Programa que calcula el promedo de una asignatura."<<endl;
    cout<<"ingrese la nota del primer corte: ";
    cin>>cort1;
    cout<<"ingrese la nota del segundo corte: ";
    cin>>cort2;
    cout<<"ingrese la nota del tercer corte: ";
    cin>>cort3;
    cort1 = cort1 * 0.3;
    cort2 = cort2 * 0.3;
    cort3 = cort3 * 0.4;
    definit = (cort1 + cort2 + cort3);
    cout<<"La definitiva es: "<<definit<<endl;
   return 0;
}
