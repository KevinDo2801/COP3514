#include <stdio.h>

int find_element(int a[], int n1, int b[], int n2, int c[]){
    int n = 0;
    for(int i=0; i<n1; i++){
        for(int j=0; j<n2;j++){
            if(a[i]==b[j]){
                c[n] = a[i];
                n++;
            }
        }
    }

    return n;
}

int main()
{
    int a[3] = {1,2,3};
    int b[4] = {3,2,6,7};
    int c[5] = {0};
    int n = find_element(a,3,b,4, c);
    for(int i=0; i<n; i++){
        printf("%d", c[i]);
    }

    return 0;
}
