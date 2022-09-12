#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    int n=s.size();
    int sum=0;
    for(int i=0;i<n/2;i++){
      if(s[i]!=s[n-i-1]){
        sum+=abs(s[n-i-1]-s[i]);
      }
    }
    cout<<sum<<"\n";
  }
  //write your code here
  
  return 0;
}
