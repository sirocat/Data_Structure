#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5;
    int *arr;

    // 정수 5개를 저장할 메모리 할당 (모두 0으로 초기화)
    arr = (int *)calloc(n, sizeof(int));
    if (arr == NULL) {
        printf("메모리 할당 실패!\n");
        return 1;
    }

    // 값 확인 (0으로 초기화됨)
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    // 동적 메모리 해제
    free(arr);

    return 0;
}
