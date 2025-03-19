#include<bits/stdc++.h>
using namespace std;

int main(){
	char ch='A';
	for(int i=0;i<5;i++){
		for(int j=5-i;j>0;j--)
		{
			cout<<ch++;
		}
		cout<<endl;
		ch='A';
	}
	return 0;
}
