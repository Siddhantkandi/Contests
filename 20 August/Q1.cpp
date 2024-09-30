// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int x,y;
        cin>>x>>y;

        if(x<=y){
            if(n%x==0){
                cout<<(n/x)<<endl;
            }
            else{
                cout<<(n/x)+1<<endl;
            }
        }
        else{
            if(n%y==0){
                cout<<(n/y)<<endl;
            }
            else{
                cout<<(n/y)+1<<endl;
            }
        }

    }

    return 0;
}