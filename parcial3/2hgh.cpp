 #include <iostream>

using namespace std;

int a,b,i;

int main ()

{

            cout<<"�digite numero de inicio:�";

            cin>>a;

            cout<<"�digite numero de finalizaci�n:�";

            cin>>b;

            cout<<"�los n�meros son:�";

            if (a<b)

                    for (i=a;i<=b;i++)

                         cout<<i<<"\t";

            else

                   for (i=a;i>=b;i--)

                        cout<<i<<"\t";

            system ("pause");

}
