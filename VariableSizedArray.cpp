#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int size_of_array, no_of_queries;
    cin>> size_of_array >> no_of_queries;
    vector<vector<int>> vec_out;  // vector k andar vector baahar wala vec_out andar wala vec_in
    for (int i=0; i<size_of_array; i++) {  // inner vector k liye loop bnaya data daalne k liye
      vector<int> vec_in;
      int size_of_inner_vector;
      cin>>size_of_inner_vector;
      for (int j=0; j<size_of_inner_vector; j++) {
         int temp;
         cin>>temp;vec_in.push_back(temp);
      }
      vec_out.push_back(vec_in); // inner wala ko outer wala me daalna hi
    }
    for (int i=0; i<no_of_queries; i++) { // ab print krwa dena hi   aise store hoga {{1,2},{3,4},{5,6}} a aur b jb point krega tb a=0 aur b =1 hai toh 2 print hoga and so on
     int a,b;
     cin>>a>>b;
     cout<<vec_out[a][b]<<endl;
    }
    return 0;
}
