#include<iostream>
#include <fstream>
using namespace std;

int getpairs(int arr[],int n,int s)
{
	int cnt = 0;
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(arr[i]+arr[j] == s)
			{
				cnt++;
			}
		}
	}
	return cnt;
}

int main()
{
	int n;
	cin >> n;
	int arr[n];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	int sum[n];
	for(int i=0; i<n; i++)
	{
		sum[i] = arr[i];
	}
	int count = 0;	
	for(int i=0; i<n; i++)
	{
		int num;
		num = getpairs(arr, n, sum[i]);
		count += num;
	}
	cout<<count<<"\n";
	return 0;
}
