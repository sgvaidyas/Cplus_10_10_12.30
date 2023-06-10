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
	int i,j;
	for(i=1;i<=2*n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==1 || i==n || i==2*n || (j==1 && i<=n)|| (j==n && i>=n))
				cout<<"*";
			else
				cout<<" ";
		}
		cout<<endl;
	}	
}
