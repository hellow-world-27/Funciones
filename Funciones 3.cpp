#include<iostream>
using namespace std;

int Max(int a,int b);
int main()
{
    int N1,N2,N3;
    cout<<"Este programa solicita tres valores e indica cual es el mayor"<<endl;
    cout<<"Introduce el primer valor: "<<endl;
    cin>>N1;
    cout<<"Introduce el segundo valor: "<<endl;
    cin>>N2;
    cout<<"Introduce el tercer valor: "<<endl;
    cin>>N3;
    int max1=Max(N1,N2);
    int max2=Max(max1,N3);
    cout<<"El numero mayor es: \n"<<max2;
    return 0;
}

int Max(int a,int b)
{
    int c;
    if(a>b)
    {
        c=a;
    }
    else
    {
        c=b;
    }
    return c;
}
