class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
       // vector<int>increasingarray;
       // vector<int>decreasingarray;
        if(arr.size()<3){
            return false;
        }
        int i,j;
        if(arr[1]<arr[0]){
            return false;
        }
        int count =0;
        for( i=0;i<arr.size()-1;i++){
            
           // cout<<arr[i]<<" ";
            //increasingarray.push_back(arr[i]);
            if(arr[i+1]<=arr[i]){
                count++;
                break;
            }
        }
        for( j=i;j<arr.size()-1;j++){
            if(arr[j+1]>=arr[j]){
                count++;
                break;
            }
            //decreasingarray.push_back(arr[j]);
        }
        // if(increasingarray.size()+decreasingarray.size()==arr.size()){
        //     return true;
        // }
        if(count==1){
            return true;
        }
        return false;
    }
};