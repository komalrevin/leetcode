class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int n = arr.size();
        int nodel = arr[0];
        int onedel = 0;
        int res = arr[0];
        for(int i=1; i<n; i++){
            onedel = max(nodel, onedel + arr[i]);
            nodel = max(nodel + arr[i], arr[i]);
            res = max(res, max(nodel, onedel));
        }
    return res;
    }
};