#include<bits/stdc++.h>
using namespace std;
int min(){
    vector<int>nums = {1,2,3,4,5,6,7};
    int n = nums.size();
    int  sum  = 0;
    int k =3;
    int low = 0;
    int high = k-1;
    for(int i =low;low<=high;i++){
        sum+=nums[i];

    }
    int res = INT_MIN;

    while(high<n){
        res = max(sum,res);
        low++;
        high++;
        sum = sum -nums[low-1];
        if(high==n){
            break;
        }
        sum = sum+nums[high];
        
    }
    cout<<res<<endl;
    return 0;

}