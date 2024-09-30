#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n ;
    cin >> n;
    int arr[n] ;
    for(int i=0 ; i<n ;i++)
    {
        cin >> arr[i];  
    }
    for(int i=n-1 ; i>=0 ; i--) // for printing in descending order index n-1 to greater than equals 0
    {
        cout << arr[i] << " "; // for space separated output we are putting << " "
    }   
    return 0;
}
