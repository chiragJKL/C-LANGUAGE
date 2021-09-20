#include <stdio.h>
int main()

{
    int students = 2;
    int subjects = 5;

    int marks[2][5]; //[2] is column, [5] is row

    for (int i = 0; i < students; i++)
    {
        for (int j = 0; j < subjects; j++) //2 dimentional array so 2 dim for loop
        {
            printf("enter marks of student %d in subject %d = ", i + 1, j + 1);
            //(i+1) & (j+1) for looping numbers
            scanf("%d", &marks[i][j]);
            //marks[i][j] for scanning it.
        }
    }

    //"for loop" given below is for printing and see the loop

    for (int i = 0; i < students; i++)
    {
        for (int j = 0; j < subjects; j++)
        {
            printf("\n enter marks of student %d in subject %d = %d\n", i + 1, j + 1, marks[i][j]);
        }
    }

    return 0;
}