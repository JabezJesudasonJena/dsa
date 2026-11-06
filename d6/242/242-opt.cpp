class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.length(), m=t.length();
        if(n!=m){
            return false;
        }

        unordered_map<char, int> m1;
        unordered_map<char, int> m2;

        for(auto ch: s){
            m1[ch - 'a']++;
        }

        for(auto ch: t){
            m2[ch-'a']++;
        }

        return m1==m2;
        
    }
};