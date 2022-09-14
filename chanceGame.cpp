#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--){
    int p,s1,s2;
    cin>>p>>s1>>s2;
    int bda=max(s1,s2);
    int chhota=min(s1,s2);
    for(int i=0;i<10000;i++){
      int sol=bda+i;
      if(sol>=p && sol-chhota>=2){
        cout<<i<<"\n";
        break;
      }
    }
  }
  //write your code here
  
  return 0;
}
