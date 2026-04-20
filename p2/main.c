#include <stdio.h>

int main(void) {
    int N;
    char ch;
    
    scanf("%d", &N);
    getchar();
    
    int count_small = 0, max_small = 0;
    int count_num = 0, max_num = 0;
    
    for (int i = 0; i < N; i++) {
        scanf("%c",&ch);
        
        if (ch >= 'a' && ch <= 'z') {
            count_small++;
            count_num = 0;
            if (count_small > max_small)
                max_small = count_small;
        }

        else if (ch >= '0' && ch <= '9') {
            count_num++;
            count_small = 0;
            if (count_num > max_num)
                max_num = count_num;
        }
        
        else {
            count_small = 0;
            count_num = 0;
            
        }
    }
    
    printf("%d\n", max_small);
    printf("%d\n", max_num);
    
    return 0;
}
