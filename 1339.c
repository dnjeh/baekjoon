#include <stdio.h>
#include <string.h>
#include <math.h>
int n, sum;
char a[10][9];
void scaanf(int tt, char* t) {
    int len=strlen(t), i, j;
    for(i=8, j=0;i>0;i--) {
        if(len>=i) {
            a[tt][8-i]=t[j];
            j++;
        }
    }
}
int strtoint(char *t) {
    int f=0, i, ret=0;
    for(i=0;i<8;i++) {
        if(t[i]||f) {
            if(!f) ret=t[i];
            else {
                ret*=10;
                ret+=t[i];
            }
            f=1;
        }
    }
    return ret;
}
void chkmod() {
    int i, j, cnt=0, alp[26]={0, }, tmax[2], now=9;
    for(i=0;i<8;i++) {
        for(j=0;j<n;j++) {
            if(a[j][i]) {
                alp[a[j][i]-65]+=(int)pow(10, 8-i);
                cnt++;
            }
        }
    }
    //printf("11\n");
    for(;cnt;) {
        for(i=0;i<26;i++) {
            if(!i||tmax[0]<alp[i]) {
                tmax[0]=alp[i];
                tmax[1]=i;
            }
        }
        alp[tmax[1]]=0;
        //printf("%d / %d\n", tmax[0], tmax[1]);
        for(i=0;i<8;i++) {
            for(j=0;j<n;j++) {
                if(a[j][i]-65==tmax[1]) {
                    a[j][i]=now;
                    cnt--;
                }
            }
        }   
        now--;
    }
}
void printa() {
    int i, j;
    for(i=0;i<10;i++) {
        for(j=0;j<8;j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
int main() {
    int i;
    char t[9], tt;
    scanf("%d\n", &n);
    for(i=0;i<n;i++) {
        scanf("%s", t);
        scaanf(i, t);
    }
    chkmod();
    //printa();
    for(i=0;i<n;i++) {
        sum+=strtoint(a[i]);
    }
    printf("%d", sum);
    //for(;;);
}