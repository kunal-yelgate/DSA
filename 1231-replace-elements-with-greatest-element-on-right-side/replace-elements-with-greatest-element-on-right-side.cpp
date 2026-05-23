class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
         int temp,maxRig = -1;
        int n = arr.size();

       for(int i = n-1 ; i >=0 ; i-- ) {
         
                temp = arr[i];
                arr[i] = maxRig;
                maxRig = max(maxRig, temp);
            }


       return arr;
    }
};


 