class Solution {
public:
    void moveZeroes(vector<int>& nums) {
      int n=nums.size();
      int j=0,i=0;
      for(i=0;i<n;i++)
      {
        if(nums[i]!=0)
        {
            nums[j]=nums[i];
            j++;
        }
      }  
      for(i=j;i<n;i++)
      {
        nums[i]=0;
      }
    }
};
