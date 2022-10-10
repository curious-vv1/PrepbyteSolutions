#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    if(n%4==0 && n%100!=0){
      cout<<"Yes"<<"\n";
    }
    else if(n%100==0 && n%400==0){
      cout<<"Yes"<<"\n";
    }
    else{
      cout<<"No"<<"\n";
    }
  }
  return 0;
}
