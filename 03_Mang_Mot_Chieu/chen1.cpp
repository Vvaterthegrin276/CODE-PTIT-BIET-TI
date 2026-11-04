#include <stdio.h>
#include <stdlib.h>

// Ð?nh nghia c?u trúc d? luu giá tr? và ch? s? ban d?u c?a nó
typedef struct {
    long long val;
    int original_idx;
} Element;

// Hàm so sánh d? s?p x?p theo giá tr? (val)
int compare(const void *a, const void *b) {
    Element *ea = (Element *)a;
    Element *eb = (Element *)b;
    if (ea->val < eb->val) return -1;
    if (ea->val > eb->val) return 1;
    return 0;
}

void solve() {
    int N;
    if (scanf("%d", &N) != 1) return;

    // C?p phát d?ng m?ng các ph?n t?
    Element *arr = (Element *)malloc(N * sizeof(Element));
    
    for (int i = 0; i < N; i++) {
        scanf("%lld", &arr[i].val);
        arr[i].original_idx = i; // Luu l?i ch? s? ban d?u (0, 1, 2...)
    }

    // S?p x?p m?ng theo giá tr?
    qsort(arr, N, sizeof(Element), compare);

    long long answer_val = -1;
    int min_first_idx = N + 1; // Kh?i t?o là m?t s? l?n hon ch? s? t?i da

    int i = 0;
    while (i < N) {
        int j = i + 1;
        // Tìm vùng các ph?n t? có cùng giá tr?
        while (j < N && arr[j].val == arr[i].val) {
            j++;
        }

        // N?u d? dài vùng > 1 nghia là s? này xu?t hi?n nhi?u hon 1 l?n
        if (j > i + 1) {
            // Tìm ch? s? g?c nh? nh?t trong nhóm trùng l?p này
            int current_min_idx = arr[i].original_idx;
            for (int k = i + 1; k < j; k++) {
                if (arr[k].original_idx < current_min_idx) {
                    current_min_idx = arr[k].original_idx;
                }
            }

            // N?u ch? s? xu?t hi?n d?u tiên c?a s? này nh? hon k?t qu? t?m th?i thì c?p nh?t
            if (current_min_idx < min_first_idx) {
                min_first_idx = current_min_idx;
                answer_val = arr[i].val;
            }
        }
        // Nh?y d?n nhóm s? ti?p theo
        i = j;
    }

    if (answer_val == -1) {
        printf("NO\n");
    } else {
        printf("%lld\n", answer_val);
    }

    free(arr);
}

int main() {
    int T;
    if (scanf("%d", &T) == 1) {
        while (T--) {
            solve();
        }
    }
    return 0;
}
