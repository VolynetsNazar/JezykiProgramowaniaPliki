#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n; double suma; char b[50];
    cout<<"Jak nazwa sie plik? "; cin>>b;


    ifstream czytanie(b);
    czytanie>>n;
    double *x = new double[n];
    for(int i=0; i<=n; i++){
       double b;
       czytanie>>b;
       x[i]=b;
    }
    for(int i=0; i<=n-1; i++){
        suma+=x[i];
    }
    cout<<"Srednia: "<<suma/n;
    czytanie.close();
    return 0;
}
