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
	for(i=0;i<5;i++){
		// White Spaces
		for(j=5-i;j<5;j++){
				cout<<" ";
		}

		// Inverse Pyramid
		for (k = 4 - i;k>0;k--){
			cout << "*";
		}

		// Inverse Pyramid Pyramid
		for (l = 5 - i;l>0;l--){
				cout << "*";
			}
		cout << endl;
	}
	return 0;
}
