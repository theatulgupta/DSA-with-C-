#include<bits/stdc++.h>
using namespace std;

int main(){
	int g=1;
	for(int i=0;i<5;i++){
		for(int j=0;j<=i;j++)
		{
			cout<<g++;
		}
		cout<<endl;
	}
	return 0;
}
