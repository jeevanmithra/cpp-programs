#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,flag=1;
	cin>>n;
	for(int i=2;i<(int)sqrt(n)+1;i++)
	{
		if(n%i==0)
		{
			cout<<"not prime";
			flag=0;
			break;
		}
	}
	if(flag)
	cout<<"prime";
	return 0;
}
