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
    int arr[] = {1 ,3 ,5 ,8 ,9 ,2 ,6 ,7 ,6 ,8, 9};
    int size = sizeof(arr) / sizeof(int);
    int jump[size];
    int jump_from[size];
    fill_n(jump,size,INT_MAX);
    jump[0]=0;
    jump_from[0]=0;
    for(int i =1;i<size;i++)
    {
        for(int j =0;j<i;j++)
        {
            if(i<=j+arr[j])
            {
                jump[i]=min(jump[i],jump[j]+1);
            }
        }
    }
    std::cout<<jump[size-1];
    return 0;

}

