#include <stdio.h>
#include <stdlib.h>    
#include <string.h>

#define PASSWORD "2025"
void flush_input(void);

int main() {
    
    printf("********************************************\n");
    printf("1     .----------.       \n");
    printf("2   .'            `.     \n");
    printf("3  /   .--------. r  \\    \n");
    printf("4 ;   /          \\   ;   \n");
    printf("5 |  ;            ;  |   \n");
    printf("6 ;   \\          /   ;   \n");
    printf("7  \\   `--------'   /    \n");
    printf("8   `.            .'     \n");
    printf("9     `-........-'       \n");
    printf("10                       \n");
    printf("11                       \n");
    printf("12      ( o.o )          \n");
    printf("13                       \n");
    printf("14      ( owo )          \n");
    printf("15                       \n");
    printf("16      ( ^_^ )          \n");
    printf("17                       \n");
    printf("18                       \n");
    printf("********************************************\n");
    printf("請按 Enter 繼續...\n");
    //getchar();
    system("PAUSE");
    //system("clear");
    system("CLS");

    char input[5];
    int wrongCount=0;
    while (1){
        if (wrongCount < 3){
            printf("請輸入四位數字密碼：");
            scanf("%4s", input);
            flush_input();
            if (strcmp(input, PASSWORD) == 0) {
                printf("密碼正確，歡迎進入！\n");
                break;
            }else {
                wrongCount++;
                printf("密碼錯誤，還有 %d 次輸入機會！\n", 3-wrongCount);
            }
        }else {
            printf("密碼錯誤 %d 次，程式結束！\n", wrongCount);
            return 0;
        }
    }
}
void flush_input(void) {
    //int ch;
    //while ((ch = getchar()) != '\n' && ch != EOF) {}
    fflush(stdin);
}
