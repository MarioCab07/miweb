#include <iostream>
using namespace std;

int main()
{

    int x,y,z;
    
    string r = " ";
    string p;

    cout<<"Bienvenido al conversor de decimal a binario"<<endl;
    cout<<"Ingrese el numero que quiere convertir: "; cin>>x;
    z=x;
    while(x>=1){

        y=x%2;
       
        if (y==1){

            p="1";
            r=p+r;
        }
        else{
            p="0";
            r=p+r;
        }
        
        x/=2;

        
    }

    cout<<z<<" En binario es: "<<r;
  // system("pause");
   
}
