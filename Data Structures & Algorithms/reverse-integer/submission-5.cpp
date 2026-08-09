class Solution {
public:
    int reverse(int x) {
        bool check=false;
        if(x<0) check=true;
        int num=x;
        int ans=0;
        while(num){
            int digit=abs(num%10);
            if(ans > INT_MAX/10 || ans < INT_MIN/10) return 0;
            if( (ans==INT_MAX/10 && digit > INT_MAX % 10) || 
                    (ans==INT_MIN && digit>INT_MAX % 10)){
                return 0;
            }
            ans =ans*10+digit;
            num/=10;
        }
        if(check){
            ans*=-1;
        }
        return ans;
    }
};
