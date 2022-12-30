#include <stdio.h>
#include <string.h>
int main() {
    int gL[4]={0, }, tL[4]={0, }, i, j, tsum, max=0, n, k;
    char t1, t[21]={'\0', }, maxc[21]={'\0', };
    for(scanf("%c", &t1);t1!='\n';scanf("%c", &t1)) {
        switch(t1) {
            case 'L':
                gL[0]++;
                break;
            case 'O':
                gL[1]++;
                break;
            case 'V':
                gL[2]++;
                break;
            case 'E':
                gL[3]++;
                break;
            default:
                break;
        }
    }
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%s", t);
        tsum=tL[0]=tL[1]=tL[2]=tL[3]=0;
        for(j=0;t[j]!='\0';j++) {
            switch(t[j]) {
                case 'L':
                    tL[0]++;
                    break;
                case 'O':
                    tL[1]++;
                    break;
                case 'V':
                    tL[2]++;
                    break;
                case 'E':
                    tL[3]++;
                    break;
                default:
                    break;
            }
        }   
        for(j=0;j<3;j++) {
            for(k=j+1;k<4;k++) {
                if(!j&&k==1) tsum=(gL[j]+tL[j]+gL[k]+tL[k]);
                else tsum*=(gL[j]+tL[j]+gL[k]+tL[k]);
            }
        }
        if(tsum%100>max||!i) {
            max=tsum%100;
            strcpy(maxc, t);
        }
        else if(tsum%100==max) {
            for(j=0;t[j]||maxc[j];j++) {
                if(t[j]<maxc[j]||!t[j]&&maxc[j]) {
                    strcpy(maxc, t);
                    break;
                }
                else if(t[j]>maxc[j]||t[j]&&!maxc[j]) {
                    break;
                }
            }
        }
    }
    printf("%s", maxc);
}