#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<long long>arr(n);
    for(int i =0;i<n;i++)cin>>arr[i];
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
        v.push_back({arr[i],i+1});


    }
    sort(v.begin(),v.end());

    vector<int>indices;
    int ans =0;

    for(auto it:v){
        if(it.first<=k){
            ans++;

            indices.push_back(it.second);
            k-=it.first;
        }else{ 
            break;
        }
    }


    cout<<ans<<" ";
    for(auto it: indices){
        cout<<it<<" ";
    }
}