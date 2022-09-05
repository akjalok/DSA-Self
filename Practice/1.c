// #include <stdio.h>
// #include <stdlib.h>
// struct Node{
//     int data;
//     struct Node* next;
// };
//     int k,n;
//     struct Node *p,*head;
// void createList(){

//     printf("Number of nodes:");
//     scanf("%d",&n);
//     for(int k=0;k<n;k++){
//         if(k==0){
//             head=(struct Node*)malloc(sizeof(struct Node));
//             p=head;
//         }
//         else{
//             p->next = (struct Node*)malloc(sizeof(struct Node));
//             p=p->next;
//         }
//         scanf("%d",&p->data);
//     }
//     p->next=NULL;
// }
// void Display(){
//     int count =1;
//     if(head==NULL){
//         printf("\nEmpty List:");
//     }
//     else{
//         p=head;
//         while(p!=NULL){
//             printf("\nNode:%d:%d",count,p->data);
//             count++;
//             p=p->next;
//         }
//         printf("\n");
//     }
// }
// int main(){
//     createList();
//     Display();
//     return 0;
// }
#include <stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
void CreateLsit(){
    int n;
    printf("Enter the number of nodes:");
    scanf(""%d);
    
;
}