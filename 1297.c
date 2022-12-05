#include <stdio.h>
#include <math.h>
int main() {
    int d, h, w, pd;
    double ph, pw;
    scanf("%d %d %d", &d, &h, &w);
    pd=(int)pow(d, 2);
    ph=pd*(pow(h, 2)/(pow(h, 2)+pow(w, 2)));
    pw=pd*(pow(w, 2)/(pow(h, 2)+pow(w, 2)));
    printf("%d %d", (int)sqrt(ph), (int)sqrt(pw));
}