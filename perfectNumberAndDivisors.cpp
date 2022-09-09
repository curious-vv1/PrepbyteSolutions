#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int perfect=0;
    if(n%2==0){
      for(int i=1;i<=n/2;i++){
        if(n%i==0){
          perfect+=i;
        }
      }
      if(perfect==n){
        cout<<"true"<<"\n";
      }
      else{
        cout<<"false"<<"\n";
      }
    }
    else{
      cout<<"false"<<"\n";
    }
  }
  
  //write your code here
  
  return 0;
}
