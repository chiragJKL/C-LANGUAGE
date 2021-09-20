#include <stdio.h>
void display();
// void function is like "*" and footnote in books!
// afetr void function PUT ";", but it wont at the end when used
// we can use any name after void. [ex. void chirag()]
//void function will pause "main()" and start void() hence can be used in long programmes and break it and work

int main()
// "int" jaisi value return karta hai thats why we write at the end "return 0"
{

    int a;
    printf("(1) this will be 1st\n");

    display(); //here PUT ";"
    printf("(2) this will run 3rd\n");

    return 0;
}

void display() //here DONT write ";"
{
    printf("(3) this will run 2nd\n");
}