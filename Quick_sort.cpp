#include<bits/stdc++.h>
using namespace std ;

int partition(vector<int> &arr , int st , int end)
{
    int idx = st-1 , pivot = arr[end] ;

    for(int j = st ; j < end ; j ++)
    {
        if(arr[j]<=pivot)
        {
            idx++ ;
            int temp = arr[j] ;
            arr[j] = arr[idx] ;
            arr[idx] = temp ;
        }
    }
    idx++ ;
    int temp = arr[idx] ;
    arr[idx] = arr[end] ;
    arr[end] = temp ;

    return idx ;
}

void quicksort(vector<int> &arr , int st , int end)
{
    if(st<end)
    {
        int piidx = partition(arr , st , end);

        quicksort(arr , st , piidx-1) ;
        quicksort(arr , piidx+1 , end);
    }
}

int main ()
{
    vector<int> arr = {5 , 6 , 3 , 4 , 2, 1};

    quicksort(arr , 0 , arr.size()-1) ;

    for(int x : arr)
    {
        cout << x << " ";
    }
}