class Solution {
public:
    static bool compareThirdElement(const vector<int> &a, const vector<int> &b) {
    return a[2] < b[2]; // Sort in descending order
}

    vector<int> findAllPeople(int n, vector<vector<int>>& meetings, int firstPerson) {
        vector<vector<pair<int,int>>> adj(n);
        for(int i=0;i<meetings.size();i++){
            int a = meetings[i][0],b = meetings[i][1],t = meetings[i][2];
            adj[a].push_back({b,t});
            adj[b].push_back({a,t});
        }
        // sort(meetings.begin(), meetings.end(), compareThirdElement);
        
        vector<int> timetaken(n,INT_MAX);
        timetaken[0] = 0;
        timetaken[firstPerson] = 0;
        queue<pair<int,int>> q;
        q.push({0,0});
        q.push({firstPerson,0});
        while(!q.empty()){
            auto [person,time] = q.front();
            q.pop();
            for(auto [nextperson,t] : adj[person]){
                if(t >= time && timetaken[nextperson] > t){
                    timetaken[nextperson] = t;
                    q.push({nextperson,t});
                }
            }
        }
        vector<int> ans;
        for(int i=0;i<timetaken.size();i++){
            if(timetaken[i] != INT_MAX) ans.push_back(i);
        }
        return ans;
    }
};