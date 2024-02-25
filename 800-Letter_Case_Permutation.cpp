// #include <vector>
// #include <string>
// #include <unordered_map>
// #include <cctype>

// using namespace std;

class Solution {
public:
    vector<string> letterCasePermutation(string s) {
        unordered_map<string, vector<string>> memo;
        return helper(s, 0, memo);
    }

    vector<string> helper(const string& s, int i, unordered_map<string, vector<string>>& memo) {
        if (i == s.size()) {
            return {""};
        }
        
        if (memo.find(s.substr(i)) != memo.end()) {
            return memo[s.substr(i)];
        }

        vector<string> result;
        vector<string> suffixes = helper(s, i + 1, memo);

        for (const string& suffix : suffixes) {
            if (isalpha(s[i])) {
                result.push_back((char)tolower(s[i]) + suffix);
                result.push_back((char)toupper(s[i]) + suffix);
            } else {
                result.push_back(s[i] + suffix);
            }
        }

        memo[s.substr(i)] = result;
        return result;
    }
};
