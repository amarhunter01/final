#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHAR 100

struct drvo{ 
    int i; 
    struct drvo *left; 
    struct drvo *right;
};

typedef struct tree {
    int n;
    struct tree *l;
    struct tree *r;
} tree;

typedef struct Actor {
    char name[25];
    int started;
    int movies;
} Actor;

typedef struct List {
    char s[25];
    int n;
    struct List *next;
} List;

//global var
int *y = NULL, *z = NULL;

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

void find_art(int *, float *, int);

int * make_arrays(int *, int);

int is_decreasing(int);

void show_list(List *);

void remove_char_same(List *);

void add_len(List *);

void free_list(List *);

List * reverse_list(List *);

void enter_tree_level(tree *, int);

int weight(tree *);

int number_of_leaves(tree *);

int number_of_nodes_with_even_parents(tree *);

void inorder(tree *);

void preorder(tree *);

void postorder(tree *);

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

    // //arithmetic to other array with elements from first
    // int *arr1, n;
    // float *arr2;
    // printf("Enter n: ");
    // scanf("%d", &n);

    // arr1 = (int *) malloc(n*sizeof(int));
    // if(arr1==NULL){
    //     printf("error");
    //     exit(1);
    // }

    // printf("Enter array: ");
    // for(int i = 0; i<n; i++){
    //     scanf("%d", &arr1[i]);
    // }

    // arr2 = (float *) malloc((n*2 - 1)*sizeof(float));
    // if(arr2==NULL){
    //     printf("error");
    //     exit(1);
    // }

    // find_art(arr1, arr2, n);

    // free(arr1);
    // free(arr2);

    // //make 2 arrays from 3digit number one has numbers whos digits are increasing and other has decresing digits
    // int *x, n, *ns;
    // printf("Enter n: ");
    // scanf("%d", &n);

    // printf("Enter array: \n");

    // x = (int *) malloc(n*sizeof(int));
    // if(x==NULL){
    //     printf("error start");
    //     exit(1);
    // }

    // for(int i = 0; i<n; i++){
    //     scanf("%d", &x[i]);
    // }
        
    // ns = make_arrays(x, n);

    // show_array(y, ns[0]);
    // show_array(z, ns[1]);

    // free(x);
    // free(y);
    // free(z);
    // free(ns);

    // //count lowercase letters from file
    // FILE *f = fopen("text.txt", "r");
    // if(f == NULL){
    //     printf("erorr");
    //     exit(1);
    // }
    // char ch;
    // int count = 0;
    // while( (ch = fgetc(f)) != EOF){
    //     printf("%c", ch);
    //     if(ch>='a'&& ch <= 'z'){
    //         count++;
    //     }
    // }
    
    // printf("count: %d\n", count);
    // fclose(f);

    // //read line and print last name
    // FILE *f = fopen("workers.txt", "r");
    // if(f == NULL){
    //     printf("error");
    //     exit(1);
    // }

    // int n1 = 50;
    // int n2 = 20;
    // char line[n1];
    // char last_name[n2];

    // while(fgets(line, n1, f) != NULL){
    //     sscanf(line, "%*[^ ]%*c%[^ ]%*[^\n]", last_name);
    //     printf("%s\n", last_name);
    // }

    // fclose(f);

    // //print the largest line that has the input word
    // FILE *f = fopen("text2.txt", "r");
    // if(f == NULL){
    //     printf("error");
    //     exit(1);
    // }
    
    // int n = 80, j = 0, size = 0, line_max_size = 0;
    // char line[n];
    // char word[n];
    // char user_word[n];
    // char line_max[n];

    // printf("Enter string: ");
    // scanf("%s", user_word);

    // while(fgets(line, n, f) != NULL){
    //     j = 0;
    //     for(int i = 0; i<n; i++){
    //         if(line[i] == ' ' || line[i]=='\0' || line[i] == '\n'){
    //             j = 0;
    //             if(check(user_word, word) == 0){
    //                 size = 0;
    //                 while(line[size] != '\0'){
    //                     size++;
    //                 }
    //                 if(size > line_max_size){
    //                     line_max_size = size;
    //                 }
    //                 strcpy(line_max, line);
    //             }
    //             if(line[i]=='\0' || line[i]=='\n'){
    //                 break;
    //             }
    //         } else {
    //             word[j++] = line[i];
    //             word[j] = '\0'; 
    //         }
            
    //     }
    // }

    // if(line_max_size){
    //     printf("Max line: %s\n", line_max);
    // }else{
    //     printf("Not found");
    // }
    // fclose(f);

    // //write in new file names of actors that has avg more then 2 films per year
    // FILE *f = fopen("actors.txt", "r");
    // FILE *out = fopen("actorsout.txt", "w+");

    // if(f == NULL){
    //     printf("error");
    //     fclose(out);
    //     exit(1);
    // }

    // if(out == NULL){
    //     printf("error");
    //     fclose(f);
    //     exit(1);
    // }
    
    
    // int ind = 0, n2 = 30;
    // char line[30];
    // Actor *actor = (Actor *) malloc(sizeof(Actor));
    // if(actor == NULL){
    //     printf("error");
    //     fclose(out);
    //     fclose(f);
    //     exit(1);
    // }
    
    // //when using %[^ ] var specifier isnt allowed but %*p[^ ] can be used
    // while(fgets(line, n2, f) != NULL){
    //     sscanf(line, "%[^,]%*c%d,%d", actor -> name, &actor -> started, &actor -> movies);
    //     printf("%s %d\n", actor -> name, actor -> started);
    //     if( (float) actor->movies/(2024 - actor -> started) >= 2 ){
    //         ind = 1;
    //         fprintf(out, "%s,%d,%d\n", actor->name, actor -> started, actor -> movies);
    //     }
    // }

    // if(ind){
    //     while(fgets(line, n2, out) != NULL){
    //         printf("%s", line);
    //     }
    // } else{
    //     printf("Not found\n");
    // }

    // fclose(f);
    // fclose(out);
    // free(actor);

    // //function show list removes nodes that starts with the same char as head reverse list add length and free list
    // int n = 4;

    // List *head;
    // List *prev;
    // List *curr;

    // printf("Enter n: ");
    // scanf("%d%*c", &n);

    // if(n>0){   
    //     head = (List *) malloc(sizeof(List));
    //     if (head == NULL){
    //         printf("error");
    //         exit(1);
    //     }
    //     printf("Enter s for node 0: ");
    //     scanf("%[^\n]%*c", head -> s);
    //     prev = head;
    // }

    // for(int i = 1; i<n; i++){
    //     curr = (List *) malloc(sizeof(List));
    //     printf("Enter s for node %d: ", i);
    //     scanf("%[^\n]%*c", curr -> s);
    //     prev -> next = curr;
    //     prev = curr;
    // }

    // remove_char_same(head);
    // head = reverse_list(head);
    // add_len(head);
    // show_list(head);
    // free_list(head);

    // head = NULL;

    // //tree enter
    // tree *root = (tree *) malloc(sizeof(tree));
    // if(root == NULL){
    //     printf("error\n");
    //     exit(1);
    // }
    // printf("Enter n for node on level 1: ");
    // scanf("%d", &root->n);

    // int l;
    // printf("Is there left node on level 2 (enter '1' for YES and '0' for NO): ");
    // scanf("%d", &l);

    // if(l){
    //     root -> l = (tree *) malloc(sizeof(tree));
    //     if(root -> l == NULL){
    //         printf("error");
    //         exit(1);
    //     }
    //     printf("Enter n for left node on level 2: ");
    //     scanf("%d", &root->l -> n);
    // }

    // int r;
    // printf("Is there right node on level 2 (enter '1' for YES and '0' for NO): ");
    // scanf("%d", &r);

    // if(r){
    //     root -> r = (tree *) malloc(sizeof(tree));
    //     if(root -> r == NULL){
    //         printf("error");
    //         exit(1);
    //     }
    //     printf("Enter n for right node on level 2: ");
    //     scanf("%d", &root->r -> n);
    // }

    // enter_tree_level(root->l, 2);
    // enter_tree_level(root->r, 2);

    // //function for weight number of leaves and number of nodes whoes parents has even number
    
    // int weight_n;
    // weight_n = weight(root);

    // int number_of_nodes_with_even_parents_n = number_of_nodes_with_even_parents(root);

    // int number_of_leaves_n = number_of_leaves(root);

    // printf("weight_n: %d\nnumber_of_nodes_with_even_parents_n: %d\nnumbers_of_leaves_n: %d", weight_n, number_of_nodes_with_even_parents_n, number_of_leaves_n);


    // //code from labs
    // struct drvo *p=NULL, *q=NULL, *r=NULL, *t=NULL;
    // //1
    // p = (struct drvo *)malloc(sizeof(struct drvo));
    // if (p == NULL) exit(1);
    // p->i = 1;
    // p->left = NULL;
    // p->right = NULL;

    // //2
    // q = (struct drvo *)malloc(sizeof(struct drvo));
    // if (q == NULL) exit(1);
    // q->i = 2;
    // q->left = NULL;
    // q->right = NULL;
    // p->left = q;

    // //3
    // r = (struct drvo *)malloc(sizeof(struct drvo));
    // if (r == NULL) exit(1);
    // r->i = 3;
    // r->left = NULL;
    // r->right = NULL;
    // p->right = r;

    // t = q;

    // //4
    // q = (struct drvo *)malloc(sizeof(struct drvo));
    // if (q == NULL) exit(1);
    // q->i = 4;
    // q->left = NULL;
    // q->right = NULL;
    // t->left = q;

    // //5
    // q = (struct drvo *)malloc(sizeof(struct drvo));
    // if (q == NULL) exit(1);
    // q->i = 5;
    // q->left = NULL;
    // q->right = NULL;
    // t->right = q;

    // t = q;

    // //6
    // q = (struct drvo *)malloc(sizeof(struct drvo));
    // if (q == NULL) exit(1);
    // q->i = 6;
    // q->left = NULL;
    // q->right = NULL;
    // t->left = q;

    // //7
    // q = (struct drvo *)malloc(sizeof(struct drvo));
    // if (q == NULL) exit(1);
    // q->i = 7;
    // q->left = NULL;
    // q->right = NULL;
    // r->right = q;

    return 0;
}

int number_of_leaves(tree *root){
    if(root != NULL){
        if(root -> l == NULL && root -> r == NULL){
            return 1 + number_of_leaves(root -> l) + number_of_leaves(root -> r);
        } else {
            return number_of_leaves(root -> l) + number_of_leaves(root -> r);
        }
    } else 
        return 0;
}

int weight(tree *root){
    if(root != NULL){
        return 1 + weight(root->l) + weight(root->r);
    } else {
        return 0;
    }
}

int number_of_nodes_with_even_parents(tree *root){
    if(root != NULL){
        if(root -> n % 2 == 0){
            if(root -> l != NULL && root -> r != NULL){
                return 2 + number_of_nodes_with_even_parents(root -> l) + number_of_nodes_with_even_parents(root -> r);
            } else if(root -> l != NULL || root -> r != NULL){
                return 1 + number_of_nodes_with_even_parents(root -> l) + number_of_nodes_with_even_parents(root -> r);
            } else {
                return 0;
            }
        } else {
            return number_of_nodes_with_even_parents(root -> l) + number_of_nodes_with_even_parents(root -> r);
        }
    } else {
        return 0;
    }
}

void preorder(tree *root){
    if(root != NULL){
        printf("%d ", root -> n);
        preorder(root -> l);
        preorder(root -> r);

    }
}

void inorder(tree *root){
    if(root != NULL){
        inorder(root->l);
        printf("%d ", root -> n);
        inorder(root -> r);
    }
}

void postorder(tree *root){
    if(root != NULL){
        postorder(root->l);
        postorder(root -> r);
        printf("%d ", root -> n);
    }
}

void enter_tree_level(tree *root, int i){

    if(root != NULL){
        int l;
        printf("Is there left node on level %d (enter '1' for YES and '0' for NO): ", i+1);
        scanf("%d", &l);

        if(l){
            root -> l = (tree *) malloc(sizeof(tree));
            if(root -> l == NULL){
                printf("error");
                exit(1);
            }
            printf("Enter n for left node on level %d: ", i+1);
            scanf("%d", &root->l -> n);
        }

        int r;
        printf("Is there right node on level %d (enter '1' for YES and '0' for NO): ", i+1);
        scanf("%d", &r);

        if(r){
            root -> r = (tree *) malloc(sizeof(tree));
            if(root -> r == NULL){
                printf("error");
                exit(1);
            }
            printf("Enter n for right node on level %d: ", i+1);
            scanf("%d", &root->r -> n);
        }

        enter_tree_level(root->l, i+1);
        enter_tree_level(root->r, i+1);



    }
}

void free_list(List *head){
    List *next;
    
    while(head != NULL){
        next = head -> next;
        free(head);
        head = next;
    }
}

void add_len(List *head){
    List *next_rel = NULL, *new = NULL;

    int size, n, i;

    char temp;

    while(head != NULL){
        size = 0;
        next_rel = head -> next;
        
        while(head -> s[size] != '\0'){
            size++;
        }
        
        new = (List *) malloc(sizeof(List));
        
        if(new == NULL){
            printf("error");
            exit(1);
        }
        
        n = size;
        for(i = 0; n > 0 ; i++){
            new -> s[i] = n%10 + '0';
            n /= 10;
        }

        new -> s[i] = '\0';
        i--;
        for(int j = 0; i>j; i--, j++){
            temp = new -> s[i];
            new -> s[i] = new -> s[j];
            new -> s[j] = temp;
        }
        new -> n = -1;

        new -> next = next_rel;
        head -> next = new;

        head = head -> next -> next;
    }
}

List * reverse_list(List *head){
    List *curr = head, *prev = NULL, *next = head->next;

    while(next != NULL){
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
} 

void remove_char_same(List *head){
    char ch = head -> s[0];
    List *next = NULL;

    while(head -> next != NULL){
        if(head -> next -> s[0] == ch){
            next = head -> next;
            head -> next = head -> next -> next;
            free(next);
        } else{
            head = head -> next;
        }
    }

}

void show_list(List *head){
    while(head!=NULL){
        printf("%s\n", head -> s);
        head = head -> next;
    }
}

int is_decreasing(int n){
    int x = n;
    int prev = x%10;
    int ind = 1;
    x /= 10;
    while(x>0 && ind == 1){
        ind = 0;
        if(prev < x%10){
            ind = 1;
            prev = x%10;
            x/=10;
            
        } 
    }
    if(ind == 1){
        return 1;
    }

    x = n;
    prev = x%10;
    ind = 1;
    x /= 10;
    while(x>0 && ind == 1){
        ind = 0;
        if(prev > x%10){
            ind = 1;
            prev = x%10;
            x/=10;
            
        } 
    }
    if(ind == 1){
        return 0;
    }

    return -1;

}

int * make_arrays(int *x, int n){
    int j = 1, k = 1, check, *sizes;

    for(int i = 0; i<n; i++){
        check = is_decreasing(x[i]);
        if(check == 1){
            y = realloc(y, j*sizeof(int));
            if(y == NULL){
                printf("error 1");
                exit(1);
            }
            y[j-1] = x[i];
            j++;
        } else if(check == 0){
            z = realloc(z, k*sizeof(int));
            if(z == NULL){
                printf("error 2");
                exit(1);
            }
            z[k-1] = x[i];
            k++;
        }
    }

    sizes = (int *) malloc(2*sizeof(int));
    if(sizes == NULL){
        printf("error 3");
        exit(1);
    }

    sizes[0] = j-1;
    sizes[1] = k-1;

    return sizes;

}

void find_art(int *arr1, float *arr2, int n){
    for(int i = 0; i<n; i++){
        if(i==0 || i+1 == n){
            arr2[i*2] = arr1[i];
        } else{
            arr2[i*2-1] = (float) (arr1[i] + arr1[i-1])/2;
            arr2[i*2] = arr1[i];
            arr2[i*2+1] = (float) (arr1[i] + arr1[i+1])/2;
        }

    }    

    printf("+++++++++++++++++++++\n");
    for(int i = 0; i<2*n-1; i++){
        printf("%.2f ", arr2[i]);
    }
    printf("\n+++++++++++++++++++++\n");


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
    }else if(s1[i]==s2[i]){
        return 0;
    }else{
        return -1;
    }
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