#include<bits/stdc++.h>
using namespace std;

int main(){
	// Upper Pattern
	for(int i=0;i<5;i++)
	{
		// Left Pyramid
		for(int j=0;j<=i;j++)
		{
			cout<<"*";
		}

		// Middle Space
		for(int k=4-i;k>0;k--)
		{
			cout<<" ";
		}
		for(int k=4-i;k>0;k--)
		{
			cout<<" ";
		}

		// Right Pyramid
		for(int j=0;j<=i;j++)
		{
			cout<<"*";
		}

		cout<<endl;
	}

	// Lower Pattern
	for(int i=0;i<4;i++)
	{
		// Left Pyramid
		for(int j=3-i;j>=0;j--)
		{
			cout<<"*";
		}

		// Middle Space
		for(int k=0;k<=i;k++)
		{
			cout<<" ";
		}
		for(int k=0;k<=i;k++)
		{
			cout<<" ";
		}

		// Right Pyramid
		for(int j=3-i;j>=0;j--)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
