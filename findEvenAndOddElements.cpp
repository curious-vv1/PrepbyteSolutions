#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  for(int i=0;i<n;i++){
    if(a[i]%2==0){
      cout<<a[i]<<" ";
    }
    else{
      continue;
    }
  }
  cout<<"\n";
  for(int i=0;i<n;i++){
    if(a[i]%2==1){
      cout<<a[i]<<" ";
    }
    else{
      continue;
    }
  }
  return 0;
}
