#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n;
    cout<<"Ile liczb chcesz wpisac do pliku? "; cin>>n;
    ofstream pisanie("plik.txt");
    for(int i=1; i<=n; i++){
            if(i%2==0){pisanie<<i<<" ";}
    }
    pisanie.close();




    ifstream czytanie("plik.txt");\
    char zawartosc;
    while(czytanie.get(zawartosc)){
        cout<<zawartosc;
    }
    czytanie.close();
    return 0;
}
