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
    int g = 3;
    switch(g){
        case 4: printf("ex");
        case 3: printf("good"); 
        case 2: printf("poor"); 
        case 1: printf("failing"); 
        case 0: printf("dad");
        default: printf("asefacts");
    }

    return 0;
}
