#include <bits/stdc++.h>
using namespace std;
#define ll long long

int solve(ll n){
  if(n==0){
    return 0;
  }
  else if(n==1){
    return 1;
  }
  else if(n%2==0){
    return solve(n/2);
  }
  else if(n%2==1){
    return solve(n-1)+1;
  }
}

int main()
{
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    solve(n);
    cout<<solve(n)<<"\n";
  }
  //write your code here
  
  return 0;
}
