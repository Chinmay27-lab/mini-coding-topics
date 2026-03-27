
#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int n ; 
    cin >> n ; 
    int arr[n] ;
    cout << "Input array : ";
    for(int i = 0 ; i < n ; i ++)
    {
        cin >> arr[i] ;
    }
    for(int i = 0 ; i < n ; i++)
    {
        int min = i  ;
        for(int j = i+1 ; j<n ; j++)
        {
            if(arr[min]>arr[j]) min = j ;
        }
        int temp = arr[i] ;
        arr[i] = arr[min] ;
        arr[min] = temp ;
    }
    cout << endl ;
    cout << "Sorted array : " ;
    for(int i = 0 ; i < n ; i++)
    {
        cout << arr[i]<<" " ;
    }
}