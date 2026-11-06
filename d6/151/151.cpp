class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());
        if(s.size() <= 1){
            return s;
        }
        int n = s.length();
        string ans = "";

        for(int i=0; i<n; i++){
            string currWord = "";
            while(i<n && s[i] != ' '){
                currWord += s[i];
                i++;
            }
            reverse(currWord.begin(), currWord.end());
            if(currWord.length() > 0 ){
                ans += " " + currWord; 
            }
        }
        
        return ans.substr(1);
    }
};