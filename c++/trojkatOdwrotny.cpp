#include <iostream> //trojkat odwrotny
using namespace std;

int main()
{
    int n, w, h;
    cout<<"Jaki trojkat chcesz? "; cin>>n;
        for(h=1; h<=n; h++){
            for(w=1; w<=n; w++){
                if(w>n-h){
                cout<<"*";}else{cout<<" ";}
            } cout<<endl;
        }
    return 0;
}
