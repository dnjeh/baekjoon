#include <stdio.h>

float scan() {
    int max, min, t, sum=0;
    for(int i=0;i<6;i++) {
        scanf("%d", &t);   
        sum+=t;
        if(!i||max<t) max=t;
        if(!i||min>t) min=t;
    }
    if(!sum) return -1;
    return (sum-max-min)/4.0;
}

int main() {
    float t;
    for(t=scan();t!=-1;t=scan()) {
        printf("%g\n", t); 
    }  
    return 0;
}
