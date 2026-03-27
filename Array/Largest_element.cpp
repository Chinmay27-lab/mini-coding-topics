#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int n ; 
    cin >> n ;
    vector<int> arr ;
    for(int i = 0 ; i <  n ; i++)
    {
        int ele ;
        cin >> ele ;
        arr.push_back(ele);
    }
    sort(arr.begin() , arr.end()) ;
    cout << "The largest element in the array : "<<arr[n-1];
    
}