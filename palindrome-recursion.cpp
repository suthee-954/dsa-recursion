

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int f(int i,string arr,int n)
{
    if(i<=n&&arr[i]!=arr[n-i-1])
    {
        return 0;
    }
    
    if(i>=n/2)
    {
        return 1;
    }

   f(i+1,arr,n);
   
    
    
}
int main()
{
    int n;
    string arr;
    cin >> arr;
    n=arr.length();
  int j=  f(0,arr,n);
   if(j==1)
   {
       cout << "true";
       
   }
   else
   {
       cout << "false";
   }
    return 0;
}
