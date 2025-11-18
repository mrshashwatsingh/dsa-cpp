/*
Used properties XOR to solve the problem.

Since,  a^0 == a;
        a^a == 0;
        a^b == b^a;
        (a^b)^c == a^(b^c);

We will XOR all the elements of the array and only the element that has unique value will be left.

    n1^n2^n3^...^n1^n2^n3^...^n
=>  (n1^n1)^(n2^n2)^(n3^n3)^...^n
=>  0^0^0^...^n
=>  n (unique value)
*/

/*
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int num=0;
        for(int e : nums) {
            num ^= e;
        }

        return num;
    }
};
*/