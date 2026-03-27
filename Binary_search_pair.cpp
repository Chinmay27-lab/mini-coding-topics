#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n ; 
    cout << "Enter the no. of element : ";
    cin >> n ;
    vector<pair<int,int>>arr(n);

    for(int i = 0 ; i<n ; i++)
    {
        cin >> arr[i].first ;
        arr[i].second = i ;
    }

    sort(arr.begin(), arr.end());

    int target ;
    cin >> target ;

    int l = 0 , r = n - 1 ;

    while(l <= r)
    {
        int mid = l + (r - l) / 2;

        if(arr[mid].first == target)
        {
            cout << "Found at original index: " << arr[mid].second + 1;
            return 0;
        }
        else if(arr[mid].first > target)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << "Not Found.";
}
