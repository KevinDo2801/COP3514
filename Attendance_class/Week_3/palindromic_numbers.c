#include <stdio.h>

int main()
{
    int i = 0;
    int count = 0;
    while (1)
    {
        int reverse = 0, n = i;
        while (n != 0)
        {
            reverse = reverse * 10 + n % 10;
            n /= 10;
        }

        if (reverse == i){
            count++;
            if (count == 50)
                break;
            printf("%d\n", i);
        }
        i++;
    }

    return 0;
}