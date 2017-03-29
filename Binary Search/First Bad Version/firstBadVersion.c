// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

int firstBadVersion(int n) {
    int low = 1,high = n;
    while(low < high){
        int mid = (high - low)/2 + low;
        if(!isBadVersion(mid)) //好的
            low = mid+1;
        else //坏的
            high = mid;
    }
    return low;
}
