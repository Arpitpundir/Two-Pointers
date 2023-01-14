class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int stPtr = 0, endPtr = numbers.size()-1;
        vector<int>ans;

        while(stPtr< endPtr){
            int sum = numbers[stPtr]+numbers[endPtr];
            if(sum == target){
                ans.push_back(stPtr+1);
                ans.push_back(endPtr+1);
                break;
            }else if(sum < target){
                stPtr++;
            }else{
                endPtr--;
            }
        }
        return ans;
    }
};