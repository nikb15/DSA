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

bool isBalanced( string sq)
{
    int c=0,p=0; // c- close ) p - open (
    for(int i = 0; i < sq.length();i++)
    {
        if(sq[i] =='('){p++;}
        else{c++;}
    }
    return c==p;
}
int main(){
    string sq; 
    cin >>sq; // input string to    
    if(!isBalanced(sq)){cout<<"0";} // since gven string is not balanced 
    else 
    {
        //Since my brackets sequence is properly balance i need to perform shifting
        int c=0,d=0,shiftPos=0;
        // Evrytime my closed  brackets is more then open brackets i will simply increase my shift position station tht wht position should be changed 
        for(int i =0;i<sq.length();i++)
        {
            if(sq[i]=='('){c++;}
            else {c--;}
            if(c<d)
            {
                d=c;
                shiftPos=i+1;
            }

        }
        //Sorting on the basis of the shifit pstition 
       reverse(sq.begin(),sq.begin()+shiftPos);
        std::cout <<"First Reversal"<<std::endl;
        for(int i=0;i<sq.length();i++){std::cout<<sq[i];}
        std::cout<<"\n";
       reverse(sq.begin()+shiftPos,sq.end());
       std::cout <<"Secound Reversal"<<std::endl;
       for(int i=0;i<sq.length();i++){std::cout<<sq[i];}
       std::cout<<"\n";
       reverse(sq.begin(),sq.end());
        std::cout <<"Thiird Reversal"<<std::endl;
        for(int i=0;i<sq.length();i++){std::cout<<sq[i];}
        std::cout<<"\n";
    
        int ans=0;
        int x=0;
        for(int i =0;i<sq.length();i++)
        {
            if(sq[i]=='('){x++;}
            else{x--;}
            if(x==0)ans++;
        }
        std::cout <<ans;
    }


    return 0;

}

 /*

            consider an array = {1,2,3,4,5,6,7}

            to left shift it at pos=2

            1. reverse from index 0 to 1 {2,1,3,4,5,6,7}

            2. reverse from index 2 to end {2,1,7,6,5,4,3}

            3. reverse complete array {3,4,5,6,7,1,2}

            Hence, in three operations each of O(n), we got array of left shifted by 2 positions

        */