#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node* link;
} Node;

int main(){
    struct Node* A;
    A = NULL;
    struct Node*temp = (struct Node*)malloc(sizeof(struct Node));
    temp ->data = 2;
    (*temp).link = NULL;
    A = temp;
    return 0;
}
