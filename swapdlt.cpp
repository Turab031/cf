#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ;

    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n = s.size();
        int count1 = 0;
        int count0=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                count0++;
            }else{
                count1++;
            }
        }

        int lenght =0;
        for(int i=0;i<n;i++){
            if(s[i]=='0'&& count1>0){
                lenght++,count1--;
            }
            else if(s[i]=='1'&& count0>0){
                lenght++,count0--;
            }
            else{
                break;
            }
        }
          cout<<n-lenght<<endl;
    }

  
    return 0;

}