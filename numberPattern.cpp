#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int n;
  cin>>n;
  for(int i=0;i<=5;i++){
    for(int j=1;j<=5-i;j++){
      cout<<j<<" ";
    }
    cout<<"\n";
  }
  return 0;
}
