#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n;
    cout<<"Ile liczb chcesz wpisac do pliku? "; cin>>n;
    ofstream pisanie("plik.txt");
    for(int i=1; i<=n; i++){
            int b; cout<<"Wpisuj "<<i<<" liczbe: "; cin>>b;
            pisanie<<b<<" ";}
    pisanie.close();




    ifstream czytanie("plik.txt");
    char zawartosc;
    while(czytanie.get(zawartosc)){
        cout<<zawartosc;
    }
    czytanie.close();
    return 0;
}
