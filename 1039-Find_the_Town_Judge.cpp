class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        // if(trust.size() == 0 && n==1) return 1;
        // vector<int> id0;
        // for(int i=0;i<trust.size();i++){
        //     id0.push_back(trust[i][0]);
        // }
        // int ans=-1;
        // for(int i=1;i<=n;i++){
        //     if(find(id0.begin(),id0.end(),i)==id0.end()){
        //         int j=1;
        //         while(j<=n){
        //             if(j!=i){
        //                 vector<int> t;
        //                 t={j,i};
        //                 if(find(trust.begin(),trust.end(),t)==trust.end())
        //                 {
        //                     break;
        //                 }
        //             }
        //             j++;
        //         }
        //         if(j==n+1) return i;
        //     }
        // }


        vector<int> a(n,0);
        vector<int> b(n,0);
        for(auto& t: trust){
            a[t[0]-1]++;
            b[t[1]-1]++;
        }
        for(int i=0;i<n;i++){
            if(a[i]==0 && b[i]==n-1) return i+1;
        }
        return -1;
    }
};