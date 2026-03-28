#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n) {
        int flag = 0 ;
        if (n==1) cout<< false;
        else 
        {
        for(int i = 1 ; i<= n/2 ; i++)
        {
            if(n%i==0) flag ++;
        }
        
        if(flag == 1) cout<< true ;
        else cout<<false ;;
    }
    }

int main ()
{
    int n ;
    cin >> n ;
    isPrime(n);
}
