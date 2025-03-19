#include<bits/stdc++.h>
using namespace std;

int main(){
  int k=0;
  for(int i=0;i<5;i++){
    for(int j=5-i;j>=1;j--){
      k++;
      cout<<k<<" ";
    }
    cout<<endl;
    k=0;
  }
  return 0;
}
