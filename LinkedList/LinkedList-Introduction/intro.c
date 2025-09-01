#include <stdio.h>
#include <stdlib.h>

// Define Node structure
struct Node {
    int data;
    struct Node* next;
};

int main() {
    int arr[] = {3, 5, 8, 7};

    // Allocate memory for first node
    struct Node* y = (struct Node*)malloc(sizeof(struct Node));
    y->data = arr[0];
    y->next = NULL;

    printf("%p\n", (void*)y);     // prints address
    printf("%d\n", y->data);      // prints 2

    // Free allocated memory
    free(y);

    return 0;
}
