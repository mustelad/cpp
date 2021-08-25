class Solution {

public:

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        double med=0 ;

        vector<int> fin;

        for (auto  i : nums1)

            fin.push_back(i);

        for (auto  i : nums2)

            fin.push_back(i);

        sort(fin.begin(),fin.end());

        if (fin.size() == 1) return fin[0];

        if (fin.size() == 0) return 0;

        if (fin.size() % 2 == 1) return fin[fin.size() / 2];

        else {

            med = (double)(fin[fin.size() / 2 - 1] + fin[fin.size() / 2])/2;

            return med;}

    }

};
