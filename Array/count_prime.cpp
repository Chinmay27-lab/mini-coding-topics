
#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int n ; 
    cin >> n ;
    int ct = 0 ;
    vector <bool> isprime(n , true);
    isprime[0] = isprime[1] = false ;
    for(int i = 2 ; i*i < n ; i++)
    {
        if(isprime[i])
        {
            for(int j = i*i ; j < n ; j+=i)
            {
                isprime[j] = false ;
            }
        }
    }
    for(int i = 2 ; i < n ; i ++)
    {
        if(isprime[i])ct++ ;
    }
    cout << ct ;
}