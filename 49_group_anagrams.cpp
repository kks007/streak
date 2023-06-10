#include <bits/stdc++.h>

using namespace std;


//// without sorting  :

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        for (int i = 0; i < strs.size(); i++) {
            string key = getKey(strs[i]);
            m[key].push_back(strs[i]);
        }
        
        vector<vector<string>> result;
        for (auto it = m.begin(); it != m.end(); it++) {
            result.push_back(it->second);
        }
        return result;
    }
private:
    string getKey(string str) {
        vector<int> count(26);
        for (int j = 0; j < str.size(); j++) {
            count[str[j] - 'a']++;
        }
        
        string key = "";
        for (int i = 0; i < 26; i++) {
            key.append(to_string(count[i] + 'a'));
        }
        return key;
    }
};

/// with sorting ::


	
// class Solution {
// public:
//     vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
//        vector<vector<string>>ans;
        
//        unordered_map<string, vector<string>>mp;
//         for(int i = 0 ; i < strs.size() ; i++)
//         {
//             string s = strs[i];
//             sort(strs[i].begin(),strs[i].end());
//             mp[strs[i]].push_back(s);
//         }

        
//         for(auto i : mp)
//         {
//             ans.push_back(i.second);
//         }

//         return ans;
        
//     }
// };