#include <stdio.h>
#include <string.h>
int a[512][512], b[201000][4], bmax, n;
char s[2000100], sind, s2[1000100], s2ind;
void sput(char t) {
    s[sind++]=t;
}
void s2put(char t) {
    s2[s2ind++]=t;
}

void rec(int stay, int stax, int endy, int endx, int from) {
    int _a[4][4] = {{stay, stax, (stay+endy)/2, (stax+endx)/2}, 
    {stay, (stax+endx)/2, (stay+endy)/2, endx}, 
    {(stay+endy)/2, stax, endy, (stax+endx)/2}, 
    {(stay+endy)/2, (stax+endx)/2, endy, endx}};
    int f0, f1;
    for(int i=0;i<4;i++) {
        f0=0; f1=0;
        for(int ii=_a[i][0];ii<_a[i][2]&&!(f0&&f1);ii++) {
            for(int jj=_a[i][1];jj<_a[i][3]&&!(f0&&f1);jj++) {
                if(!f0&&!a[ii][jj]) f0=1;
                if(!f1&&a[ii][jj]) f1=1;
            }
            b[from][i]=f1*2+f0;
            if(b[from][i]==3) {
                rec(_a[i][0], _a[i][1], _a[i][2], _a[i][3], from*4+i+1);
                if(bmax<from*4+i+1) bmax=from*4+i+1;
            }
        }
    }
}

int fun(char* t) {
    int ret=0;
    for(int i=0;i<4;i++, ret<<=1) {
        ret+=t[i]-48;
    }
    ret>>=1;
    return ret;
}

void tohex() {
    int t;
    if(b[0][0]==1&&b[0][1]==1&&b[0][2]==1&&b[0][3]==1) {
        strcpy(s2, "0");
        return;
    } 
    else if(b[0][0]==2&&b[0][1]==2&&b[0][2]==2&&b[0][3]==2) {
        strcpy(s2, "1");
        return;
    }
    else {
        sput('1');
        for(int i=0;i<=bmax;i++) {
            for(int j=0;j<4;j++) {
                if(b[i][j]) {
                    if(b[i][j]==1) {
                        sput('0');
                        sput('0');
                    }
                    else if(b[i][j]==2) {
                        sput('0');
                        sput('1');
                    }
                    else if(b[i][j]==3) sput('1');
                }
            }
        }
        for(int i=(sind%4);i<sind;i+=4) {
            s2put((t=fun(&s[i]))>9?65+t-10:48+t);
        }
    }
}

int main() {
    int T;
    scanf("%d", &T);
    for(int i=0;i<T;i++) {
        for(int j=0;j<4;j++) {
            s[j]='0';
        }
        sind=4;
        s2ind=0;
        bmax=0;
        scanf("%d", &n);
        for(int j=0;j<n;j++) {
            for(int k=0;k<n;k++) {
                scanf("%d", &a[j][k]);
            }
        }
        for(int j=0;j<200000;j++) {
            for(int k=0;k<4;k++) {
                b[j][k]=0;
            }
        }
        rec(0, 0, n, n, 0);
        tohex();
        printf("%s\n", s2);
    }
    return 0;
}
