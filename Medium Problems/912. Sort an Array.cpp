#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>&arr,int l,int m,int r){
        int i,j,k;
        int n1=m-l+1;
        int n2=r-m;
        int L[n1],R[n2];
        for(i=0;i<n1;i++)
            L[i]=arr[l+i];
        for(j=0;j<n2;j++)
            R[j]=arr[m+1+j];
        i=0,j=0,k=l;
        while(i<n1 && j<n2){
            if(L[i]<=R[j]){
                arr[k]=L[i];
                i++;
            }
            else{
                arr[k]=R[j];
                j++;
            }
            k++;
        }
        while(i<n1){
            arr[k]=L[i];
            i++;
            k++;
        }
        while(j<n2){
            arr[k]=R[j];
            j++;
            k++;
        }
    }
    void mergesort(vector<int>&nums,int l,int r){
        if(l<r){
            int m=l+(r-l)/2;
            mergesort(nums,l,m);
            mergesort(nums,m+1,r);
            merge(nums,l,m,r);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        int n=nums.size();
        mergesort(nums,0,n-1);
        return nums;
    }
};