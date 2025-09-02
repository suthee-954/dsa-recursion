/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void f(int n,string name,int count)
{
  if(n==count)
  {
      return;
  }
  cout << name << endl;

  n++;
  f(n,name,count);
}

int main()
{
    string name;
    cin >> name ;
    
    int count;
    cin >> count;
    
    f(0,name,count);

    return 0;
}
