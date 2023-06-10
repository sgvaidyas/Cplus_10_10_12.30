#include<iostream>
using namespace std;
void pattern1(int);
int main()
{
	int n;
	cout<<"\n Enter the val of n = ";
	cin>>n;
	pattern1(n);
}

void pattern1(int n)
{
	int i,j,mid;
	/*
	if(n%2==0) //even
		mid = n/2;
	else
		mid = (n+1)/2;
	*/
	mid = (n%2==0)?  n/2   : (n+1)/2 ;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=mid;j++)
		{
			if(j==1 || i==j || i+j==n+1)
				cout<<"*";
			else
				cout<<" ";
		}
		cout<<endl;
	}	
}
