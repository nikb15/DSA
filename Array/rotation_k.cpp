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
void reverseArr(int arr[],int start,int end)
{
    while(start<end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}


void rotate_k(int arr[],int n , int k)
{
   reverseArr(arr,0,k-1);
   reverseArr(arr,k,n-1);
   reverseArr(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        std::cout<<arr[i];
    }
}


int main(){
    int arr[]={1,2,4,5,6,7,8};
    int k = 3;
    int n = sizeof(arr)/sizeof(arr[0]);
    rotate_k(arr,n,k);
    return 0;

}

