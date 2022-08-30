#include<bits/stdc++.h>
using namespace std;
int Pivot(int arr[])
{
	int start = 0;
	int end = sizeof(arr)-1;
	while(start<end){
		int mid = start + (end - start)/2;
		if(mid < end && arr[mid]> arr[mid + 1]){
			return mid;
		}
		if(mid > start && arr[mid] < arr[mid - 1]){
			return mid -1;
		}
		if(arr[mid] <= arr[start]){
			end = mid - 1;
		}
		else{
			start = mid + 1;
		}
	}
	return -1;

}
int BinarySearch(int arr[], int target, int start, int end)
{
	
	int mid =start;
	while(start<=end){
		mid = start + (end - start)/2;
		if(target==arr[mid]){
			return mid;
		}
		else if(arr[mid]<target){
			start = mid+1;
		}
		else{
			end=mid-1;
		}
	}
	return -1;
}

int RBS(int arr[], int target)
{
    int pivot = Pivot( arr);
    //if we can't find a pivot, it means the array is not rotated
    if(pivot ==  -1)
    {
    	//just we do Binary Search
    	return BinarySearch( arr, target, 0, sizeof(arr)-1);
    }

    //if pivot is found, we have find 2 asc sorted arrays
    if(arr[pivot]==target){
    	return pivot;
    }
    if(target > arr[0]){
    	return BinarySearch(arr, target, 0, pivot -1);
    }
    return BinarySearch(arr, target, pivot + 1, sizeof(arr)-1);
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
   cout<<RBS(arr, target);
   return 0;
}