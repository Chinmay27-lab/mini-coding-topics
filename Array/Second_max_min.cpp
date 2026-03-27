#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int max1 = INT_MIN ;
    int min1 = INT_MAX ;
    int max2 = max1 ;
    int min2 = min1 ;
    int n ; 
    cin >> n ;
    vector<int> ans(n);
    for(int i = 0 ; i < n ; i++)
    {
        cin >> ans[i] ;
    }
    for(int i = 0 ; i < n ; i++)
    {
        if(max1<ans[i])
        {
            max2 = max1 ;
            max1 = ans[i] ;
        }
        if(min1 > ans[i])
        {
            min2 = min1 ;
            min1 = ans[i] ;
        }
    }
    cout << "Second largest value : "<<max2 ;
    cout << endl;
    cout << "Second smallest value : "<<min2 ;
}