#include <iostream> //kwadrat pusty
using namespace std;

int main()
{
    int n, i, h;
    cout<<"Jaki kwadrat chcesz? "; cin>>n;
        for(h=0; h<n; h++){
            for(i=0; i<n; i++){
                if(i==0||i==n-1||h==0||h==n-1){
                   cout<<"*";
                }else{
                   cout<<" ";
                }
            } cout<<endl;
        }
    return 0;
}
