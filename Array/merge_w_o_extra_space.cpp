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

//solution 1 
//GENERAL CONSIDERATION THAT n is bigger
void merge (int ar1[], int ar2[], int n, int m)
{
    int i =n-1;
    int j =0;
    while(i>=0 && j<m)
    {
        if(ar1[i]>=ar2[j])
        {
            swap(ar1[i],ar2[j]);
        }
        i--; 
        j++;
    }
    sort(ar1,ar1+n);
    sort(ar2,ar2+m);
}


//Solution 2
/*
for (int i=n-1; i>=0; i--) 
	{ 
		/* Find the smallest element greater than ar2[i]. Move all 
		elements one position ahead till the smallest greater 
		element is not found 
		int j, last = ar1[m-1]; 
		for (j=m-2; j >= 0 && ar1[j] > ar2[i]; j--) 
			ar1[j+1] = ar1[j]; 

		// If there was a greater element 
		if (j != m-2 || last > ar2[i]) 
		{ 
			ar1[j+1] = ar2[i]; 
			ar2[i] = last; 
		} 
	} 
*/
int main(void) 
{ 
	int ar1[] = {1, 5, 9, 10, 15, 20}; 
	int ar2[] = {2, 3, 8, 13}; 
	int m = sizeof(ar1)/sizeof(ar1[0]); 
	int n = sizeof(ar2)/sizeof(ar2[0]); 
	merge(ar1, ar2, m, n); 

	cout << "After Merging nFirst Array: "; 
	for (int i=0; i<m; i++) 
		cout << ar1[i] << " "; 
	cout << "nSecond Array: "; 
	for (int i=0; i<n; i++) 
		cout << ar2[i] << " "; 
return 0; 
} 