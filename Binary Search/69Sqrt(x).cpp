#include<bits/stdc++.h>
using namespace std;
int mySqrt(int x) {
        int start =0;
        int end = x-1;
        while(start<end)
        {
        	int mid = start + (end-start)/2;
        	if(mid*mid > x){
        		end = mid;
        	}
        	else{
        		start = mid + 1;
        	}
        }
        return start -1;
    }
int main()
{
	int n;
	cin>>n;
	cout<<mySqrt(n);

	return 0;
}