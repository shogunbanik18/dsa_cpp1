class Solution {
public:
    int find(int n, int arr[]){
        if(n == 0){
            return 1;
        }else if(n < 0){
            return 0;
        }
        
        if(arr[n] != 0){
            return arr[n];
        }
        
        int c1 = find(n-1, arr);
        int c2 = find(n-2, arr);
        
        arr[n] = c1+c2;
        
        return arr[n];
    }
    
    int climbStairs(int n) {
        int arr[n+1];
        memset(arr, 0, sizeof(arr));
        
        int ass = find(n, arr);
        return ass;
    }
};
