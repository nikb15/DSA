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
using namespace std;
int main(){
    int t ;
    std::cin >> t ;
    while(t--)
    {
        int n ,k,s=0;
        std::cin >>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){std::cin >>arr[i];}
        std::sort(arr,arr+n);
        while(arr[0]<k)
        {
            
            arr[0]++;
        s++;
        }
        std::cout<<s<<std::endl;
    }
    return 0;
}

