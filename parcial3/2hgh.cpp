 #include <iostream>

using namespace std;

int a,b,i;

int main ()

{

            cout<<"”digite numero de inicio:”";

            cin>>a;

            cout<<"”digite numero de finalización:”";

            cin>>b;

            cout<<"”los números son:”";

            if (a<b)

                    for (i=a;i<=b;i++)

                         cout<<i<<"\t";

            else

                   for (i=a;i>=b;i--)

                        cout<<i<<"\t";

            system ("pause");

}
