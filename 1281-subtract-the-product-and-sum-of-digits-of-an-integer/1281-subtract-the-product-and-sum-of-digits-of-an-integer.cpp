class Solution {
public:
    int subtractProductAndSum(int n) {
     int add=0;
        int prod=1;
        int temp=0;
        while(n!=0){
            temp=n%10;
            add=add+temp;
            prod=prod*temp;
            n=n/10;
        }
        return prod-add;   
    }
};