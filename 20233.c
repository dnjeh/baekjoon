#include <stdio.h>
int fun2(int day, int pre) {
    return day-pre<0?0:day-pre;
}
int fun(int fix, int pre, int per, int day) {
    return fix+fun2(day, pre)*per*21;
}
int main() {
    int a, b, x, y, t;
    scanf("%d %d %d %d %d", &a, &x, &b, &y, &t);
    printf("%d %d", fun(a, 30, x, t), fun(b, 45, y, t));
}