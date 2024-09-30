#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int x,y,k;
        cin>>x>>y>>k;
        bool xdir =true;
        int steps=0;
        while(x!=0 || y!=0){
            if(xdir){
                if(x>=k){
                    x=x-k;
                }
                else{
                    x=0;
                }
            }
            else{
                if(y>=k){
                    y=y-k;
                }
                else{
                    y=0;
                }
            }
            xdir = !xdir;
            steps++;
        }
        cout<<steps<<endl;
    }
    return 0;
}