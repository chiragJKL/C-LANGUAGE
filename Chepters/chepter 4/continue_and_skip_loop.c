#include <stdio.h>
int main()

{
    int i = 0, skip = 5;

    // skip name is litarally but it will skip in the loop and will fatch single output from the loop

    while (i < 10)
    {
        i++;

        if (i != skip)
            continue;
        // "continue" option skips perculer iteration from the loop

        else
            printf("%d", i);
    }

    return 0;
}