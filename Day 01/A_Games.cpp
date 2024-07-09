#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
ios_base::sync_with_stdio(false); 
cin.tie(NULL);  
ll a , b , c;
int t;
cin >> t;
int ans=0;
vector<int> l(t), r(t);
for (int i = 0; i < t; i++)
{
    cin >> l[i]>>r[i];
    for (int j = 0; j < i; j++){
        if(l[i]==r[j]){
            ans+=1;
        }
        if(l[j]==r[i]){
            ans+=1;
        }
    }
}

cout << ans;


return 0;
}  
  