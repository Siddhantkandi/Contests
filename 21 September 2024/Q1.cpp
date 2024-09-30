// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n,k;
        cin>>n>>k;
        vector<int> arr(n,0);
        for(int a=0;a<n;a++){
            cin>>arr[a];
        }
        int gold=0;
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[j]>=k){
                gold+= arr[j];
                continue;
            }

            if(arr[j]==0 && gold>0 ){
                count++;
                gold--;
            }
        }
        cout<<count<<endl;
    }

    return 0;
}