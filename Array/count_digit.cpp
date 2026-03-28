#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int x , ct = 0;
    cin>>x;
    while (x != 0) 
    {
        ct++;
        x /= 10;
   }
   return ct;
}
