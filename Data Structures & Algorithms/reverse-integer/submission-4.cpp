class Solution {
public:
    int reverse(int x) {
        bool check=false;
        if(x<0) check=true;
        string s=to_string(x);
        std::reverse(s.begin(),s.end());
        long long num=stoll(s);
        if(num>=INT_MAX || num<=INT_MIN) return 0;
        if(check){
            num*=-1;
        }
        return (int)num;
    }
};
