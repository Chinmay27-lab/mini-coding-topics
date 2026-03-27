#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    vector<int>v1 ;
    vector<int>v2 ;
    int n , m  ;
    cin >> n >> m ;
    for(int x = 0 ; x < n ; x++) 
    {
        int a ;
        cin >> a ;
        v1.push_back(a) ;
    }
    for(int y = 0 ; y < m ; y++)
    {
        int b ; 
        cin >> b ;
        v2.push_back(b) ;
    }
    sort(v1.begin() , v1.end());
    sort(v2.begin() , v2.end()) ;
    v1.insert(v1.end() , v2.begin() , v2.end()) ;
    sort(v1.begin() , v1.end()) ;
    for(int z : v1)
    {
        cout << z << " " ;
    }
}