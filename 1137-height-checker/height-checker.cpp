class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> excepted = heights;
        sort(excepted.begin() , excepted.end());
        int count = 0;
        for(int i = 0 ; i < heights.size() ; i++){
            if(heights[i] != excepted[i]){
                count++;
            }
        }
        return count;
        
    }
};