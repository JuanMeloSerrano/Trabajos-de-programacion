#include <iostream>
#include <math.h>
using namespace std;
int main(){
    double base, altura, hipot, perim;
    cout<<"ingrese la base del triagulo: "<<endl;
    cin>>base;
    cout<<"ingrese la altura del triangulo"<<endl;
    cin>>altura;
    hipot = sqrt((base*base)+(altura*altura));
    perim = base + altura + hipot;
    cout<<"El perimetro del triangulo rectangulo es: "<<perim<<endl;
   return 0;
}
