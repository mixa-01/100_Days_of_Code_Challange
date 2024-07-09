#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
ios_base::sync_with_stdio(false); 
cin.tie(NULL);  
ll a , b , c;

int t;
cin >> t;
int v[t];
int ans =0;
for (int i = 0; i < t; ++i)
{
    cin >> v[i];

}
    for(int i = 0 ; i<t; i++){
    if(v[i]==v[i+1]){
        ans++;
    }

    }



cout << ans;
return 0;
}  
  