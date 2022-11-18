#include <stdio.h>
int main() {
    int i, j;
    char data[6][4][15]={
        {{"SHIP NAME"},{"CLASS"},{"DEPLOYMENT"},{"IN SERVICE"}},
        {{"N2 Bomber"},{"Heavy Fighter"},{"Limited"},{"21"}},
        {{"J-Type 327"},{"Light Combat"},{"Unlimited"},{"1"}},
        {{"NX Cruiser"},{"Medium Fighter"},{"Limited"},{"18"}},
        {{"N1 Starfighter"},{"Medium Fighter"},{"Unlimited"},{"25"}},
        {{"Royal Cruiser"},{"Light Combat"},{"Limited"},{"4"}},
    };
    for(i=0;i<6;i++) {
        for(j=0;j<4;j++) {
            if(j==0||j==1) {
                printf("%-15s", data[i][j]);
            }
            else if(j==2) {
                printf("%-11s", data[i][j]);
            }
            else {
                printf("%-10s", data[i][j]);
            }
        }
        printf("\n");
    }
}