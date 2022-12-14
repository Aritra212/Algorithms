// Binary search algorithm
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

int CreateArr(int);
void DisplayArr(int);

void BinaryArr(int,int,int);
void Display(int);
int arr[15];
int main(){
    char ch;
    int  s, d;
    while(1){
        printf("\n----------------------------------------\n");
        printf("\nPress '0' to exit");
        printf("\nPress '1' to Create an array");
        printf("\nPress '2' to Display array");
        printf("\nPress '3' to search elements using Binary search algorithm");
        printf("\nPress your choice: ");
        ch= getche();

        switch(ch){
            case '1': 
                printf("\nEnter size of array: ");
                scanf("%d",&s);
                CreateArr(s);
            break;
            case '2': DisplayArr(s);
            break;
            case '3': 
                printf("\nEnter value to search: ");
                scanf("%d",&d);
                BinaryArr(0, s-1, d);
            break;
            case '0': exit(0);
            default: printf("\nInvalid Choice");
        }
    }
}
int CreateArr(int s){
    int i;
    for(i=0;i<s;i++){
        printf("\nEnter element for arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    //return &arr;
}

void DisplayArr(int s){
    int i;
    printf("\nThe Array contains: ");
    for(i=0;i<s;i++){
        printf("%d ",arr[i]);
    }
}
void BinaryArr(int lb, int ub, int d){
    int mid;
    mid= (lb+ub)/2;
    if(arr[mid]== d){
        Display(mid);
    }
    else if(lb<ub){
        if(arr[mid]<d){
            printf("\n%d",mid+1);
            BinaryArr(mid+1,ub,d);
        }
        else{
            printf("\n%d",mid-1);
            BinaryArr(lb,mid-1,d);
        }
    }
    else{
        Display(-1);
    }
}
void Display(int p){
    if(p==-1){
        printf("\nElement not found");
    }
    else{
        printf("\n%d found at position arr[%d].",arr[p],p);
    }
}