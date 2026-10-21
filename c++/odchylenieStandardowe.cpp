#include <iostream> //obliczenia sredniej kwadratow
#include <cmath>
using namespace std;

int main()
{
    int n, i, h;
    cout<<"Ile liczb chcesz wpisac? "; cin>>n;
    double liczby[n], sumaKwadratow=0, suma=0;
    for(int i=0; i<=n-1; i++){
        cout<<"Wpisuj "<<i+1<<" liczbe: ";
        cin>>liczby[i];
    }
    for(int i=0; i<=n-1; i++){
        sumaKwadratow+=liczby[i]*liczby[i];
        suma+=liczby[i];
    }
    cout<<"Sx: "<<sqrt(sumaKwadratow/n-pow(suma/n, 2));
    return 0;
}
