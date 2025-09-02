/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
void f(int i,int arr[],int n)
{
    if(i>=(n/2))
    {
        return;
    }
    int temp = arr[i];
    arr[i]=arr[n-i-1];
    arr[n-i-1]=temp;
    f(i+1,arr,n);
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    f(0,arr,n);
   for(int i=0;i<n;i++)
    {
        cout << arr[i] << "\t";
    }
    return 0;
}
