#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

void BubbleSort(int[],int,int);
void DisplayArr(int[],int);

int main(){
    char ch;
    int  arr[15],s;
    while(1){
        printf("\n----------------------------------------\n");
        printf("\nPress '0' to exit");
        printf("\nPress '1' to Create an array");
        printf("\nPress '2' to Display array");
        printf("\nPress '3' to apply Bubble Sort algorithm");
        printf("\nPress your choice: ");
        ch= getche();

        switch(ch){
            case '1':
                printf("\nEnter Size of Array: ");
                scanf("%d",&s);
                for(int i=0;i<s;i++){
                    printf("\nEnter value for arr[%d]: ",i);
                    scanf("%d",&arr[i]);
                }
            break;
            case '2': DisplayArr(arr,s);
            break;
            case '3': BubbleSort(arr,0,s-1);
            break;
            case '0': exit(0);
            default: printf("\nInvalid Choice");
        }
    }
}

void DisplayArr(int arr[], int s){
    printf("\nArray Elements: ");
    for(int i=0;i<s;i++){
        printf("%d ",arr[i]);
    }
}

void BubbleSort(int arr[], int p, int n){
    int temp;
    for(int i=0;i<n-p;i++){
        if(arr[i]>arr[i+1]){
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    if(p<n){
        p++;
        BubbleSort(arr,p,n);
    }
    else{
        printf("\n********* Affter Sorting **********");
        DisplayArr(arr,n+1);
    }
}