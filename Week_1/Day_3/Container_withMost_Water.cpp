class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int h=0;
        int right=height.size()-1;
       int maxArea=0;
        int area=0;
        while(left<right)
        {
            h=min(height[left],height[right]);
            area=(h*(right-left));
            maxArea=max(area,maxArea);
            if(height[left]<height[right])
            {
                left++;
            }
            else
            right--;
        }
        return maxArea;
    }
};
