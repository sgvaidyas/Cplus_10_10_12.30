/*
0   1  2  3 
11 22 33 44  

sum=0
i   a[i]  a[i]%2==1
     		sum+=a[i]   i++
--------------------------
0   11    0+11=11        1
1   22                   2
2   33    11+33=44       3
3   44                   4
4-----------------------------
*/
#include<iostream>
using namespace std;

int main()
{
	int a[4],i,sum=0;
	
	cout<<"\n Enter 4 elements : ";
	for(i=0;i<4;i++)
		cin>>a[i];
		
	cout<<"\n The entered array elements = ";
	for(i=0;i<4;i++)
	{
		cout<<a[i]<<"\t";
	}
	for(i=0;i<4;i++)
	{
		if(a[i]%2==1)
		{
			sum=sum+a[i];
		}
	}
	cout<<"\n sum of odd num in array = "<<sum;
}
