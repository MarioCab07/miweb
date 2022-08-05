#include <iostream>
using namespace std;

string binario(int x);
int main()
{

    int n1;
    string resultado;
    
    

    cout<<"Bienvenido al conversor de decimal a binario"<<endl;
    cout<<"Ingrese el numero que quiere convertir: "; cin>>n1;
    resultado=binario(n1);
   


    cout<<n1<<" En binario es: "<<resultado;
  // system("pause");
   
}

string binario(int x){
    string r = " ";
    string p;
    do
    {

        if (x % 2 == 0)
        {

            p = "0";
        }
        else
        {
            p = "1";
        }

        r = p + r;
        x /= 2;

    } while (x >= 1);
    return r;
}