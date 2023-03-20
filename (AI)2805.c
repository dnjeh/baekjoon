#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int trees[n];
    int max_height = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &trees[i]);
        if (trees[i] > max_height) {
            max_height = trees[i];
        }
    }
    int lo = 0, hi = max_height, ans = 0;
    while (lo <= hi) {
        int mid = (lo + hi) / 2;
        int total = 0;
        for (int i = 0; i < n; i++) {
            if (trees[i] > mid) {
                total += trees[i] - mid;
            }
        }
        if (total >= m) {
            ans = mid;
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }
    printf("%d\n", ans);
    return 0;
}
