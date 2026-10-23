#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    int n;
    string linijka;
    cout<<"Do ktorej: "; cin>>n;
    ofstream plik("pliczek.txt");
    for(int i=1; i<=n; i++){
    if(i%2==0){
    plik<<i<<" ";}}
    plik.close();

    ifstream plikCzytanie("pliczek.txt");
    while(getline(plikCzytanie,linijka) ){
        cout<<linijka<<" ";
    }


    plik.close();
    return 0;
}
