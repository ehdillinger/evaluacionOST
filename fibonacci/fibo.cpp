#include <iostream>

using namespace std;

int anterior1,anterior2,actual,i;

int main (void)
{
    anterior1=0;
    anterior2=1;
    cout <<anterior1<<endl;
    cout <<anterior2<<endl;
    for (i=1;i<=20;i++) 
    /* El 20 hace referencia a la cantidad de numeros a imprimir */
    {
        actual=anterior1+anterior2;
        anterior1=anterior2;
        cout <<actual<<endl;
        anterior2=actual;
    }   
    return 0;
}
