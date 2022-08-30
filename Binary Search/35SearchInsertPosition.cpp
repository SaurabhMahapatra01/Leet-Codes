// Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

// You must write an algorithm with O(log n) runtime complexity.

 

// Example 1:

// Input: nums = [1,3,5,6], target = 5
// Output: 2
// Example 2:

// Input: nums = [1,3,5,6], target = 2
// Output: 1

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