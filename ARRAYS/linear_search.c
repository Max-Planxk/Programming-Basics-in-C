#include <stdio.h>
int main (){
    int i,n;
    printf("ENTER THE SIZE OF THE ARRAY: \n");
    scanf("%d", &n);

    int arr[n];
    printf("ENTER THE ELEMENTS OF THE ARRAY:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    //linear search;
    int key;
    printf("ENTER THE ELEMENT TO SEARCH:\n");
     scanf("%d", &key);

    int found = 0;
   
    for(i=0;i<n;i++){
    if(arr[i]==key){
        printf("ELEMENT FOUND AT INDEX: \t %d", i);
        found =1;
        break;
    }
    }
    if(arr[i]!=key)
    printf("!!!!  ELEMENT NOT FOUND !!!! \n");

    return 0;
}