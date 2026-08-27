class Solution {
public:
    int reverse(int x) {
        long long rn = 0;

        while(x){
            rn=(rn*10)+x%10;
            x/=10;
        }

        if(rn>INT_MAX || rn<INT_MIN) return 0;

        return rn;
    }
};