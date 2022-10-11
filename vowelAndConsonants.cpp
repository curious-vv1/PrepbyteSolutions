#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    int v=0,c=0;
    for(int i=0;i<s.size();i++){
      if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
        v++;
      }
      else{
        c++;
      }
    }
    cout<<v<<" "<<c<<"\n";
  }
  return 0;
}
