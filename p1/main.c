#include <stdio.h>

int main(void) {
    int N;
    int found = 0; // 조건을 만족하는 경우가 있는지 확인하는 변수

    scanf("%d", &N);

    // A, B, C 각 상품은 최소 1개 이상 구매하므로 1부터 시작
    for (int a = 1; a <= (N / 900); a++) {
        for (int b = 1; b <= (N / 750); b++) {
            for (int c = 1; c <= (N / 200); c++) {
                
                // 잔돈 x
                if ((900 * a) + (750 * b) + (200 * c) == N) {
                    // B는 항상 짝수개 구매
                    if (b % 2 == 0) {
                         // C개수는 A보다 작거나 B보다 작다
                        if (c < a || c < b) {
                            
                            printf("%d %d %d\n", a, b, c);
                            found = 1;
                        }
                    }
                }
            }
        }
    }
    
    if (found == 0) {
        printf("none\n");
    }

    return 0;
}
