#include <stdio.h>

int printa(int a[][10], int n) {
    printf("----------\n");
    for(int i=0;i<n;i++) {
        for(int j=0;j<=i;j++) {
            printf("%d%c", a[i][j], j==i?'\n':' ');
        }
    }
    printf("----------\n");
}

void scanarr(int t[][10], int n) {
    for(int i=0;i<n;i++) {
        for(int j=0;j<=i;j++) {
            scanf("%d", &t[i][j]);
        }
    }
}

void eocldReal(int* t, int n) {
    int _t;
    for(int i=0;i<n-i;i++) {
        _t=t[i];
        t[i]=t[n-i];
        t[n-i]=_t;
    }
}

void eocld(int t[][10], int n) {
    for(int i=0;i<n;i++) {
        eocldReal(t[i], i); 
    }
}

void spinReal(int t[][10], int stay, int stax, int n) {
    int _t;
    _t=t[stay][stax];
    for(int i=stay;i<n-stax-1;i++) {
        t[i][stax]=t[i+1][stax];
    }
    for(int j=stax;j<n-stay-1;j++) {
        t[n-stax-1][j]=t[n-stax-1][j+1];
    }
    for(int i=n-stax-1, j=n-stay-1;i>stay, j>stax;i--, j--) {
        t[i][j]=t[i-1][j-1];
    }
    t[stay+1][stax+1]=_t;
}

void spin(int t[][10], int n) {
    for(int i=0;i*2<n-i-1;i++) {
        for(int j=0;j<n-(i*3)-1;j++) {
            spinReal(t, i*2, i, n);
            //printa(t, n);
        }
        //printf(">>>>>>>>>\n");
    }
}

int isEqual(int a[][10], int b[][10], int n) {
    int cnt=0;
    for(int i=0;i<n;i++) {
        for(int j=0;j<=i;j++) {
            if(a[i][j]!=b[i][j]) cnt++;
        }
    }
    return cnt;
} 


int main() {
    int a[10][10], b[10][10], n, min=-1, t;
    scanf("%d", &n);
    scanarr(a, n);
    scanarr(b, n);
    if(min>(t=isEqual(a, b, n))||min==-1) {
        min=t;
    }
    for(int i=0;i<6;i++) {
        spin(a, n);
        if(i==3) eocld(a, n);
        //printa(a, n);
        if(min>(t=isEqual(a, b, n))||min==-1) {
            min=t;
        }
    }
    printf("%d", min);
    return 0;
}
