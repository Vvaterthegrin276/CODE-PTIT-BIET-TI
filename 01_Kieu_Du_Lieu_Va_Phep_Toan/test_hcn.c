#include <stdio.h>

int main() {
    int a, b, c, d, e, f;
    if (scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f) != 6) return 0;

    int dt = a * b + c * d + e * f;
    int canh = 0;
    int i = 1;
    while (i * i <= dt) {
        if (i * i == dt){
		canh = i;
		}
        i++;
    	
    }

    if (canh == 0) {
        printf("NO");
        return 0;
    }

    int win = 0;
    int k = 1;
    while (k <= 3) {
        int r, cao, r1, c1, r2, c2;
        switch (k) {
            case 1: r = a; cao = b; r1 = c; c1 = d; r2 = e; c2 = f; break;
            case 2: r = c; cao = d; r1 = a; c1 = b; r2 = e; c2 = f; break;
            case 3: r = e; cao = f; r1 = a; c1 = b; r2 = c; c2 = d; break;
        }

        int xoay = 1;
        while (xoay <= 2) {
            int ngang, doc;
            if (xoay == 1) { ngang = r; doc = cao; }
            else { ngang = cao; doc = r; }

            if (ngang == canh) {
                int con = canh - doc;
                if (r1 == con) if (r2 == con) if (c1 + c2 == canh) win = 1;
                if (r1 == con) if (c2 == con) if (c1 + r2 == canh) win = 1;
                if (c1 == con) if (r2 == con) if (r1 + c2 == canh) win = 1;
                if (c1 == con) if (c2 == con) if (r1 + r2 == canh) win = 1;
                if (r1 == canh) if (r2 == canh) if (doc + c1 + c2 == canh) win = 1;
                if (r1 == canh) if (c2 == canh) if (doc + c1 + r2 == canh) win = 1;
                if (c1 == canh) if (r2 == canh) if (doc + r1 + c2 == canh) win = 1;
                if (c1 == canh) if (c2 == canh) if (doc + r1 + r2 == canh) win = 1;
            }
            xoay++;
        }
        k++;
    }

    if (win == 1) printf("YES");
    else printf("NO");

    return 0;
}
