#include<bits/stdc++.h>
using namespace std;
int Search_Insert_Position(int arr[], int target)
{
	int start = 0;
	int end = sizeof(arr)-1;
	while(start<=end)
	{
		int mid = start + (end - start)/2;
		if(arr[mid]==target){
			return mid;
		}
		else if (arr[mid]<target){
			start = mid + 1;
		}
		else{
			end = mid -1;
		}
	}
	return start;
}
int main()
{
	int size;
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	int target;
	cin>>target;
	cout<<Search_Insert_Position(arr, target);
	

	return 0;
}