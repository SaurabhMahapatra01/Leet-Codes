#include<bits/stdc++.h>
using namespace std;

vector<int> searchRange(vector<int>& nums, int target) {
    vector<int>anss;
    int firstAns = firstIndex(nums, target);
    int lastAns = lastIndex(nums, target);
    anss.push_back(firstAns);
    anss.push_back(lastAns);
    return anss;

	}


   int firstIndex(vector<int>& nums, int target){
	int start=0;
	int end = nums.size()-1;
	int mid;
	int ans = -1;
	while(start<=end){
		mid = (start + end)/2;
		if(target==nums[mid]){
			ans =  mid;
			end = mid - 1;
		}
		else if(nums[mid]<target){
			start = mid+1;
		}
		else{
			end=mid-1;
		}
	}
	return ans;
 }
   int lastIndex(vector<int>& nums, int target){
 	int start=0;
	int end = nums.size()-1;
	int mid;
	int ans = -1;
	while(start<=end){
		mid = (start + end)/2;
		if(target==nums[mid]){
			ans =  mid;
			start = mid +1;
		}
		else if(nums[mid]<target){
			start = mid+1;
		}
		else{
			end=mid-1;
		}
	}
	return ans;
 }


int main()
{
	vector<int>arr;
	int n, num;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>num;
		arr.push_back(num);
	}
	int target;
	cin>>target;
	searchRange(arr, target);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}

	return 0;
}