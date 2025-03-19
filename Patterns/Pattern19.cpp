#include<bits/stdc++.h>
using namespace std;

int main(){
	// Upper Pattern
	for(int i=0;i<5;i++){
		// Upper Left Pyramid
		for(int j=4-i;j>=0;j--)
		{
			cout<<"*";
		}

		// Left Spaces
		for(int k=0;k<i;k++)
		{
			cout<<" ";
		}

		// Right Spaces
		for(int k=0;k<i;k++)
		{
			cout<<" ";
		}

		// Upper Right Pyramid
		for(int j=4-i;j>=0;j--)
		{
			cout<<"*";
		}
		cout<<endl;
	}

	// Lower Pattern
	for(int i=0;i<5;i++){
		// Upper Left Pyramid
		for(int j=0;j<=i;j++)
		{
			cout<<"*";
		}

		// Left Spaces
		for(int k=4-i;k>0;k--)
		{
			cout<<" ";
		}

		// Left Spaces
		for(int k=4-i;k>0;k--)
		{
			cout<<" ";
		}

		// Upper Right Pyramid
		for(int j=0;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
