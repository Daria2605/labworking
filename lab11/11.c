#include <stdio.h>
#include <ctype.h>

#define MY_INT_MAX 2147483647

void go_to_the_end(c) {
    while (c != '\n' && c != '\t' && c != ' ') {
        c = getchar();
    }
}

int add_digit(int number, char c) {
    return number * 10 + (c - '0');   
}

int convert_to_decimal(int number) {
    int result = 0;
    int factor = 1;
    while (number != 0) {       
        result += (number % 10) * factor;
        number /= 10;
        factor *= 5;
    }
    return result;
}

void check(int number, char c, int five, int otrz) {
    char c2 = getchar();
    if (five) {
        if (number <= MY_INT_MAX && c - '0' <= 4) {       
            if (c2 == ' ' || c2 == '\n' || c2 == '\t') {
                if (otrz){
                    printf("-%d%c", convert_to_decimal(add_digit(number, c)), c2);
                }
                else {
                    printf("%d%c", convert_to_decimal(add_digit(number, c)), c2);
                }
            } else {
                go_to_the_end(c2);
            }        
        } else {
            go_to_the_end(c2);
        }
    } else {
        if (number <= MY_INT_MAX && (c - '0' == 4 || c - '0' == 3)) {       
            if (c2 == ' ' || c2 == '\n' || c2 == '\t') {
                printf("%d%c", convert_to_decimal(add_digit(number, c)), c2);
            } else {
                go_to_the_end(c2);
            }        
        } else {
            go_to_the_end(c2);
        }
    }
}

enum state{

    CHECK,
    IN_WORD,
    IN_ZEROES,
    OUT_OF_WORD,
    OTRIZ
    

} state;

void main() {
    state = CHECK;
    int zeroes = 0;
    int otrz = 0;
    int number = 0;
    int five = 0;
    int length = 0;
    char c = getchar();

    while (c != EOF) {
        switch (state) {
            case CHECK:
                if (length >= 9) {
                    check(number, c, five, otrz);
                    zeroes = 0;
                    otrz = 0;
                    length = 0;
                    number = 0;
                    five = 0;
                    break;                   
                } else if (number == 0){
                    state = IN_ZEROES;
                }  else {
                    state = IN_WORD;
                    continue;
                }
                    
            case IN_ZEROES:
                if (c == '-'){
                        state = OTRIZ;
                        break;
                }
                if (c == '0') {
                    zeroes = 1;
                    state = CHECK;
                    break;
                } else {
                    state = IN_WORD;
                    
                }
                
            
            case OTRIZ:
                // if (c == '0' && !zeroes){
                //     otrz = 1;
                //     state = CHECK;
                // }
                // if (c == '0'){
                //     state = CHECK;
                // } else if (c != '0'){
                //     state = IN_WORD;
                // }
                if (zeroes && state == OTRIZ){
                    while (c != '\n' && c != '\t' && c != ' ') {
                        c = getchar();
                    }
                    zeroes = 0;
                    otrz = 0;
                    number = 0;
                    five = 0;
                    length = 0;
                }
                else if (state == OTRIZ){
                    otrz = 1;
                    state = IN_WORD;
                }
                
                
            case IN_WORD:
                
                if ((!isdigit(c) || c == '5' || c == '6' || c == '7' || c == '8' || c == '9') && (c != ' ' && c != '\n' && c != '\t')) {
                    go_to_the_end(c);
                    number = 0; 
                    length = 0;    
                    five = 0;
                    otrz = 0;
                    zeroes = 0;                                           
                    state = CHECK;
                    break;
                                       
                } else if (c == '3' || c == '4') {
                    number = add_digit(number, c);
                    length++;
                    five = 1;
                    state = CHECK;
                    break;

                } else if (c == '0' || c == '1' || c == '2') {
                    length++;
                    number = add_digit(number, c);
                    state = CHECK;
                    break;

                } else {
                    state = OUT_OF_WORD;
                }

            case OUT_OF_WORD:
                if (five) {
                    if (otrz) {
                        printf("-%d%c", convert_to_decimal(number), c);
                    }
                    else {
                        printf("%d%c", convert_to_decimal(number), c);
                    }
                }
                number = 0; 
                length = 0;    
                five = 0;
                otrz = 0;
                zeroes = 0;
                state = CHECK;
                break;
        }

        c = getchar();
    }     
}

