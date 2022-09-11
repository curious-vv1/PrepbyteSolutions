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
      if(i%2==0){
        cout<<a[i]<<" ";
      }
    }
    cout<<"\n";
  }
  //write your code here
  
  return 0;
}
