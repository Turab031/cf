#include <bits/stdc++.h>
using namespace std;
void solve(){
    vector<int>ans;
    int n ;
    cin>>n;
    vector<int>v = {10,100,1000,10000,100000};
    for(auto &it:v){
        if(n%it!=0){
            ans.push_back(n%it);
            n-=(n%it);
        }
    }
    for(auto &it:ans){
        cout<<it<<" ";
    }
    cout<<"\n";
}
int main()


{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;

}