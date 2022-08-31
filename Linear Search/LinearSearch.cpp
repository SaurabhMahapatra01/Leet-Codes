#include<bits/stdc++.h>
using namespace std;
 bool linear_Search(int arr[], int n, int find)
 {
 	if(n==0){
 		return false;
 	}
 	for(int i=0;i<n;i++)
 	{
 	   if(arr[i]==find){
 	   	return  true;
 	   }	
 	}
 	return false;
 }
 int Linear_Search(int arr[], int n, int find)
 {
 	if(n==0){
 		return -1;
 	}
 	for(int i=0;i<n;i++)
 	{
 	   if(arr[i]==find){
 	   	return  i;
 	   }	
 	}
 	return -1;
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
	int find;
	cin>>find;
	cout<<linear_Search(arr,n,find)<<endl;
	cout<<Linear_Search(arr,n,find);
	
	return 0;
}