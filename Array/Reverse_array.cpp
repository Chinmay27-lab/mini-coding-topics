#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int n ; 
    cin >> n ;
    int arr[n] ;
    for(int i = 0 ; i < n ; i ++)
    {
        cin >> arr[i] ;
    }
    cout << "Reversed array : " ;
    for(int i = n-1 ; i>=0 ; i--)
    {
        cout << arr[i] << " ";
    }
}