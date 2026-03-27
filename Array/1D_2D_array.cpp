#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int n ; 
    cin >> n ; 
    int arr[n] ;
    for(int i = 0 ;  i< n ; i ++)
    {
        cin >> arr[i] ;
    }
    int a , b ; 
    cin >> a >> b ;
    int arr1[a][b] ;
    for(int i = 0 ;  i< a ; i ++)
    {
        for(int j = 0 ; j < b ; j++)
        {
            cin >> arr1[i][j] ;
        }
    }
    cout << "1D Array : ";
    for(int i = 0 ;  i< n ; i ++)
    {
        cout << arr[i] << " " ;
    }
    cout << endl ;
    cout << endl ;
    cout << "2D Array : ";
    for(int i = 0 ;  i< a ; i ++)
    {
        for(int j = 0 ; j < b ; j++)
        {
            cout << arr1[i][j] << " ";
        }
        cout << endl ;
    }
}