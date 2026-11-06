class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        string a = "";

        for(auto str: s){
            if(isalnum(str)){
                a += tolower(str);
            }
        }

        string str2 = a;

        reverse(str2.begin(), str2.end());

        if(a ==str2){
            return true;
        }

        return false;
    }
};