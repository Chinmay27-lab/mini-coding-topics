#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int max = INT_MIN ;
    int min = INT_MAX ;
    int n ; 
    cin >> n ;
    int arr[n] ;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i] ;
    }
    for(int i = 0 ; i < n ; i ++)
    {
        if(arr[i]<min)min = arr[i] ;
        if(arr[i]>max)max = arr[i] ;
    }
    cout << "Min element : " << min <<endl ;
    cout << "Max element : " << max ;
}