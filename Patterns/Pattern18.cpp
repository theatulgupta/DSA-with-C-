#include<bits/stdc++.h>
using namespace std;

int main(){
	char ch='E';
	char ch2='E';
	for(int i=0;i<5;i++)
	{	ch=ch2;
		for(int j=0;j<=i;j++){
			cout<<ch++;
		}
		ch2--;
		cout<<endl;
	}
	return 0;
}
