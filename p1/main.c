#include <stdio.h>

int main(void) {
    int answer;
    int guess;
    int count = 0;

    scanf("%d", &answer);

    do {
        scanf("%d", &guess);
        count++;

        if (guess > answer) {
            printf("%d>? %d 보다 낮습니다\n", guess, guess);
        }
        else if (guess < answer) {
            printf("%d<? %d 보다 높습니다\n", guess, guess);
        }
        else {
            printf("%d==? %d 정답입니다\n", guess, guess);
        }

    } while (guess != answer);

    printf("%d -> 시도횟수는 %d회\n", answer, count);

    return 0;
}
