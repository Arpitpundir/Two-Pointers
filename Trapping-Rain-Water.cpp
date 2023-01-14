class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>left;
        vector<int>right;
        int temp=INT_MIN;

        // left[i] stores the maximum height of the bar to the left of the ith bar
        for(int i=0;i<n;i++){
            temp=max(height[i],temp);
            left.push_back(temp);
        }
        right.resize(n,0);
        temp=INT_MIN;

        // right[i] stores the maximum height of the bar to the right of the ith bar
        for(int i=n-1;i>=0;i--){
            temp=max(height[i],temp);
            right[i]=temp;
        }

        // 
        int ans=0;
        for(int i=0;i<n;i++){
          // the water trapped at the ith bar is the minimum of the maximum height of the bar to the left and right of the ith bar minus the height of the ith bar
            ans+=(min(left[i],right[i])-height[i]);
        }
        return ans;
    }
};