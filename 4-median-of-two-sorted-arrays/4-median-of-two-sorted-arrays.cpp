class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int total_length = nums1.size() + nums2.size();
        int i = 0;
        int j = 0;
        int last = 0;
        int curr = 0;
        
        while(i + j <= total_length / 2) {
            
            if(i >= nums1.size()) {
                
                last = curr;
                curr = nums2[j];
                j ++;
            }
            else if (j >= nums2.size()) {
                
                last = curr;
                curr = nums1[i];
                i ++;
            }
            
            else if (nums1[i] < nums2[j]) {
                
                last = curr;
                curr = nums1[i];
                i++;
            }
            else if (nums1[i] > nums2[j]) {
                
                last = curr;
                curr = nums2[j];
                j ++;
            }
            else {
                
                last = curr;
                curr = nums1[i];
                i ++;
            }
            
        }
        
        if (total_length % 2 == 0) {
            float avg_curr_last = ((float)curr + (float)last) / 2;
        
            return avg_curr_last;
        }
        else {
            return curr;
        }
    }
};