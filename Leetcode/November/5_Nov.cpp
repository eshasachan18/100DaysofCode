Problem=https://leetcode.com/problems/minimum-cost-to-move-chips-to-the-same-position/solution/
class Solution {
public:
    int minCostToMoveChips(vector<int>& pos) 
    {
     int e=0,o=0;
        for(int i=0;i<pos.size();i++)
        {
            if(pos[i]%2==0){e++;}
            else{o++;}
        }
        return min(o,e);
    }
};
