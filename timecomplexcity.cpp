/*
Time Complexity: The time complexity of an algorithm quantifies 
the amount of time taken by an algorithm to run as a function of 
the length of the input. 
Note: that the time to run is a function of the length of 
the input and not the actual execution time of the machine on which 
the algorithm is running on.

In order to calculate time complexity on an algorithm, 
it is assumed that a constant time c is taken to execute one operation,
 and then the total operations for an input length on N are calculated.
  Consider an example to understand the process of calculation: 
  Suppose a problem is to find whether a pair (X, Y) exists in an array, 
  A of N elements whose sum is Z. The simplest idea is to consider every pair
   and check if it satisfies the given condition or not.
   */
//c++ program for the time complexcity approach

#include<iostream>
//The <bits/stdc++. h> is a header file. This file includes all standard library.
//#include<bits/stdc++.h>
using namespace std;

//Function to find a pair in the given
// array whose sum is equal to z
bool findPair(int a[], int n, int z){
    //iterate through all the pairs
    for(int i = 0; i<n ; i++){
        for(int j=0; j < n ; j++){
            if ( i != j && a[i] + a [j] == z);
            return true;
        }
        
    }
    return false;    
}

int main(){
    //given input
    int a[] = (1,-2,1,0,5);
    int z = 0;
    int n = sizeof(a) / sizeof(a[0]);

    //function call
    if(findPair(a, n, z)){
        cout<<"True";
    }else{
        cout<<"False";
    }
    return 0;
}
