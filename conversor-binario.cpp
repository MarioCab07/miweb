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
   do{

    if(x%2==0){

        p="0";

    }else{
        p="1";
    }

    r=p+r;
    x/=2;

   }while(x>=1);

    cout<<z<<" En binario es: "<<r;
  // system("pause");
   
}
