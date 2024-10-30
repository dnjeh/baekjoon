#include <stdio.h>
#define MAX 1001000
int d[MAX];
int main() {
    int ap=0, due=1, siz=0, n, i, t, tt;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%d", &t);
        switch(t) {
        case 5:
            printf("%d\n", siz);
            break;
        case 6:
            printf(siz?"0\n":"1\n");
            break;
        case 7:
            printf("%d\n", siz?d[(ap+1+MAX)%MAX]:-1);
            break;
        case 8:
            printf("%d\n", siz?d[(due-1+MAX)%MAX]:-1);
            break;
        case 1:
            scanf("%d\n", &tt);
            d[(MAX+ap--)%MAX]=tt;
            siz++;
            break;
        case 2:
            scanf("%d\n", &tt);
            d[(MAX+due++)%MAX]=tt;
            siz++;
            break;
        case 3:
            if(siz) {
                printf("%d\n", d[(MAX+(ap++)+1)%MAX]);
                siz--;
            }
            else printf("-1\n");
            break;
        case 4:
            if(siz) {
                printf("%d\n", d[(MAX+(due--)-1)%MAX]);
                siz--;
            }
            else printf("-1\n");
            break;
        default:
            break;
        }
    }
}