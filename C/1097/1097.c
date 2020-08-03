#include<stdio.h>
int main(){
    int i, I, j, k;

    for (int i = 1,j =7; i <= 9; i += 2,j += 2) {
            for (int l = i, k = j; k >= (j-2); k--) {
                printf("I=%d J=%d\n", I, k);
            }
        }

    return 0;
}
