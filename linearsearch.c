// Linear search algorithm

#include<stdio.h>
#include<stdlib.h>

int CreateArr();
void DisplayArr(int);

int LinearArr(int);
void Display(int, int);

int arr[30];

int main(){
    int n, p, s;
    while(1){
        printf("\n------------------------------------\n");
        printf("\nEnter '1' to search elements using array.");
        //printf("\nEnter '2' to search elements using linked list.");
        printf("\nEnter '0' to exit.");
        printf("\nEnter '6' to create new array");
        printf("\nEnter '7' to Display Array elements.");
        printf("\nEnter your choice:: ");
        scanf("%d",&n);

        if(n!=0 && arr[0]==0 || n==6){
            s= CreateArr();
        }
        
        switch(n){
            case 1: p= LinearArr(s); Display(p,s);
            break;
            case 7: DisplayArr(s);
            break;
            case 0: exit(0);
            default: printf("\nInvalid Choice!!");
        }
    }
}

int CreateArr(){
    int n,i;
    printf("\nEnter Size of the array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\nEnter value of arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    return n;
}

void DisplayArr(int s){
    int i;
    printf("\nThe array element(s) is(are): ");
    for(i=0;i<s;i++){
        printf("%d ",arr[i]);
    }
}

int LinearArr(int s){
    int i,d, c;
    printf("\nEnter Data which you want to search: ");
    scanf("%d",&d);
    for(i=0;i<s;i++){
        if(arr[i]==d){
            d=i;
            c=1;
            break;
        }
    }
    if(c==1){
        return d;
    }
    else{
        return s+1;
    }
}

void Display(int p, int s){
    if(p==s+1){
        printf("\nElement Not Found!!");
    }
    else{
        printf("\nElemetn Found at Position: arr[%d]",p);
    }
}
