#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    int cnt=0;
    for(int i=0;i<s.size();i++){
      if(s[i]=='a'){
        cnt++;
      }
    }
    if((2*cnt-1)>s.size()){
      cout<<s.size()<<"\n";
    }
    else{
      cout<<2*cnt-1<<"\n";
    }
  }
  //write your code here
  
  return 0;
}
