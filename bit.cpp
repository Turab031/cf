#include <bits/stdc++.h>
using namespace std;
bool solve(string statement)
{
    if (statement == "X++" || statement == "++X")
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int n;
    cin >> n;
    int X = 0;
    for (int i = 0; i < n; i++)
    {
        string statement;
        cin >> statement;
        if(solve(statement)){
            X++;

        }else{
            X--;
        }
    }
    cout<<X<<"\n";

    return 0;
}