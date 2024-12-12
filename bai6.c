#include <stdio.h>
int main() {
    char str[100];
    int count = 0;
    printf("Nhap vao 1 chuoi : ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            count++;
        }
    }
    printf("%d \n", count);

    return 0;
}
