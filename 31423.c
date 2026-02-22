#include <stdio.h>
#include <stdlib.h>
typedef struct ChaNode {
    char cha;
    struct ChaNode* nxt;
} ChaNode;

char t[500001];
ChaNode* a[2][500000];
int main() {
    int n, _t, _tt;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf(" %s", t);
        ChaNode* pre;
        for(int j=0;t[j];j++) {
            ChaNode* tcn=(ChaNode *)malloc(sizeof(ChaNode));
            tcn->cha=t[j];
            tcn->nxt=NULL;
            if(!j) a[0][i]=tcn;
            else pre->nxt=tcn;
            
            pre=tcn;
        }
        a[1][i]=pre;
    }
    for(int i=0;i<n-1;i++) {
        scanf("%d %d", &_t, &_tt);
        _t--; _tt--;
        a[1][_t]->nxt=a[0][_tt];
        a[1][_t]=a[1][_tt];
    }
    ChaNode* pri;
    for(pri=a[0][_t];pri;pri=pri->nxt) {
        printf("%c", pri->cha);
    }
}