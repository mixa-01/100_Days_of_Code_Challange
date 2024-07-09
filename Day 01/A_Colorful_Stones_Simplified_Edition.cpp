#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
ios_base::sync_with_stdio(false); 
cin.tie(NULL);  
ll a , b , c;
int ans =0;
string s , t;
cin >> s >> t;
for (int i = 0; i <t.length(); i++)
{
    if(s[ans]==t[i]){
        ans+=1;
    }
}

cout<<ans+1<<"\n";
return 0;
}  
  