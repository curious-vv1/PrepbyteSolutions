#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int n,sum=0;
  cin>>n;
  while(n>0){
    sum+=n%10;
    n/=10;
  }
  cout<<sum<<"\n";
  return 0;
}
