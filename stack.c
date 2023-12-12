#include <stdio.h>
// Global variables
    
int top = -1,n,x;
int stack[100];

// Function prototypes
void push();
void pop();
void display();

int main() {
    printf("Enter size of stack: ");
    scanf("%d", &n);

// push elements based on user input
for (int i = 0; i < n; i++) {
    printf("Enter data to push: ");
    scanf("%d", &x);
    push(x);
}

    // Display the stack
    display();

    // Pop an element
    pop();

    // Display the stack after pop
    display();

//     top++;
// printf("%d", stack[top]);

    return 0;
}

void push(int x) {
    if (top >= n-1) {
        printf("stack is Full\n");
    } else {
        top++;
        stack[top] = x;
        printf("Data pushed: %d\n", x);
    }
}

void pop() {
    int popped;
    if (top <= -1) {
        printf("stack is Empty\n");

    } else {
        // popped = stack[top];
        top--;
        // printf("Element popped: %d\n", popped);
        
    }
}

void display() {
    if (top >= 0) {
        printf("stack elements are: ");
        for (int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    } else {
        printf("stack is Empty\n");
    }
}