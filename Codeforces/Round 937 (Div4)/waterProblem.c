#include <stdio.h>
#include <math.h>

//ask for n
//make array
//traverse through array untill and unless we find a number greater than or equal to specific ith element
//update index and quantity


int compute(int arr[],int i,int j,int num){
    int sub_quantity=0;
    for(i;i<j;i++){
        sub_quantity+=(num-arr[i]);
    }
    return sub_quantity;
}

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the sequence - ");
    for(int k=0;k<n;k++){
        scanf("%d",&arr[k]);
    }

    int total_quantity=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if (arr[j]>=arr[i]){
                total_quantity+=(compute(arr,i,j,arr[i]));
                i=j-1;
                break;
            }
        }
    }
    printf("\nResult is : %d",total_quantity);
    return 0;
}