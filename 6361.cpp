#include<bits/stdc++.h>
using namespace std;


int smallest_pair(vector<int>&a, int n)
{
    int min = INT_MAX, secondMin = INT_MAX;
    for (int j = 0; j < n; j++) {
 
        // If found new minimum
        if (a[j] < min) {
 
            // Minimum now becomes second minimum
            secondMin = min;
 
            // Update minimum
            min = a[j];
        }
 
        // If current element is > min and < secondMin
        else if ((a[j] < secondMin) && a[j] != min)
 
            // Update secondMin
            secondMin = a[j];
    }
 
    // Return the sum of the minimum pair
    return (secondMin - min);
}

int main()
{
    vector<int> v{1,4,3};
    int n=v.size();
    cout<<smallest_pair(v, n);
    return 0;
}