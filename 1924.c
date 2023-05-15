#include <stdio.h>
int main() {
    char d[7][4]={"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    int x, y;
    scanf("%d %d", &x, &y);
    for(;x>1;x--) {
        switch(x) {
        case 2: case 4: case 6: case 8: case 9: case 11:
            y+=31;
            break;
        case 3:
            y+=28;
            break;
        default:
            y+=30;
            break;

        }
    }
    printf("%s", d[y%7]);
}