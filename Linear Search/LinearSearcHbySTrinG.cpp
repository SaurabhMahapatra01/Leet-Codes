#include<bits/stdc++.h>
using namespace std;
// bool Linear_Search(char chr[],int n, char find)
//  {
//      if(n==0){
//          return false;
//      }
//      for(int i=0;i<n;i++)
//      {
//          if(chr[i]==find)
//          {
//              return true;
//          }
//      }
//      return false;
//  }
 int linear_Search(char chr[],int n, char find)
 {
    int count =0;
    if(n==0){
        return -1;
    }
    for(int i=0;i<n;i++)
    {
        if(chr[i]==find)
        {
            return i;
            count++;
        }
    }
    cout<<count<<endl;
    // count++;
    return -1;
 }
int main()
{
    int n;
    cin>>n;
    char chr[n];
    for(int i=0;i<n;i++)
    {
     cin>>chr[i];   
    }
    char find;
    cin>>find;
    // cout<<Linear_Search(chr,n,find)<<endl;
  cout<<linear_Search(chr,n, find);
}
// #include<bits/stdc++.h>
// using namespace std;
//  bool linear_Search(char chr[],int n, char find)
//  {
//      if(n==0){
//          return false;
//      }
//      for(int i=0;i<n;i++)

//      {
//          if(chr[i]==find)
//          {
//              return true;
//          }
//      }
//      return false;
//  }
// int main()
// {
//  int n;
//     cin>>n;
//     char chr[n];
//     for(int i=0;i<n;i++)
//     {
//      cin>>chr[i];   
//     }
//     char find;
//     cin>>find;
//   cout<<linear_Search(chr,n,find);;
// }