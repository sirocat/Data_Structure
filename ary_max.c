// 배열 요소의 최대 값을 구하고 출력 (요소 값 입력)
#include <stdio.h>
#include <stdlib.h>

// 요소 개수가 n인 배열 foo의 요소 중 최대값을 반환
int maxof(const int foo[], int elem_cnt) {
    int max = foo[0];  // 첫 번째 요소를 초기 최대값으로 설정
    for (int i = 1; i < elem_cnt; i++) {
        if (foo[i] > max) 
            max = foo[i];
    }
    return max;
}

int main(void) {
    int number;
    printf("사람 수 : ");
    scanf("%d", &number);

    int *height = calloc(number, sizeof(int)); // 동적 메모리 할당
    if (height == NULL) {
        puts("메모리 확보에 실패했습니다.");
        return 1;
    }

    printf("%d명의 키를 입력하세요.\n", number);
    for (int i = 0; i < number; i++) {
        printf("height[%d] : ", i);
        scanf("%d", &height[i]);
    }

    printf("최댓값은 %d입니다.\n", maxof(height, number));

    free(height);  // 동적 메모리 해제
    return 0;
}
