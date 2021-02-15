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
void rotate(int az[],int m)
{
    int temp =az[m-1];
    for(int i =m-1;i>=0;i--)
    {
        az[i]=az[i-1];
    }
    az[0]=temp;
    for(int i =0;i<m;i++)
    {
        std::cout<<az[i];
    }
}



int main(){
    int az[]={9, 8, 7, 6, 4, 2, 1, 3};
    //3 9 8 7 6 4 2 1
    int n =sizeof(az)/sizeof(az[0]);
    rotate(az,n);
    return 0;

}

