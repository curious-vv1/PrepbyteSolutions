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
    string s;
    cin>>s;
    int acnt=0,dcnt=0;
    for(int i=0;i<n;i++){
      if(s[i]=='A'){
        acnt++;
      }
      else{
        dcnt++;
      }
    }
    if(acnt>dcnt){
      cout<<"Aditya"<<"\n";
    }
    else if(acnt<dcnt){
      cout<<"Danish"<<"\n";
    }
    else{
      cout<<"AdiDan"<<"\n";
    }
  }
  return 0;
}
