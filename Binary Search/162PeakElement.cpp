#include<bits/stdc++.h>
using namespace std;
int PeakElement(int arr[])
{
	int start =0;
	int end = sizeof(arr)-1;
	while(start<end)
	{
      int mid = start + (end - start)/2;
      if(arr[mid]> arr[mid+1]){
      	end =mid;
      }
      else{
      	start = mid + 1;
      }
	}
	return start;
}
int main()
{
	
    int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<PeakElement(arr)<<endl;

	
	return 0;
}