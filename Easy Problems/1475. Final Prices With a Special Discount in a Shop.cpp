#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution {
public:
    vector<int> finalPrices(vector<int>& arr) {
        int n=arr.size();
        stack<int> st;
        vector<int> ans(n);
        st.push(arr[n-1]);
        ans[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--){

            while(!st.empty() && st.top()>arr[i]){
                st.pop();
            }
            if(st.empty()) ans[i]=arr[i];
            else ans[i]=arr[i] - st.top();
            st.push(arr[i]);
        }
        return ans;
    }
};