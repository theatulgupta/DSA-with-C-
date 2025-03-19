#include<bits/stdc++.h>
using namespace std;

int main(){
	int g=1;
	for(int i=0;i<4;i++){
		// Left Number Pyramid
		for(int j=0;j<=i;j++){
			cout<<g++;
		}
		g--;

		// Spacing
		for(int j=0;j<8-2*(i+1);j++){
			cout<<" ";
		}

		// Right Number Pyramid
		for(int j=0;j<=i;j++){
			cout<<g--;
		}
		cout<<endl;
		g=1;
	}
	return 0;
}
