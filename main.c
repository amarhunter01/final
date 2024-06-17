#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHAR 100

int brute_force_search(int *, int, int);

int binary_search(int *, int, int);

float find_median(int *, int);

void sort_bubble(int *, int);

void sort_selection(int *, int);

void sort_insertion(int *, int);

void show_array(int *, int);

void sort_names(char (*)[MAX_CHAR], int);

int check(char *, char *);

void copy(char *, char *);

int main(){
    
    // //find with brute force and binary
    // int *arr, T, n, check;
    // printf("Enter n: ");
    // scanf("%d", &n);

    // arr = (int *) malloc(n*(sizeof(int)));
    // if(arr==NULL){
    //     printf("error");
    //     exit(1);
    // }

    // for(int i = 0; i<n; i++){
    //     printf("Elemenet [%d]:", i);
    //     scanf("%d", &arr[i]);
    // }

    // printf("Enter search number: ");
    // scanf("%d", &T);

    // check = brute_force_search(arr, n, T);
    // if(check < 0){
    //     printf("Not found\n");
    // } else{
    //     printf("Element found on %d\n", check);
    // }

    // check = binary_search(arr, n, T);
    // if(check < 0){
    //     printf("Not found\n");
    // } else{
    //     printf("Element found on %d\n", check);
    // }

    // free(arr);

    // int arr1[4] = {1, 1, 1, 1};
    // int arr2[4] = {2, 2, 2, 2};
    // int arr3[4] = {3, 3, 3, 3};

    // //const means that values cannot be changed using p1 but can with using arr1 
    // //*const means p1 cannot be changed to point to other location
    // const int *const p1 = arr1; 

    // //const means that values cannot be changed using p1 but can with using arr1 
    // //p2 can be changed to point to other location
    // const int * p2 = arr2;
    
    // //*const means p1 cannot be changed to point to other location
    // //p3 can be used to change the content of arr3
    // int *const p3 = arr3;

    // //sort and find median
    // int *arr, n;
    
    // printf("Enter n: ");
    // scanf("%d", &n);
    
    // arr = (int *) malloc(n*sizeof(int));
    // if(arr == NULL){
    //     printf("error");
    //     exit(1);
    // }

    // for(int i = 0; i < n; i++){
    //     printf("Enter element [%d]: ", i);
    //     scanf("%d", &arr[i]);
    // }

    // sort_bubble(arr, n);
    // sort_insertion(arr, n);
    // sort_selection(arr, n);

    // show_array(arr, n);

    // printf("Median is: %.2f", find_median(arr, n));

    // //sort names
    // int n;
    // printf("Enter n: ");
    // scanf("%d", &n);
    
    // char s[n][MAX_CHAR];

    // for(int i = 0; i<n; i++){
    //     printf("Enter name %d: ", i);
    //     scanf("%s", s[i]);
    // }
    // sort_names(s, n);
    
    // printf("+++++++++++++++++++\n");
    // for(int i = 0; i<n; i++){
    //     printf("%s\n", s[i]);
    // }
    // printf("+++++++++++++++++++\n");


    return 0;
}

void copy(char *s1, char *s2){
    for(int i = 0; s2[i] != '\0'; i++){
        s1[i] = s2[i];
        s1[i+1] = '\0';
    }
}

int check(char *s1, char *s2){
    int i = 0;
    while(s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0'){
        i++;
    }
    if(s1[i]>s2[i]){
        return 1;
    }else 
        return 0;
}

void sort_names(char (*s)[MAX_CHAR], int n){
    char temp[MAX_CHAR];

    for(int i = 0; i<n-1; i++){
        for(int j = i; j<n; j++){
            if( check(s[i], s[j]) ){
                copy(temp, s[i]);
                copy(s[i], s[j]);
                copy(s[j], temp);
            }
        }
    }
}

float find_median(int *arr, int n){
    float med;

    if(n%2 == 0){
        med = (float) (arr[n/2 - 1] + arr[n/2])/2;
        return med;
    } else {
        return arr[n/2];
    }

}

void sort_selection(int *arr, int n){
    int temp;
    for(int i = 0; i<n-1; i++){
        for(int j = i; j<n; j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void sort_insertion(int *arr, int n){
    int temp;
    for(int i = 0; i<n; i++){
        for(int j = i - 1; j>=0; j--){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void sort_bubble(int *arr, int n){
    int ind = 1;
    int temp;

    for(int i = 0; i<n-1 && ind == 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j]>arr[j+1]){
                ind = 1;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
};

int brute_force_search(int *arr, int n, int x){
    for(int i = 0; i<n; i++){
        if(arr[i]==x){
            return i;
        }
    }
    return -1;
}

int binary_search(int *arr, int n, int x){
    int i = 0, j = n-1;

    while(i<=j){
        int k = j + i/2;
        if(arr[k] == x){
            return k;
        } else if(arr[k]>x){
            j = k - 1;
        } else if(arr[k]<x){
            i = k + 1;
        }
    }
    return -1;
}

void show_array(int *a,int n){
    int i = 0;
    printf("Start of array\n");
    while (i<n) {
        printf("%d ", a[i]);
        i++;
    }
    printf("\nEnd of array\n");

}