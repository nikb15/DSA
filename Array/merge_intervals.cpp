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
struct Interval  
{  
    int s, e;  
};  

bool compare(Interval a, Interval b)
{
    return a.s<b.s;
    //returuing with he start element must be less 
}

void mergeIntervals(Interval arr[],int n )
{
        sort(arr,arr+n,compare);
        int index=0;
        for(int i =1;i<n;i++)
        {
            if(arr[index].e>arr[i].s)
            {
                arr[index].s=min(arr[index].s,arr[i].s);
                arr[index].e=max(arr[index].e,arr[i].e);

            }
            else
            {
                index++;
                //arr[index]=arr[i];
            }
        }
            cout << "\n The Merged Intervals are: ";  
    for (int i = 0; i <= index; i++)  
        cout << "[" << arr[i].s << ", " << arr[i].e << "] ";
}

int main(){
    Interval arr[] = { {6,8}, {1,9}, {2,4}, {4,7} };  
    int n = sizeof(arr)/sizeof(arr[0]);  
    mergeIntervals(arr, n);  
    return 0;

}

