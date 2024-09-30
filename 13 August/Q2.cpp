#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n;
        cin>>n;

        for(int j=n-1;j>=0;j++){
            for(int k=0;k<4;k++){
                char ch;
                cin>>ch;
                if(ch=='#'){
                    cout<<k<<" ";
                    break;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}