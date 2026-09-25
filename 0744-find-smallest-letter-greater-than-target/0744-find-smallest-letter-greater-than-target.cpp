class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) 
    {
        int l = 0;
        int r = letters.size() - 1;
        int mid;
        char result = letters[0];

        while(l <= r) {
            mid = (l + r) / 2;

            if(letters[mid] > target) {
                result = letters[mid];
                r = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }

        return result;
    }
};