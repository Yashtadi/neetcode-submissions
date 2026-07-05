class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<char> l1;
        vector<char> l2;

        for(int i=0; i <= s.size(); i++){
            l1.push_back(s[i]);
            l2.push_back(t[i]);
        }
        sort(s.begin() , s.end());
        sort(t.begin() , t.end());
        for(int i=0; i <= s.size(); i++){
            if(s[i] != t[i]){
                return false;
            }
        }
        return true;
    }
};
