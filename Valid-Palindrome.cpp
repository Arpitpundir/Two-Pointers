class Solution {
public:
    bool isPalindrome(string s) {
        int startPtr = 0, endPtr = s.size()-1;
        while(startPtr < endPtr){
            while(!iswalnum(s[startPtr]) && startPtr <= endPtr){
                startPtr++;
            }
            while(!iswalnum(s[endPtr]) && endPtr >= startPtr){
                endPtr--;
            }
            if(startPtr>=endPtr){
                return true;
            }
            if(tolower(s[startPtr]) != tolower(s[endPtr])){
                cout<<startPtr<<" "<<endPtr;
                return false;
            }
            startPtr++;
            endPtr--;
        }
        return true;
    }
};