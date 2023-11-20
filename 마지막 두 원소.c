#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int* solution(int num_list[], size_t num_list_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int) * (num_list_len + 1));
    for(int i = 0 ; i < num_list_len; i++){ //answer = num_list -> core dump 됨, 아마도 num_list 배열에 할당되지 않은 메모리를 참조해서 그럴 것으로 예상
        answer[i] = num_list[i];
    }
    if(num_list[num_list_len - 2] < num_list[num_list_len - 1]) answer[num_list_len] = num_list[num_list_len - 1] - num_list[num_list_len - 2];
    else answer[num_list_len] = 2 * num_list[num_list_len - 1];
    return answer;
}