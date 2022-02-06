class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
         int n = arr.size(); 
        if(n < 3) 
            return n; 
        int k = 2; 
         for(int i = 2; i < n; i++) 
        {
            if(arr[i] != arr[k - 2])
            {
                arr[k] = arr[i];
                k++; 
            }
        }
        
        return k; 
        
    }
};