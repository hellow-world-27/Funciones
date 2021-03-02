#include<iostream>
int Factorial(int a);

using namespace std;
int main()
{
    int N1;
    cout<<"Este programa calcula el factorial de un numero"<<endl;
    cout<<"Introdusca el numero"<<endl;
    cin>>N1;
    int fact=Factorial(N1);
    cout<<"El factorial es: "<<fact;
}

int Factorial(int a)
{
    int i;
    int resultado=1;
    for(i=1;i<=a;i++)
    {
        resultado *=i;
    }
    return resultado;
}
