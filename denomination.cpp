#include <bits/stdc++.h>
using namespace std;




int main()
{
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int rem=0;
    while(n>=1000){
      n-=1000;
      rem++;
    }
    while(n>=500){
      n-=500;
      rem++;
    }
    while(n>=100){
      n-=100;
      rem++;
    }
    while(n>=50){
      n-=50;
      rem++;
    }
    while(n>=20){
      n-=20;
      rem++;
    }
    while(n>=10){
      n-=10;
      rem++;
    }
    while(n>=5){
      n-=5;
      rem++;
    }
    while(n>=2){
      n-=2;
      rem++;
    }
    while(n>=1){
      n-=1;
      rem++;
    }
    cout<<rem<<"\n";
  }
  //write your code here
  
  return 0;
}
