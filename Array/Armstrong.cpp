#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
        int temp = n , rv = 0 , lt = 0 ;
        while(n>0)
        {
            lt = n%10;
            rv += lt * lt*lt;
            n /= 10;
        }
        if(rv == temp) cout<< true ;
        else cout<<false ;
    }