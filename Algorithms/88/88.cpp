class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> tmp(m);
        for(int i=0;i<m;i++){
            tmp[i] = nums1[i];
        }
        int i =0,j = 0;
        for(;i+j < n+m;){
            if(j >= n){
                nums1[i+j] = tmp[i];
                i++;
            }else if(i >= m){
                nums1[i+j] = nums2[j];
                j++;
            }else if(tmp[i] < nums2[j]){
                nums1[i+j] = tmp[i];
                i++;
            }else{
                nums1[i+j] = nums2[j];
                j++;
            }
        }
    }
};