#include <stdio.h>
#include <stdlib.h>    
#include <string.h>

#define PASSWORD "2025"
void flush_input(void);

int main() {
    
    printf("********************************************\n");
    printf("1     .----------.       \n");
    printf("2   .'            `.     \n");
    printf("3  /   .--------.   \\    \n");
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
    getchar();
    system("clear");

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
    
    
    // 2
    char choice, size, ans;
    int i, j, space, letter, number;
    while(1){
        system("clear");
        printf("------------------------\n");
        printf("| a. 畫出直角三角形    |\n");
        printf("| b. 顯示乘法表        |\n");
        printf("| c. 結束              |\n");
        printf("------------------------\n");
        printf("請輸入你想前往的功能：");
        scanf(" %c", &choice);
        flush_input();
        if (choice == 'A' || choice == 'a'){
            while (1){
                system("clear"); 
                printf("請輸入一個 'a' 到 'n' 之間的字元：");
                scanf(" %c", &size);
                flush_input();
                if (size >= 'a' && size <= 'n'){
                    printf("\n\n");
                    for (i = 1 ; i <= size - 'a' + 2 ; i++) {
                        for (space = 1 ; space <= size - 'a' + 2 - i ; space++) {
                            printf(" ");
                        }
                        for (letter = 1 ; letter <= i - 1 ; letter++) {
                            printf("%c", size - i + 1 + letter);
                        }
                        printf("\n");
                    }
                    printf("\n請按 Enter 回到主畫面\n");
                    getchar();
                    break;
                }else{
                    printf("請輸入 'a' 到 'n' 之間的字元，按 Enter 再試一次\n");
                    getchar();
                }
            }
        }else if (choice == 'B' || choice == 'b'){
            while (1){
                system("clear");
                printf("請輸入一個 '1' 到 '9' 之間的數字：");
                scanf("%d", &number);
                flush_input();
                if (number >= 1 && number <= 9){
                    printf("\n\n");
                    for (i = 1 ; i <= number ; i++) {
                        for (j = 1 ; j <= number ; j++) {
                            printf("%dx%d=%-2d ", i, j, i * j);
                        }
                        printf("\n");
                    }
                    printf("\n請按 Enter 回到主畫面\n");
                    getchar();
                    break;
                }else{
                    printf("請輸入一個 '1' 到 '9' 之間的數字，按 Enter 再試一次\n");
                    getchar();
                }
            }
        }else if (choice == 'C' || choice == 'c'){
            while (1){
                system("clear");
                printf("你要繼續嗎? (y/n)：");
                scanf(" %c", &ans);
                flush_input();
                if (ans == 'Y' || ans == 'y'){
                    break;
                }else if (ans == 'N' || ans == 'n'){
                    exit(0);
                }else{
                    printf("請輸入 'y' 或 'n'，按 Enter 再試一次\n");
                    getchar();
                }
            }
        }else {
            printf("請輸入 'a', 'b' 或 'c'，按 Enter 再試一次\n");
            getchar();
        }
    }
    system ("pause");
    return 0;
    
}

void flush_input(void) {
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF) {}
}
