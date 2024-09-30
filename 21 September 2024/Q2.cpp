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

        vector<pair<long long,int> > ans;
        long long leaves = 0;
        for(int j=1;j<=n;j++){
            long long newleaves = j*j;
            leaves+= newleaves;
            ans.push_back(make_pair(newleaves,j+k));
            if(ans.size()>=1 && j==ans[0].second){
                leaves = leaves - ans[0].first;
                ans.erase(ans.begin());
            }
        }

        if(leaves%2==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }

    return 0;
}