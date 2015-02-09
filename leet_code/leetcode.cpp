#include "leetcode.h"
/*Questoin:179 Largest Number
	  Description:Given a list of non negative integers, 
	  arrange them such that they form the largest number.
	  For example, given [3, 30, 34, 5, 9], the largest formed number is 9534330.
	  Note: The result may be very large, so you need to return a string instead of an integer.		
*/
string leet_code_solution::largestNumber(vector<int> &num){
	return NULL;
}
/*Question:1 Two Sum
  Description:Given an array of integers, find two numbers such that they add up to a specific target number.
  The function twoSum should return indices of the two numbers such that they add up to the target, where index1 must be less than index2. Please note that your returned answers (both index1 and index2) are not zero-based.
  You may assume that each input would have exactly one solution.
  Input: numbers={2, 7, 11, 15}, target=9
  Output: index1=1, index2=2 
*/
vector<int> leet_code_solution::twoSum(vector<int> &numbers,int target){
	vector<int> result;
	int val = 0;
	int index_1,index_2;
	if(numbers.size() > 0){
		map<int,int> hash_map;
		hash_map.clear();
		for(int i = 0;i < numbers.size();i++)
			hash_map[numbers[i]] = i;

		for(int i = 0;i < numbers.size();i++){
			int val = target - numbers[i];
			if(hash_map.find(val) != hash_map.end()){
				if(i != hash_map[val]){
					index_1 = i + 1;
					index_2 = hash_map[val] + 1;
					if(index_1 > index_2){
						int temp;
						temp = index_1;
						index_1 = index_2;
						index_2 = temp;
					}
					result.push_back(index_1);
					result.push_back(index_2);
				}
			}
		}
	}
	return result;
}
 /*Question:8 String to integer(atoi)
	  Description:Implement atoi to convert a string to an integer.
	  Hint: Carefully consider all possible input cases. 
			If you want a challenge, please do not see below and ask yourself what are the possible input cases.
	  Notes: It is intended for this problem to be specified vaguely (ie, no given input specs). 
			 You are responsible to gather all the input requirements up front. 
*/
int leet_code_solution::my_atoi(const char *str){
	if(str == NULL)
        return 0;
	while(isspace(*str))
        *str++;
    int sum = 0;
    int sign = 1;
    if(*str == '-')
		sign = -1;
    if(*str == '-' || *str == '+')
        *str++;
    while(*str != '\0'){
		if(*str >= '0' && *str <= '9'){
			unsigned int val = *str - '0';
			//判断是否溢出
			if((sum > _INT_MAX / 10) || (sign > 0 ? (sum == _INT_MAX / 10 && val > INT_MAX % 10):(sum == ((unsigned int)_INT_MAX + 1) / 10 && val > (((unsigned int)_INT_MAX + 1) % 10)))){
				return sign > 0 ? _INT_MAX : _INT_MIN;
			}
			sum = sum * 10 + val;
			
		}
        else  
            break;
		*str++;
	}

    sum = sign * sum;
    return sum;
}
/*Question:7 Reverse Integer
	  Description:Reverse digits of an integer.
	  Example1: x = 123, return 321
	  Example2: x = -123, return -321
*/
int leet_code_solution::my_reverse_int(int x){
	int new_int;
	int sign = 1;//符号位
	if(x < 0){
		sign = -1;
		x = abs(x);//取得x的绝对值
	}

	
	return 0;
}
/*Question:
	  Description:You are given two linked lists representing two non-negative numbers. 
	  The digits are stored in reverse order and each of their nodes contain a single digit. 
	  Add the two numbers and return it as a linked list.
	  Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
      Output: 7 -> 0 -> 8
	*/
struct ListNode leet_code_solution:: *addTwoNumbers(struct ListNode *l1,struct ListNode *l2){
	return NULL;
}