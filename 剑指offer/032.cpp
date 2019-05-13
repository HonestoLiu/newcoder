/*
{6,-3,-2,7,-15,1,2,2},连续子向量的最大和为8(从第0个开始,到第3个为止)。
给一个数组，返回它的最大连续子序列的和，你会不会被他忽悠住？(子向量的长度至少是1)
*/

class Solution {
public:
    int FindGreatestSumOfSubArray(vector<int> array) {
        int p=0,sum=0,res=array[0];
        while(p<array.size()){
            sum+=array[p];
            if(sum>res)
                res=sum;
            if(sum<0)
                sum=0;
            p++;
        }
        return res;
    }
};
