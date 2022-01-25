class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        vector<int>increasingarray;
        vector<int>decreasingarray;
        if(arr.size()<3){
            return false;
        }
        int i,j;
        if(arr[1]<arr[0]){
            return false;
        }
        
        for( i=0;i<arr.size()-1;i++){
            
            cout<<arr[i]<<" ";
            increasingarray.push_back(arr[i]);
            if(arr[i+1]<=arr[i]){
                break;
            }
        }
        for( j=i;j<arr.size()-1;j++){
            if(arr[j+1]>=arr[j]){
                break;
            }
            decreasingarray.push_back(arr[j]);
        }
        if(increasingarray.size()+decreasingarray.size()==arr.size()){
            return true;
        }
        return false;
    }
};