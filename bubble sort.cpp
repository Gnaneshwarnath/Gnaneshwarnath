#include <stdio.h>
int main(){
    int arr[50], n, i, j, temp;    
    printf("Please Enter the Number of Elements you want in the array: ");
    scanf("%d",&n);    
    printf("Please Enter the Value of Elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++){       
        for(j=i+1;j<n;j++){          
            if(arr[i]>arr[j]){               
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("Array after implementing bubble sort: ");
    for(i=0;i<n;i++){
        printf("\n%d",arr[i]);
    }
}
