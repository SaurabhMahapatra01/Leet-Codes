#include<bits/stdc++.h>
 using namespace std;
 char nextGreatestLetter(vector<char>& letters, char target) {
   int start=0;
   int end = letters.size()-1;
   int mid =start;
   while(start<=end){
      mid = (start + end)/2;
      
       if(target < letters[mid]){
         end = mid-1;
      }
      else{
         start = mid + 1;
      }
   }
   return letters[start % letters.size()];
    }
 int main()
 {
    vector<char>ar;
   int n;
   char num;
   cin>>n;
   for(int i=0;i<n;i++)
   {
      cin>>num;
      ar.push_back(num);
   }
   char target;
   cin>>target;
   cout<<nextGreatestLetter(ar, target);
   
    return 0;
 }