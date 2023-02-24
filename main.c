#include <stdio.h>

struct Wand
{
    char core[50];
    int length;
    char wood[50];
};

void DescribeWand(struct Wand w) {
    printf("This wand is made of %s wood, %s core %d inches\n", w.wood, w.core, w.length);
}

int main() {
    struct Wand hp = { "Phoenix Feather", 11, "Holly" };
    DescribeWand(hp);
}