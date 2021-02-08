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



int main(){
    int array[] ={1,2,3,4,5,6,7,8};
    vector<int> v {1,2,3,4,5,6,7,8,9};
    int n = sizeof(array)/sizeof(array[0]);
    int start = 0;
    int end = n-1;
    while(start < end){
        int temp=array[start];
        array[start]=array[end];
        array[end]=temp;
        start++;
        end--;
    }
    for(int i =0;i<n;i++)
    {
        std::cout<<array[i]<<" ";
    }

    reverse(v.begin(),v.end());
    for(auto x:v)
    {
        std::cout<<x<<" ";
    }
    return 0;

}

