#include<iostream>
using namespace std;

void Max(int a,int b);
int main()
{
    int N1,N2;
    cout<<"Este programa solicita dos valores e indica cual es el mayor"<<endl;
    cout<<"Introduce el primer valor: "<<endl;
    cin>>N1;
    cout<<"Introduce el segundo valor: "<<endl;
    cin>>N2;
    Max(N1,N2);
    return 0;
}

void Max(int a,int b)
{
    if(a>b)
    {
        cout<<"El valor mayor es: \n"<<a;
    }
    else if(a<b)
    {
        cout<<"El valor mayor es: \n"<<b;
    }
    else
        cout<<"ERROR\n";
}
