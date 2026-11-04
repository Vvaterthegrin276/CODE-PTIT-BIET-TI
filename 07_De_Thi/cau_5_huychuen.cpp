#include <stdio.h>
#include <string.h>

void toRoman(int num, char *roman) {
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char *symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    roman[0] = '\0';
    for (int i = 0; i < 13; i++) {
        while (num >= values[i]) {
            strcat(roman, symbols[i]);
            num -= values[i];
        }
    }
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int k;
        scanf("%d", &k);
        char result[1000] = "";
        for (int i = 0; i < k; i++) {
            int x;
            scanf("%d", &x);
            char roman[20];
            toRoman(x, roman);
            if (i) strcat(result, " ");
            strcat(result, roman);
        }
        printf("%s\n", result);
    }
    return 0;
}
