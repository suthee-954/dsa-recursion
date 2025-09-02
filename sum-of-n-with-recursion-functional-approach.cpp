

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// print from n to 1 with out decrementing.....!!
int f(int n)
{
  if(n==0)
  {
      return 0;
  }
  return n+f(n-1);
}

int main()
{

    int n;
    cin >> n;
   cout <<  f(n);
    return 0;
}
