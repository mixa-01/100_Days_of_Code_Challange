#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
ios_base::sync_with_stdio(false); 
cin.tie(NULL);  
ll a , b , c ,s=0, d=0, ans=0;
int t;

cin >> t;
vector<int> v(t);
for(int i = 0 ; i< t; ++i){
    cin >> v[i];
    ans +=v[i];

}
int l = 0 , r = t-1;
int z = 0;
while(l<=r){
    if(z%2==0)
    
     {
        if(v[l]>=v[r]){
         s+=v[l];
         l++;
        }
        else {
         s+=v[r];
         r--;
        } 
    }
    else{
        if(v[l]>=v[r]){
         d+=v[l];
         l++;
        }
        else {
         d+=v[r];
         r--;
        } 
    }
    z++;
}



    cout << s<<" "<<d;
return 0;
}  