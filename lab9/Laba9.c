#include <stdio.h>

int max(int x, int y) {
    if (x > y) {
        return x;
    }
    else {
        return y;
    }
}

int min(int x, int y) {
    if (x < y) {
        return x;
    }
    else {
        return y;
    }
}

int sign(int num) {
    if (num > 0) {
        return 1;
    }
    if (num == 0) {
        return 0;
    }
    else {
        return -1;
    }
}

int modul(int num) {
    if (num >= 0) {
        return num;
    }
    else {
        return -num;
    }
}

int main(){
    int i,j,l,flag,num;
    flag = 1;
    i = 24;
    j = -14;
    l = 9;
    num = 0;
    for (int k = 0; k < 50; k++) {
        i = (i + k) * (j - k) * (l + k) % 25;
        j = min(i + k, max(j-k,l-k)) % 30;
        l = modul(j-l)* sign(i) - modul(i-l) * sign(j);
        if (((i >= 5) && (i <= 15)) && ((j <= -5) && (j >= -15))) {
            printf("Попадание, шаг - %d \n", num);
            flag = 0;
            break;
        }
        num += 1;
    }
    if (flag == 1) {
        printf("Непопадание\n");
    }
    return 0;

}
