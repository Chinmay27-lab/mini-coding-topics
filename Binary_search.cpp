#include<bits/stdc++.h>
using namespace std ;

int main ()
{
    int n ;
    cin >> n; 

    vector<int> arr(n);   

    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin() , arr.end()) ;

    int target ;
    cin >> target ;

    int l = 0 , r = n - 1 ;
    bool found = false ;

    while(l <= r)
    {
        int mid = l + (r - l) / 2;

        if(arr[mid] == target)
        {
            cout << "Found at index no. : " << mid + 1;
            found = true;
            break;
        }
        else if(arr[mid] > target)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    if(!found)
    {
        cout << "Not Found.";
    }

    return 0;
}