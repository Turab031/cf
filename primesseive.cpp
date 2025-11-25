#include<bits/stdc++.h>
using namespace std;
vector<bool>solve(int n){
    vector<bool>p(n+1,true);
    p[0]= false;
    p[1] = false;
    for(int i =2;i*i<=n;i++){
        if(p[i]==true){
            for(int j = i*i;j<=n;j+=i){
                p[j] = false;

            }
        }
    }
    return p;

   


}
int main(){
    int n;
    cin >> n;

    vector<bool> prime = solve(n);

    if (n >= 4 && prime[n - 2]) {
        cout << 2 << " " << n - 2 << "\n";
    } else {
        cout << -1 << "\n";
    }

    return 0;
}