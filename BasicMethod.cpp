#include <stdio.h>

template <typename T> void swap(T &i1, T &i2) {
    int temp;
    temp = i1;
    i1 = i2;
    i2 = temp;
}

int main() {
    int n, a[101];
    scanf("%d", &n);
    for(int i = 1; i <= n; ++i) {
        a[i] = i;
    }
    for(int i = 1; i <= n; ++i) {
        printf("%d", a[i]);
    }
    printf(" ");
    int max = 1;
    for(int i = 1; i <= n; ++i) {
        max *= i;
    }
    for(int k = 2; k <= max; ++k) {
        int i = n - 1;
        while(a[i] > a[i+1]) {
            --i;
        }
        int j = n;
        while(a[i] > a[j]) {
            --j;
        }
        swap(a[i], a[j]);

        ++i;
        j = n;

        while(i < j) {
            swap(a[i], a[j]);
            ++i;
            --j;
        }
        for(int i = 1; i <= n; ++i) {
            printf("%d", a[i]);
        }
        printf(" ");
    }
    return 0;
}
