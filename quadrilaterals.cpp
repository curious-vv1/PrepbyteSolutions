#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--){
    int x1,y1,x2,y2,x3,y3,x4,y4;
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    int d1=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
    int d2=(x4-x3)*(x4-x3)+(y4-y3)*(y4-y3);
    int midx1=(x1+x2)/2;
    int midy1=(y1+y2)/2;
    int midx2=(x3+x4)/2;
    int midy2=(y3+y4)/2;
    if(d1==d2 && midx1==midx2 && midy1==midy2){
      cout<<"Yes"<<"\n";
    }
    else{
      cout<<"No"<<"\n";
    }
  }
  //write your code here
  
  return 0;
}
