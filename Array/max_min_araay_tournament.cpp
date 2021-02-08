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
//This is the tournament mentod in which we will divide the array into 2 parats n then merge it 
struct Pair
{
    int min ;
    int max;
};

struct Pair getMinMax(int arr[], int low,int high)
{
    struct Pair minmax, mml,mmr; // last two terms are used for recursive purpose
    int mid;
    if(low==high)
    {
        minmax.min = arr[low];
        minmax.max= arr[low];
        return minmax;
    }

    if(high==low+1)
    {
        if(arr[low]>arr[high])
        {
            minmax.max = arr[low];
            minmax.min= arr[high];
        }
        else
        {
            minmax.max=arr[high];
            minmax.min=arr[low];
        }
        return minmax;
    }
    mid=(low+high)/2;
    mml= getMinMax(arr,low,mid);
    mmr= getMinMax(arr,mid+1,high);
    // Now we will compare the low  n high thn we will put int the main struct 

    if(mml.min<mmr.min)
    {
        minmax.min=mml.min;
    }
    else
    {
        minmax.min=mmr.min;
    }

        if (mml.max > mmr.max)
        minmax.max = mml.max;
    else
        minmax.max = mmr.max;  
    return minmax;
}

int main(){

        int arr[] = { 1000, 11, 445,
                  1, 330, 3000 };
    int arr_size = 6;
     
    struct Pair minmax = getMinMax(arr, 0, 
                             arr_size - 1);
                              
    cout << "Minimum element is "
         << minmax.min << endl;
    cout << "Maximum element is "
         << minmax.max;
          
    return 0;

}

