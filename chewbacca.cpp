#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string ans ="";

    for(int i =0;i<s.size();i++){
        char ch = s[i];
        int y = ch-'0';
        int x = 9-y;

        int digit  = min(x,y);
        if(i==0 && digit ==0){
            digit = y;
        }

        ans+=(digit+'0');

        
    
      
    }
    cout<<ans;



    return 0;

}