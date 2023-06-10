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
	for(i=1;i<=n;i++)
	{
		//spaces
		for(j=1;j<=n-i;j++)
			cout<<" ";
		for(j=1;j<2*i;j++)
			cout<<"*";	
		cout<<endl;	
	}	
}
