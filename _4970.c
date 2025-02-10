#include <stdio.h>
int chkr(char t) {
    char s[10]="012PQR";
    for(int i=0;s[i];i++) {
        if(s[i]==t) return i+1;
    }
    return 0;
}
int calr(char t, int mcnt, int p, int q, int r) {
    int ret=0;
    if(chkr(t)-1<3) ret=t-'0';
    else ret=(t=='P')?p:((t=='Q')?q:r);
    if(mcnt%2) {
        if(!ret) ret=2;
        else if(ret==2) ret=0;
    }
    return ret;
}
int cal(int* a) {
    if(a[2]) {
        return (!a[0]||!a[1])?0:((a[0]==1||a[1]==1)?1:2);
    }
    else {
        return (a[0]==2||a[1]==2)?2:((a[0]==1||a[1]==1)?1:0);
    }
}
int main() {
    char t[85];
    for(scanf("%s", t);t[0]!='.';scanf("%s", t)) {
        int tcnt=0;
        for(int p=0;p<=2;p++) for(int q=0;q<=2;q++) for(int r=0;r<=2;r++) {
            int sta[100][5]={{0, }}, sind=0;
            for(int i=0;t[i];i++) {
                if(t[i]=='(') sind++;
                else if(t[i]==')') {
                    int temp=cal(sta[sind]);
                    if(sta[sind-1][4]%2) {
                        if(!temp) temp=2;
                        else if(temp==2) temp=0;
                    }
                    sta[sind-1][4]=0;
                    sta[sind-1][sta[sind-1][3]]=temp;
                    sta[sind-1][3]=1;
                    for(int ii=0;ii<5;ii++) {
                        sta[sind][ii]=0;
                    }
                    sind--;
                }
                else if(t[i]=='*') sta[sind][2]=1;
                else if(t[i]=='-') sta[sind][4]++;
                else if(chkr(t[i])) {
                    sta[sind][sta[sind][3]]=calr(t[i], sta[sind][4], p, q, r);
                    sta[sind][4]=0;
                    sta[sind][3]=1;
                }
            }
            if(sta[0][0]==2) tcnt++;
        }
        printf("%d\n", tcnt);
    }
}