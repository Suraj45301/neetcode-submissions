class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        vector<int>final(m+n,0);
        int i=0,j=0,idx=0;
        while(i<m && j<n){
            if(nums1[i]<=nums2[j]){
                final[idx]=nums1[i];
                i++,idx++;
            }
            else{
                final[idx]=nums2[j];
                idx++,j++;
            }
        }
        while(i<m){
            final[idx]=nums1[i];
            idx++,i++;
        }
        while(j<n){
            final[idx]=nums2[j];
            j++,idx++;
        }

        double median;
        if((m+n) % 2){  //odd length
            median= final[(m+n)/2];
        }
        else{     //even length
            int index=(m+n)/2;
            median=(final[index]+final[index-1])/2.0;
        }
        return median;
    }
};
