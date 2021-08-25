class Solution {

public:

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        auto sum = nums1.size() + nums2.size();

        while ((nums1.size()!=0) && (nums2.size() !=0) && (nums1.size()+nums2.size()) > 2) {

            if (nums1[0] < nums2[0]) nums1.erase(nums1.begin());

            else nums2.erase(nums2.begin());

            if (nums1.size()!=0 && nums2.size()!=0) {

                if(nums1[nums1.size() - 1] > nums2[nums2.size() - 1]) nums1.erase(nums1.begin()+nums1.size()-1);

                else nums2.erase(nums2.begin()+nums2.size()-1);

            }

            else if (nums1.size()==0) nums2.erase(nums2.begin()+nums2.size()-1);

            else nums1.erase(nums1.begin()+nums1.size()-1);

        }

        if (sum % 2 == 1) {

            if (nums1.size()>0) return nums1[nums1.size()/2];

            else return nums2[nums2.size()/2];

        }

        else {

            if (nums1.size()!=0 && nums2.size()!=0) return (double)(nums1[0]+nums2[0])/2;

            else if (nums1.size()>0) return (double)(nums1[nums1.size()/2-1]+nums1[nums1.size()/2])/2;

            else return (double)(nums2[nums2.size()/2-1]+nums2[nums2.size()/2])/2;

        }

     }

};
