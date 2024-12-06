//implementation of stack
#include<stdio.h>
#include<stdlib.h>
#define max 5
int stack[max];
int top=-1;
int isFull(){
    if(top==max-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isEmpty(){
    if(top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
void push(int data){
    if(isFull()){
        printf("Stack overflow");
        return;
    }
    top=top+1;
    stack[top]=data;
}
int pop(){
    if(isEmpty()){
        printf("Stack underflow");
        exit(1);
    }
    int value=stack[top];
    top=top-1;
    return value;
}
void display(){
    int i;
    if(top==-1){
        printf("Stack is empty");
    }
    for(i=top; i>=0; i--){
        printf("%d ", stack[i]);
        printf("\n");
    }
}
int main(){
    int choice, data;
    while(1){
        printf("1: PUSH 2:POP 3:DISPLAY 4:exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                    printf("Enter the data to push: ");
                    scanf("%d", &data);
                    push(data);
                    break;
            case 2:
                    data=pop();
                    printf("Deleted element: %d\n",data);
                    break;
            case 3:
                    printf("The stack elements are:\n");
                    display();
                    break;
            case 4:
                    exit(0);
            default: 
                printf("Invalid case");
                break;
        }
    }
    return 0;
}