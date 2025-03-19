#include<bits/stdc++.h>
using namespace std;

int main(){
	char ch='A';
	for(int i=0;i<5;i++){

		for(int j=4-i-1;j>=0;j--)
		{
			cout<<" ";
		}
		ch='A';
		for(int k=0;k<=i;k++)
		{
			cout<<ch++;
		}
		ch--;
		for(int k=1;k<=i;k++)
		{
			cout<<--ch;
		}
		cout<<endl;
	}
	return 0;
}
