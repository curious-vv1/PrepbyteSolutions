#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int t,pcnt=0,tcnt=0;
  cin>>t;
  while(t--){
    int p,t;
    cin>>p>>t;
    if(p>t){
      pcnt++;
    }
    else if(p<t){
      tcnt++;
    }
    
  }
  if(pcnt>tcnt){
    cout<<"Pragya"<<"\n";
  }
  else if(pcnt<tcnt){
    cout<<"Tina"<<"\n";
  }
  else{
    cout<<"Draw"<<"\n";
  }
  
  return 0;
}
