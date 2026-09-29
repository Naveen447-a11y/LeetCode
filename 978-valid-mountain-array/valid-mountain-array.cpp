class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        
        if (arr.size() < 3) {
            return false;
        }

        int i = 1;

        // Check increasing part
        while (i < arr.size() && arr[i] > arr[i - 1]) {
            i++;
        }

        // Peak cannot be first or last
        if (i == 1 || i == arr.size()) {
            return false;
        }

        // Check decreasing part
        while (i < arr.size() && arr[i] < arr[i - 1]) {
            i++;
        }

        return i == arr.size();
    }
};