class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int n = arr.size(); 
        if(n < 2) 
            return n; 
        int k = 1; 
         for(int i = 1; i < n; i++) 
        {
            if(arr[i] != arr[k - 1])
            {
                arr[k] = arr[i];
                k++; 
            }
        }
        
        return k; 
        
    }
};