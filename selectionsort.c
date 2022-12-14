#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

void Selection(int[],int);
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
            case '3': Selection(arr,s);
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

// void Selection(int arr[], int p, int min, int n){
//     int temp,i;
//     for(i=p+1;i<=n;i++){
//         if(arr[i]<arr[min]){
//             min=i;
//         }
//     }
//     if(min!=p){
//         temp=arr[p];
//         arr[p]=arr[min];
//         arr[min]=temp;
//     }
//     if(p<n){
//         p++;
//         Selection(arr,p,min,n);
//     }
//     else{
//         printf("\n********* Affter Sorting **********");
//         DisplayArr(arr,n+1);
//     }
// }

void Selection(int arr[], int n){
    int temp, i,j,min;
    for(i=0;i<n-1;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        if(min!=i){
            temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
    }
    printf("\n********* Affter Sorting **********");
    DisplayArr(arr,n);
}