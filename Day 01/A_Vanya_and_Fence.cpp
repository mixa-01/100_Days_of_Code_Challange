#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
ios_base::sync_with_stdio(false); 
cin.tie(NULL);  
ll a , b , c;
int t;
int m =0 , n=0;
cin >> a >> b;
vector<int>v;
for(int i =0 ; i<a; ++i){
    cin >> t;
    v.push_back(t);
    if(v[i]>b){m++;}
    else n++;
}

cout <<(m*2)+n<<"\n";
return 0;
}  
  