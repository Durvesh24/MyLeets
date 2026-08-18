class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int min=INT_MAX;
        for(int i=0; i<n-1; i++){
            if(arr[i+1]-arr[i] < min){
                min = arr[i+1]-arr[i];
            }
        }
        vector<vector<int>> ans;
        for(int j=0; j<n-1; j++){
            if(arr[j+1]-arr[j]==min){
                ans.push_back({arr[j], arr[j + 1]});
            }
        }
        return ans;
    }
};