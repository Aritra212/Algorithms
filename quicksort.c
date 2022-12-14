#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

void Quicksort(int[],int,int);
int Partition(int[],int,int);
void DisplayArr(int[],int);

int main(){
    char ch;
    int  arr[15],s;
    while(1){
        printf("\n----------------------------------------\n");
        printf("\nPress '0' to exit");
        printf("\nPress '1' to Create an array");
        printf("\nPress '2' to Display array");
        printf("\nPress '3' to apply Selection Sort algorithm");
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
            case '3': Quicksort(arr,0,s-1);
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

void Quicksort(int arr[],int lb, int ub){
    int loc;
    if(lb<ub){
        loc=Partition(arr,lb,ub);
        Quicksort(arr,lb,loc-1);
        Quicksort(arr,loc+1,ub);
    }
    printf("\nQuicksort applied sucessfully press '2' to display the array");
}
int Partition(int arr[],int lb,int ub){
    int start=lb, end=ub, pivot= arr[lb],temp;
    while(start<end){
        while(arr[start]<=pivot){
            start++;
        }
        while(arr[end]>pivot){
            end--;
        }
        if(start<end){
            temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
        }
    }
    if(end<start){
        arr[lb]=arr[end];
        arr[end]=pivot;
    }
    return end;
}