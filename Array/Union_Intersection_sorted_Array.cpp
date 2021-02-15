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
int showUnion(int arr1[],int arr2[], int m , int n )
{
    int i =0,j=0,f=0;
    int ans =max(m,n);
    int temp[m+n];
    while(i<m && j < n)
    {
        if(arr1[i]<arr2[j])
        {
            temp[f++]=arr1[i];
            i++;
        }
        else if(arr1[i]>arr2[j])
        {
            temp[f++]=arr2[i];
            j++;
        }
        else if(arr1[i]==arr2[j])
        {
            temp[f++]=arr1[i];
            i++;
            j++;
        }
    }
    while(i<m)
    {
        temp[f++]=arr1[i];
        i++;
    }
    while(j<n)
    {
        temp[f++]=arr2[j];
        j++;
    }
    for(int i =0;i<f;i++)
    {
        std::cout<<temp[i]<<" ";
    }
}
int getintersection(int arr1[], int arr2[],int m, int n)
{
    int i=0,j=0;
    while(i<m && j<n){
            if(arr1[i]<arr2[j]){i++;}
            else if(arr1[i]>arr2[j]){j++;}
            else if(arr1[i]==arr2[j])
            {
                std::cout<<arr1[i]<<" ";
                i++;
                j++;
            }
    }
}

int main()
{
    int arr1[]={1,2,3,4};
    int arr2[]={3,6,7};
    int m = sizeof(arr1)/sizeof(arr1[0]);
    int n = sizeof(arr2)/sizeof(arr2[0]); 
    showUnion(arr1,arr2,m,n);
    std::cout<<"\n";
    getintersection(arr1,arr2,m,n);

}