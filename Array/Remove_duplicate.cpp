#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int n ; 
    cin >> n ;
    int arr[n] ;
    for(int i = 0 ; i < n  ; i ++)
    {
        cin >> arr[i] ;
    }
    cout << "Original array : ";
    for(int i = 0 ; i < n  ; i ++)
    {
        cout << arr[i] << " ";
    }
    cout << endl << endl ;
    
    int freq[1001] = {0} ;
    
    cout<<"After duplicate : ";
    for(int i = 0 ; i < n ; i ++)
    {
        if(freq[arr[i]] == 0)
        {
            cout << arr[i] << " ";
            freq[arr[i]] = 1 ;
        }
    }
}