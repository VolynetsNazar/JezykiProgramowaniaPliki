#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    int n;
    string linijka;
    ifstream plikCzytanie("pliczek.txt");
    plikCzytanie>>n;
    double*Tab=new double[n];
    for(int i=0; i<n; i++){
        plikCzytanie>>Tab[i];
    }
    for(int i=0; i<n; i++){
        cout<<Tab[i]<<" ";
    }
    delete[]Tab;
    plikCzytanie.close();
    return 0;
}
