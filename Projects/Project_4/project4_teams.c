// Kiet Tuan Do
// 02/14/2024
/* this program for entering the number of students
and the points of each student and then
the points of each student will be assigned to the team*/

#include <stdio.h>
#include <stdlib.h>

#define BEGINNER 25
#define HONOR 70
#define EXCELLENCE 125

// this function will assign student to the team
void assign(int *points, int *team_assignment,  int n);

// this function will print out the team and the student in that team
void output(int team_assignments[], int n){
    int beginnerExists = 0;
    int honorExists = 0;
    int excellenceExists = 0;
    // check if there is any student in the team
    for (int i = 0; i < n; i++) {
        if (team_assignments[i] == BEGINNER) {
            beginnerExists = 1;
            continue;
        } else if(team_assignments[i] == HONOR) {
            honorExists = 1;
            continue;
        } else if(team_assignments[i] == EXCELLENCE) {
            excellenceExists = 1;
            continue;
        }
    }

    if (beginnerExists) {
        printf("Beginner team: student");
            for (int i = 0; i < n; i++)
            {
                if (team_assignments[i] == BEGINNER)
                {
                    printf(" %d", i + 1);
                }
            }
    }

    if(honorExists) {
        printf("\nHonor team: student");
            for (int i = 0; i < n; i++)
            {
                if (team_assignments[i] == HONOR)
                {
                    printf(" %d", i + 1);
                }
            }
    }

    if(excellenceExists) {
        printf("\nExcellence team: student");
            for (int i = 0; i < n; i++)
            {
                if (team_assignments[i] == EXCELLENCE)
                {
                    printf(" %d", i + 1);
                }
            }
    }
}

int main()
{
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    int points[n];
    printf("Enter points for each student: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &points[i]);
    }
    int team_assignments[n];
    assign(points, team_assignments, n);

    output(team_assignments, n);

    return 0;
}

void assign(int *points, int *team_assignment,  int n){
    for (int i = 0; i < n; i++) {
        int diff_beginner = abs(*(points + i) - BEGINNER);
        int diff_honor = abs(*(points + i) - HONOR);
        int diff_excellence = abs(*(points + i) - EXCELLENCE);

        if (diff_beginner <= diff_honor && diff_beginner <= diff_excellence) {
            *(team_assignment + i) = BEGINNER;
        } else if (diff_honor <= diff_beginner && diff_honor <= diff_excellence) {
            *(team_assignment + i) = HONOR;
        } else {
            *(team_assignment + i) = EXCELLENCE;
        }
    }
}