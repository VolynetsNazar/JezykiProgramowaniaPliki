#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main()
{
    double kat=1, wynik;
    char b[50];
    cout<<"Jak nazwac plik? "; cin>>b;
    ofstream pisanie(b);
    while(kat!=0){
    cout<<"Podaj kat/lub zakoncz program -> 0: "; cin>>kat;
    if(kat!=0){
    wynik = sin(kat* (M_PI / 180.0));
    pisanie << "sin("<<kat<<") = " << wynik << endl;
    }}
    pisanie.close();




    ifstream czytanie(b);
    char zawartosc;
    while(czytanie.get(zawartosc)){
        cout<<zawartosc;
    }
    czytanie.close();
    return 0;
}
