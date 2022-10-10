#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int t;
  cin>>t;
  while(t--){
    int n,cnt=0;
    cin>>n;
    while(n!=0){
      if(n%10==5){
        cnt++;
      }
      n=n/10;
    }
    cout<<cnt<<"\n";
  }
  return 0;
}
