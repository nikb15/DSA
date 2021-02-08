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
    int arr[] ={1,2,3,-4,-2,6,-9,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int start=0, end=n-1, curr=0;
    while(curr<end)
    {
        if(arr[curr]<0 &&arr[end]<0) //posibilit 1
        {
            curr+=1;
        }
        else if (arr[curr]>0 && arr[end]<0)
        {
            swap(arr[curr], arr[end]);
            curr++;
            end--;
        }   
        else if(arr[curr]>=0 && arr[end]>=0) //poosibility 2
        {
            end-=1;
        }
        else
        {
            curr++;
            end--;
        }

    }
    for(int i =0;i < n ;i++)
    {
        std::cout<<arr[i]<<" ";
    }
    return 0;

}

