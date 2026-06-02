class NumArray {
public:
vector<int> prefixarray; //empty array start

//if you do vector<int> prefixarray(); -> it fils the vector with all the zeroes

    NumArray(vector<int>& nums) {
        
         //an array for storing the prefixes of all the values  
        int cur = 0;
        for (int num:nums){
            cur += num;
            prefixarray.push_back(cur);
        }
    }
    
    int sumRange(int left, int right) {
        int rightsum =  prefixarray[right];
        int leftsum = 0;       // declare outside
        if(left > 0){ //left is the index
            leftsum = prefixarray[left - 1];  // assign inside
        }

        return rightsum-leftsum;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */