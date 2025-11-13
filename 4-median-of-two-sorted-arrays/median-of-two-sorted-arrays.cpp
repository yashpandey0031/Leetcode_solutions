class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) { //here it is doubel so the question is expecting a floating value 
        vector<int> nums3;
        nums3.reserve(nums1.size() + nums2.size());    //reserve tells the vecto to allocate memory for atleast n elements in advance 
        nums3.insert(nums3.end(),nums1.begin(),nums1.end());  
        nums3.insert(nums3.end(),nums2.begin(),nums2.end()); //ctrl+shift+d = duplicate a line  
        
        sort(nums3.begin(),nums3.end()); //sorting the array and printing it out 
        int n = nums3.size();
        



        if(n%2 == 1){
            return nums3[n/2]; //odd length-> middle element
        } else{
            return (nums3[n/2]+nums3[n/2-1]) / 2.0; //even -> average 
        }
    }
};