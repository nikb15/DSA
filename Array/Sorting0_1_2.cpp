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
//This program is used to sort 0 , 1 , 2 in the array without sorting technique


int main(){
    int arr[] ={0,0,1,1,1,2,2,2,0,1,0,2,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int low=0,mid=0,high=n-1;
    while(mid<=high)
    {
        switch(arr[mid])
        {
            case 0: 
            swap(arr[low],arr[mid]);
            low++;
            mid++;
            break;

            case 1:
            mid++;
            break;

            case 2:
            swap(arr[mid],arr[high]);
            high--;
            break;
        }
    }
    for(int i =0;i<n;i++)
    {
        std::cout<<arr[i] <<" ";
    }
    return 0;

}

