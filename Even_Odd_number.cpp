#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int n ,ec = 0 , oc = 0 ;
    cin >> n ;
    int arr[n] , e[n] , o[n] ;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i] ;
        if(arr[i]%2 == 0) e[ec++] = arr[i] ;
        else o[oc++] = arr[i] ;
    }
    cout << "Even No. : " ;
    for(int i = 0 ; i < ec ; i++)
    {
        cout << e[i] <<" " ;
    }
    cout << endl ;
    cout << endl ;
    cout << "Odd no. : " ;
    for(int i = 0 ; i < oc ; i++)
    {
        cout << o[i] <<" " ;
    }
}