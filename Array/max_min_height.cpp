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
    int arr[]={1, 5, 15, 10};
    
    int k =3;
    
    int n = 4;
    sort(arr,arr+n);
    //TAsk is to find the max and min
    for(int i =0;i<n;i++)
    {
        if(arr[i]-k >0)
        {
            arr[i]-=k;
        }
        else
        {
            arr[i]+=k;
        }
    }
    for(int i =0;i<n;i++)
    {
        std::cout<<arr[i];
    }
    std::cout<<arr[n-1]-arr[0];
    return 0;

}

