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
    int arr[] ={1,9,3,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    std::cout<<arr[0]<<" "<<arr[n-1]<<" ";

    return 0;

}

