#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char a[10010][510];
int compare(const void* a, const void* b) {
    return strcmp((const char*)a, (const char*)b);
}
int chk(char *t, int n) {
    int mid, it;
    for(int sta=0, end=n-1;sta<end;mid=(sta+end)/2) {
        mid=(sta+end)/2;
        if(!(it=strncmp(t, a[mid], strlen(t)))) 
        return 1;
        else if(it<0) end=mid-1;
        else sta=mid+1;
    }
    if(!strncmp(t, a[mid], strlen(t))) 
    return 1;
    return 0;
}
int main() {
    int n, m, ans=0;
    char t[510];
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++) {
        scanf("%s", a[i]);
    }
    qsort(a, n, sizeof(a[0]), compare);
    for(int i=0;i<m;i++) {
        scanf("%s", t);
        if(chk(t, n)) ans++;
    }
    printf("%d", ans);
}