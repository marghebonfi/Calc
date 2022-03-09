#include <stdio.h>
#include <stdlib.h>
#define MaxNum  100

int main() {
    int number1, number2, result;
    int op;
    int n;
    int ex;
    FILE *fp_result;
    printf("Insert number of operations: \n");
    scanf("%d", &ex);
    fp_result= fopen("/Users/margheritabonfiglio/CLionProjects/operations/result.txt", "w");
    fprintf(fp_result, "Student ID: 2056309\n");
    for (int i = 0; i < ex; i++) {
        number1 = rand() % (MaxNum+1);
        fprintf(fp_result, "%d", number1);
        op = rand() % 3 + 2;
        for (int j = 0; j<op; j++) {
            n = rand() % 4;
            number2 = rand() % 101;
            switch (n) {
                case 0:
                    result=number1+number2;
                    fprintf(fp_result, "+%d", number2);
                    break;
                case 1:
                    result=number1-number2;
                    fprintf(fp_result, "-%d", number2);
                    break;
                case 2:
                    result=number1*number2;
                    fprintf(fp_result, "*%d", number2);
                    break;
                case 3:
                    result=number1/number2;
                    fprintf(fp_result, "/%d", number2);
            }
            number1=result;
        }
        fprintf(fp_result, "=%d\n", result);
    }



}

