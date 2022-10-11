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
    int num=n;
    int number=n;
    int digit=0,sum=0;
    while(n!=0){
      n=n/10;
      digit++;
    }
    for(int i=0;i<digit;i++){
      int e=num%10;
      sum+=(e*e*e);
      num=num/10;
    }
    if(sum==number){
      cout<<"Yes"<<"\n";
    }
    else{
      cout<<"No"<<"\n";
    }
  }
  return 0;
}
