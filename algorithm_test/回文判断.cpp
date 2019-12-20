/*************************************************************************
	> File Name: 回文判断.cpp
	> Author: 
	> Mail: 
	> Created Time: 五 12/20 20:23:13 2019
 ************************************************************************/

/**
 折半判断
 判断一个整数是否是回文数。回文数是指正序（从左向右）和倒序（从右向左）读都是一样的整数。
 
 示例 1:
 
 输入: 121
 输出: true
 **/
class Solution {
public:
    bool isPalindrome(int x) {
        if(x%10==0 && x!=0){
            return false;
        }
        int curr = 0;
        while(curr < x){
            curr = curr*10 + x%10;
            x /= 10;
        }
        return curr==x || x==curr/10;//如果是奇数长度的话，中间的数字便是最高位
    }
};
