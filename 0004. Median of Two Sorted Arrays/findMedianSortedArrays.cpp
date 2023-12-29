class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
int n1 = nums1.size(),n2 = nums2.size();
    //确保nums1为长度较小的vector
    if(n1 > n2) return findMedianSortedArrays(nums2,nums1);

    int low = 0;
    int high = n1;
    while(low <= high) {
        int part1 =(low+high)/2;
        int part2 = (n1+n2+1)/2 - part1;

        int maxleft1 = (part1 == 0) ? INT_MIN:nums1[part1 - 1];
        int minright1 = (part1 == n1) ? INT_MAX:nums1[part1];

        int maxleft2 = (part2 == 0) ? INT_MIN:nums2[part2 - 1];
        int minright2 = (part2 == n2)? INT_MAX:nums2[part2];

        if(maxleft1 <= minright2 && maxleft2 <= minright1){
            if((n1 + n2) % 2 == 0)
                return (max(maxleft1,maxleft2) + min(minright1,minright2))/2.0;
            else
                return (double)max(maxleft1,maxleft2);
        }else if(maxleft1 > minright2) {
            high = part1 - 1;
        }else{
            low = part1 + 1;
        }
    }
    return -1;
}
};