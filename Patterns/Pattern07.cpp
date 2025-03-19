#include<bits/stdc++.h>
using namespace std;

int main(){
	int i,j,k,l;
	for(i=0;i<5;i++){
		for(j=4-i;j>0;j--){
			cout<<" ";
		}
		for(k=0;k<=i;k++){
			cout<<"*";
		}
		for(l=1;l<=i;l++){
			if(i>0){
				cout<<"*";
			}
		}
		cout<<endl;
	}
	return 0;
}
