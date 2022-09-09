#include <bits/stdc++.h>
using namespace std;

int main()
{
  char ch;
  cin>>ch;
  int i,j,k;
  for(i=1;i<=5;i++){
    for(j=1;j<=i;j++){
      cout<<j;
    } 
    for(k=5;k>=j;k--){
      cout<<"  ";
    }
    for(k=5;k>=j;k--){
      cout<<"  ";
    }
    for(k=1;k<=i;k++){
      cout<<j-k;
    }
    cout<<"\n";
  }
  
  //write your code here
  
  return 0;
}
