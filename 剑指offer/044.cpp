/*
输入一个递增排序的数组和一个数字S，在数组中查找两个数，使得他们的和正好是S，
如果有多对数字的和等于S，输出两个数的乘积最小的。
*/ 

class Solution {
public:
    vector<int> FindNumbersWithSum(vector<int> array,int sum) {
        int s=0,e=array.size()-1;
        vector<int> res;
        while(s<e){
            if(array[s]+array[e]<sum)
                s++;
            else if(array[s]+array[e]>sum)
                e--;
            else{
                res.push_back(array[s]);
                res.push_back(array[e]);
                break;
            }
        }
        return res;
    }
};
