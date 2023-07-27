class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> solution;
        vector<int> sol;
        sol.push_back(1);
        solution.push_back(sol);
        for(int i=1;i<numRows;i++){
            vector<int> solu;
            solu.push_back(1);
            for(int j=1;j<i;j++){
                solu.push_back(solution[i-1][j]+solution[i-1][j-1]);
            }
            solu.push_back(1);
            solution.push_back(solu);
        }
        return solution;  
    }
};