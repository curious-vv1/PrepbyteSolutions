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
  while(n>9){
    n=n/10;
  }
  cout<<n<<"\n";
  }
  return 0;
}
