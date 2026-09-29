class Solution {
public:
    bool is_valid(int mid , vector<int>& weights, int days){
        int day = 1 , curr = weights[0];
        for(int i = 1; i < weights.size(); i++){
            if(curr + weights[i] > mid){
                day++;
                curr = weights[i];
            }
            else{
                curr += weights[i];
            }
            
        }
        return day <= days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = weights[0];
        int ans;


        for(int i = 0; i < weights.size(); i++){
            if(weights[i] > low){
                low = weights[i];
            }
        }

        int high = 0;
        for(int i = 0; i < weights.size(); i++)
            high += weights[i];

        while(low <= high){
            int mid = (low + high)/2;
            if(is_valid(mid , weights , days)){
                ans = mid;
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return ans;
        
    }
};