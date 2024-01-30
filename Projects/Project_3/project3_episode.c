// Kiet Tuan Do
// 01/29/2024
/*this program for entering the number of episodes 
and the episodes watched and then print out the missing episode*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of episodes: ");
    scanf("%d", &n);
    int episodes[n];
    for (int i = 0; i < n; i++)
    {
        episodes[i] = 0;
    }
    printf("Enter episodes watched: ");
    int e;
    for(int i = 0; i < n-1; i++){
        scanf("%d", &e);
        episodes[e - 1] = 1;
    }

    for (int i = 0; i < n; i++)
    {
        if (episodes[i] == 0)
        {
            printf("Missing episode: %d", i + 1);
        }
    }

    return 0;
}