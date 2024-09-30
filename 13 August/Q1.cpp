#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int a,b;
        cin>>a>>b;
        int mini = INT_MAX;
        for(int c=a;c<=b;c++){
            int value = (c-a)+(b-c);
            mini = min(mini,value);
        }
        cout<<mini<<endl;
    }
    return 0;
}