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


void nextPermutation(vector<int>& nums) {
     int idx=-1;
        int n = nums.size();
        for(int i =n-1;i>0;i--)
        {
            if(nums[i]>nums[i-1])
            {
                idx=i;
                break;
            }
        }
        if(idx==-1)
        {
            reverse(nums.begin(),nums.end());
        }
        else
        {
            int prv=idx;
            for(int i=idx+1;i<n;i++ )
            {
                if(nums[i]>nums[idx-1] and nums[i]<=nums[prv])
                {
                    prv=i;
                }
            }
            swap(nums[idx-1],nums[prv]);
            reverse(nums.begin()+idx,nums.end());
        }
        
    }

    
int main(){
    vector<int> v{1,2,3};
    nextPermutation(v);    
    return 0;

}
