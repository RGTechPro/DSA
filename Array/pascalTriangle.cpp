class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        ans.push_back({1});
        for(int i=1;i<numRows;i++){ 
            vector<int> inner; 
            inner.push_back(1);
            for(int j=1;j<i;j++){
               int temp= ans[i-1][j-1]+ans[i-1][j];
               inner.push_back(temp);
               
            }
            inner.push_back(1);
ans.push_back(inner);
        }
        return ans;
    }
};