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

 static bool compare(vector<int>&a, vector<int>&b)
    {
        return a[0]<b[0];
    }
    
    
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        if(intervals.size() == 1)
            return intervals;
        
        vector<vector<int>> res;
        
     sort(intervals.begin(),intervals.end(),compare);
         int s= intervals[0][0];
        int e = intervals[0][1];
        for(int i =1;i<intervals.size();i++)
        {
            if(e>=intervals[i][0])
            {
                e=max(e,intervals[i][1]);
            }
            else
            {
                vector<int>Od;
                Od.push_back(s);
                Od.push_back(e);
                res.push_back(Od);
                s = intervals[i][0];
                e = intervals[i][1];
            }
        }
        vector<int> push;
        push.push_back(s);
        push.push_back(e);
        res.push_back(push);
        return res;
    }


int main(){
        //Privide vector and then continue
    return 0;

}

