

int Solution::gcd(int A, int B) {
    
     if(A==0){
        return B;
    }
    else if(B==0){
        return A;
    }
    return  gcd(B%A,A);
}
