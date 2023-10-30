int NthRoot(int n, int m) {
  // Write your code here.
      int s=1;
      int e=m;
      while(s<=e){
        int mid=s+(e-s)/2;
        if(pow(mid,n)==m){
          return mid;
        }
        else if(pow(mid,n)>m){
          e=mid-1;
        }
        else{
          s=mid+1;
        }
      }
      return -1;
}