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
    vector<int> vect{ 3, 2, 1, 3, 3, 5, 3 };
    int res=0;
    for(auto x:vect)
    {
        int cnt= count(vect.begin(),vect.end(),x);
        if(cnt>1){res=x;}
    }
    std::cout<<res;
    return 0;

}

