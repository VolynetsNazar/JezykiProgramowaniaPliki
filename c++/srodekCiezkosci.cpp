#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Ile punktow chcesz wpisac? "; cin>>n;
    double *X= new double[n];
    double *Y= new double[n];
    for(int i=0; i<n; i++){
        cout<<"Wpisuj X dla "<<i+1<<" punkta: "; cin>>X[i];
        cout<<"Wpisuj Y dla "<<i+1<<" punkta: "; cin>>Y[i];
    }

    double suma_x = 0.0;
    double suma_y = 0.0;

    for (int i = 0; i < n; i++) {
    suma_x = suma_x + X[i];
    suma_y = suma_y + Y[i];
    }
    cout<<"Srodek ciezkosci dla X: "<<suma_x/n<<" dla Y: "<<suma_y / n;

    return 0;
}
