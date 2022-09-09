#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  int cnt=0;
  while(t--){
    int t,c;
    cin>>t>>c;
    if(c-t>=2){
      cnt++;
    }
  }
  cout<<cnt;
  //write your code here
  
  return 0;
}
