/*
0   1  2  3 
11 22 33 44


sum =0
i      sum=sum+a[i]        i++
--------------------------
0      0+a[0]=0+11=11       1
1      11+a[1]=11+22=33     2
2	   33+a[2]=33+33=66     3
3	   66+a[3]=66+44=110    4
5........................
*/
#include<iostream>
using namespace std;

int main()
{
	int a[4],i;
	
	cout<<"\n Enter 4 elements : ";
	for(i=0;i<4;i++)
		cin>>a[i];
		
	cout<<"\n The entered array elements = ";
	for(i=0;i<4;i++)
	{
		if(a[i]%2==0)
			cout<<a[i]<<"\t";
	}
}
