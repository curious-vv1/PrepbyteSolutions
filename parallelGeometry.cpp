#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--){
    int n=12;
    int a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    sort(a,a+n);
    if(a[0]==a[3] && a[4]==a[7] && a[8]==a[11]){
      cout<<"yes"<<"\n";
    }
    else{
      cout<<"no"<<"\n";
    }
  }
  //write your code here
  
  return 0;
}
