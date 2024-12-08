#include <stdio.h>

int main() {
    char* tt;
    char t[10];
    scanf("%s", t);
    switch(t[0]) {
        case 'N': tt="North London Collegiate School"; break;        
        case 'B': tt="Branksome Hall Asia"; break;
        case 'K': tt="Korea International School"; break;
        case 'S': tt="St. Johnsbury Academy"; break;
        default: 
    }
    printf("%s", tt);
}