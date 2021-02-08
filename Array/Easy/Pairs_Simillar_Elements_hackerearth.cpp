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

int no_occurence(int arr[],int x,int n)
{
    int s=0;
    for(int i =0;i<n;i++)
    {
        if(arr[i]-1==x){s++;}
    }
    return s;
}


int main(){
    int n ,p=0;
    std::cin >> n ;
    int arr[n] ;
    for(int i=0;i<n;i++)
    {std::cin >> arr[i] ;}
    std::sort(arr,arr+n);
    for(int i=0;i<n;i++)
    
    {    
        p+=no_occurence(arr,arr[i],n);
    }
    std::cout <<p<<std::endl;

    return 0;

}

