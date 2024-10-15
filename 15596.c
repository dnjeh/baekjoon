long long sum(int *a, int n) {
    long long tsum=0;
    for(long long i=0;i<n;i++) {
        tsum+=a[i];
    }
    return tsum;
}