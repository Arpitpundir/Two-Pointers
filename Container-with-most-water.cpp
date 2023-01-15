public class Solution {
    public int maxArea(int[] height) {
        int maxarea = 0;
        int left = 0; 
        int right = height.length - 1;
        // first we will take widest container possible
        // then we will move the pointer which is pointing to the shorter bar
        // because if we move the pointer which is pointing to the taller bar
        // then the width will decrease and the area will decrease
        // so we will move the pointer which is pointing to the shorter bar
        // in hope that the next bar will be taller than the previous one
        // and if it is taller then we will calculate the area and compare it with the maxarea
        // if it is not taller then we will move the pointer again
        while (left < right) {
            int width = right - left;
            maxarea = Math.max(maxarea, Math.min(height[left], height[right]) * width);
            if (height[left] <= height[right]) {
                left++;
            } else {
                right--;
            }
        }
        return maxarea;
    }
}