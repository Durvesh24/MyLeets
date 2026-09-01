class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int cnt=0;
        for(int i=0; i<position.size(); i++){
            if(position[i]%2==0) cnt++;
        }
        if(position.size()-cnt < cnt) return position.size()-cnt;
        else return cnt;
    }
};