#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* my_string, const char* target) {
    int answer = 0, k;
    for(int i = 0 ; my_string[i] != 0 ; i++){
        if(my_string[i] == target[0]){
            k = i;
            answer = 1;
            printf("1. mystring[%d] = %c , target[0] = %c\n", i, my_string[i], target[0]);
            for(int j = 0 ; target[j] != 0; j++){
                printf("2. mystring[%d] = %c , target[%d] = %c\n", k, my_string[k], j,target[j]);
                if(my_string[k] != target[j]){
                    printf("3. mystring[%d] = %c , target[%d] = %c\n", k, my_string[k], j,target[j]);
                    answer = 0;
                    break;
                }
                k++;
            }
            if(answer == 1) return answer;
        }
    }
    return answer;
}

int main(){
    char name[7] = "banana";
    char check[5] = "wxyz";

    solution(name, check);
}