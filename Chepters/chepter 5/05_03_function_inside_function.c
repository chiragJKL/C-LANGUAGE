#include <stdio.h>

void morning();
void afternoon();
void night();

int main()

{

    morning(); //here main() only calls for morning() but after in void, morning calls for afternoon

    return 0;
}

void morning()
{
    printf("good morning\n");
    afternoon(); // first void calls second void
}

void afternoon()
{
    printf("good afternoon\n");
    night(); // second void calls third void
}

void night()
{
    printf("good night\n");
}