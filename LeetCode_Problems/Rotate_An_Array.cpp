// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
        
//         vector<int> temp(k);
//         k=k%nums.size();
//         for(int i=0;i<k;i++){
//             temp[i]=nums[(nums.size())-k+i];
//         }

//         for(int i=nums.size()-k-1;i>=0;i--){
//             nums[i+k]=nums[i];
//         }

//         for(int i=0;i<k;i++){
//             nums[i]=temp[i];
//         }

//         for(int i=0;i<nums.size();i++){
//             cout<<nums[i]<<" ";
//         }

//     }
// };