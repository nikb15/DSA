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
    int n =5;
    int arr[n]={1,2,3,-2,5};
    int current_max= arr[0];
    int global_max=arr[0];
    for(int i=1;i<n;i++)
    {
        current_max=max(arr[i],current_max+arr[i]);// The most importatnt statet in my kadane algorithm i will se the max between the arr[i] & what will the value one i add to the curren sum
        if(current_max>=global_max)
        {
            global_max=current_max;
        }
    }
    std::cout<<global_max<<std::endl;
    return 0;

}

