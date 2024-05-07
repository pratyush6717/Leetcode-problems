class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_area=INT_MIN;
        int left=0;
        int right=height.size()-1;
        while(left<right){
            int min_height=min(height[left],height[right]);
            int index_diff=right-left;
            max_area=max(max_area,(min_height*index_diff));
            if(height[left]<height[right]){
                left +=1;
            }
            else{
                right -=1;
            }
        }
        return max_area;
    }
};