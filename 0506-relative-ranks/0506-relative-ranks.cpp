
class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int> arr = score;
        vector<string> ans(score.size());

        sort(arr.begin(), arr.end(), greater<int>());

        for(int i=0; i<score.size(); i++){
            for(int j=0; j<arr.size(); j++){
                if(score[i] == arr[j]){
                    if(j==0)
                        ans[i] = "Gold Medal";
                    else if(j==1)
                        ans[i] = "Silver Medal";
                    else if(j==2)
                        ans[i] = "Bronze Medal";
                    else
                        ans[i] = to_string(j+1);

                    break;
                }
            }
        }

        return ans;
    }
};
