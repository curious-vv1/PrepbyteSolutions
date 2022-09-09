#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    int chhota=a[0];
    int bda=a[0];
    // cout<<chhota<<bda;
    for(int i=1;i<n;i++){
      if(a[i]<chhota){
        chhota=a[i];
      }
      if(a[i]>bda){
        bda=a[i];
      }
    }
    cout<<chhota<<" "<<bda<<"\n";
  }
  //write your code here
  
  return 0;
}
