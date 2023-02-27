#include <stdio.h>
int spagetti;
int testnum(int _a[]) {
    int _i, _max=0;
    for(_i=1;_i<=9;_i++) {
        if(_max==3&&_a[_i]==2) {
            spagetti=spagetti*10+_i;
            return 32;
        }
        else if(_max==2&&_a[_i]==3) {
            spagetti=spagetti+_i*10;
            return 32;
        }
        else if(_max==2&&_a[_i]==2) {
            spagetti=(spagetti*10+_i)>(spagetti+10*_i)?(spagetti*10+_i):(spagetti+_i*10);
            return 22;
        }
        else if(_max<=_a[_i]) {
            spagetti=_i;
            _max=_a[_i];
        }
    }
    return _max;
}
int main() {
    int col[4]={0, }, num[10]={0, }, i, it, cf=0, sum=0, iff=0, max=0;
    char ct, trash;
    for(i=0;i<5;i++) {
        scanf("%c%c%d%c", &ct, &trash, &it, &trash);
        num[it]++;
        if(max>it) max=it;
        sum+=it;
        if(ct=='R') col[0]++;
        else if(ct=='B') col[1]++;
        else if(ct=='Y') col[2]++;
        else if(ct=='G') col[3]++;
    }
    sum/=5;
    for(i=0;i<4;i++) if(col[i]==5) cf=1;
    if(sum>=3&&sum<=8&&num[sum-2]&&num[sum-1]&&num[sum]&&num[sum+1]&&num[sum+2]) {
        iff=6;
        spagetti=sum+2;
    }
    else if(testnum(num)==4) iff=5;
    else if(testnum(num)==32) iff=4;
    else if(testnum(num)==3) iff=3;
    else if(testnum(num)==22) iff=2;
    else if(testnum(num)==2) iff=1;
    switch(cf*100+iff) {
    case 106:
        printf("%d", 900+spagetti);
        break;
    case 5: case 105:
        printf("%d", 800+spagetti);
        break;
    case 4: case 104:
        printf("%d", 700+spagetti);
        break;
    case 100: case 103: case 102: case 101:
        printf("%d", 600+spagetti);
        break;
    case 6:
        printf("%d", 500+spagetti);
        break;
    case 3:
        printf("%d", 400+spagetti);
        break;
    case 2:
        printf("%d", 300+spagetti);
        break;
    case 1:
        printf("%d", 200+spagetti);
        break;
    default:
        printf("%d", 100+spagetti);
        break;
    }
}