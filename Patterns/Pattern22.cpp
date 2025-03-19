#include<bits/stdc++.h>
using namespace std;

int main(){
	for(int i=0;i<7;i++)
	{
		for(int j=0;j<7;j++)
		{
			int top=i;
			int left=j;
			int bottom=7-j;
			int right=7-i;
			cout<<(4-min(min(top,bottom),min(right,left)));

		}
		cout<<endl;
	}
	return 0;
}
