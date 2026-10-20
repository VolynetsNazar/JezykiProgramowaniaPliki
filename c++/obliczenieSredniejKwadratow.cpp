#include <iostream> //obliczenia sredniej kwadratow
using namespace std;

int main()
{
    int n, i, h;
    cout<<"Ile liczb chcesz wpisac? "; cin>>n;
    double liczby[n], sumaKwadratow=0;
    for(int i=0; i<=n-1; i++){
        cout<<"Wpisuj "<<i+1<<" liczbe: ";
        cin>>liczby[i];
    }
    for(int i=0; i<=n-1; i++){
        sumaKwadratow+=liczby[i]*liczby[i];
    }
    cout<<"Srednia kwadratow wynosi: "<<sumaKwadratow/n;    
    return 0;
}
