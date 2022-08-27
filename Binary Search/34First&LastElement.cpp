// Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

// If target is not found in the array, return [-1, -1].

// You must write an algorithm with O(log n) runtime complexity.

 

// Example 1:

// Input: nums = [5,7,7,8,8,10], target = 8
// Output: [3,4]
// Example 2:

// Input: nums = [5,7,7,8,8,10], target = 6
// Output: [-1,-1]




#include<bits/stdc++.h>
using namespace std;
int First_Position(int nums[], int target)
{
	int ans = -1;
	int start = 0;
	int end = sizeof(nums)-1;
	while(start<=end)
	{
		int mid = start + (end - start)/2;
		if(nums[mid]==target){
			ans = mid;
			end = mid -1;
		}
		else if (nums[mid]<target){
			start = mid + 1;
		}
		else{
			end = mid -1;
		}
	}
	return ans;
}
int Last_Position(int nums[], int target)
{
	int ans = -1;
	int start = 0;
	int end = sizeof(nums)-1;
	while(start<=end)
	{
		int mid = start + (end - start)/2;
		if(nums[mid]==target){
			ans = mid;
			start = mid + 1;
		}
		else if (nums[mid]<target){
			start = mid + 1;
		}
		else{
			end = mid -1;
		}
	}
	return ans;
}
vector<int> searchRange(vector<int>& nums, int target)
{
	vector<int>result;
	int First_Occurence =  First_Position( nums,  target);
	int Last_Ocurence = Last_Position(nums, target);
	result.push_back(First_Occurence);
	result.push_back(Last_Ocurence);
	return result;
}
int main()
{
	int size, nums;
	cin>>size;
	vector<int>arr;
	for(int i=0;i<size;i++)
	{
		cin>>nums;
		arr.push_back(nums);
	}
	int target;
	cin>>target;
	First_Last_Position(arr, target);
	

	return 0;
}
