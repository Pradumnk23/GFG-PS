class Solution{
    public:
    // function to check if the number is sparse
    // n : is the number to check if it is sparse
    bool isSparse(int n){
        
        // Your code
        /*if((n&(n<<1))==0)
            return true;
        else
            return false;*/
            
        return (n&(n>>1))==0;


    }
};
