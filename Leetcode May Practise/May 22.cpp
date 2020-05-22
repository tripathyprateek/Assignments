bool compare(pair<char, int> i, pair<char, int> j)
{
        if(i.second == j.second)
            return i.first<j.first;
        return i.second>j.second;
    }


class Solution {
public:
    
    string frequencySort(string s) {
        unordered_map<char, int> map;
        vector<pair<char, int>> v;
        
        for(char c : s)
            map[c]++;
        
        for(auto i : map){
            v.push_back({i.first, i.second});
        }
        
        sort(v.begin(), v.end(), compare);
        
        string count = "";
        for(auto x : v)
            for(int i=0;i<x.second;i++)
                count += x.first;
        
        return count;    
        
    }
};
