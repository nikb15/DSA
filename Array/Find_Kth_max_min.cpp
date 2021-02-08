#include <iomanip> // for std::setprecision()
#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <sstream>
#include <vector>
#include<numeric>
#include<ctime>
#include<cmath>
#include<thread>
#include<deque>
#include<list>
#include<forward_list>
#include<queue>
#include<set>
#include<stack>
#include<map>
#include<regex>
#include<algorithm>
#include <bits/stdc++.h> 
using namespace std; 

int FindKth(int arr[], int n , int k)
{
    // We will be using sets rather the nsorting n send te number directly 
    set<int> s;
    for(int i = 0; i < n ; i++)
    {
        s.insert(arr[i]);
    }
    //assing the top of the set to the aut 
    auto x = s.begin();

    //for max ;
    for(int i =0;i <n-k-1;i++)
    {
        x++;
    }
    return *x;
}


int main(){
    int arr[] ={4,6,7,4,48,99,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    std::cout<<FindKth(arr,n,1);
    return 0;

}

