#include <stdio.h>
int main() {
    int a, b, c, sum=0;
    scanf("%d %d %d", &a, &b, &c);
    if(!(a||b||c)) {
        return 0;
    }
    for(b--;b>0;b--) {
        switch(b) {
        case 4: case 6: case 9: case 11:
            sum+=30;
            break;
        default:
            sum+=31;
            break;
        case 2:
            if((!(c%4)&&c%100)||!(c%400)) {
                sum+=29;
            }
            else {
                sum+=28;
            }
            break;
        }
    }
    sum+=a;
    printf("%d\n", sum);
    main();
}