#include <iostream> //trojkat zwykly
using namespace std;

int main()
{
    int n, w, h;
    cout<<"Jaki trojkat chcesz? "; cin>>n;
        for(h=0; h<=n-1; h++){
            for(w=0; w<=n-1; w++){
                if(w==h||w<h){
                cout<<"*";}else{cout<<" ";}
            } cout<<endl;
        }
    return 0;
}
