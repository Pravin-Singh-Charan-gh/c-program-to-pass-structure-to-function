#include <stdio.h>
struct student{
 char name[25];
 int age;
};
void print(struct student st[],int n){
 printf("\n\n");
 for(int i=0;i<n;i++){
  printf("Student %d:-\n",i+1);
  printf("Name : %s\n",st[i].name);
  printf("Age : %d\n\n",st[i].age);
 }
}
int main(){
  const int n=5;
  struct student st[n];
  for(int i=0;i<n;i++){
   printf("Enter details of student %d\n",i+1);
   printf("Enter name:");
   scanf("%24s",st[i].name);
   printf("Enter age : ");
   scanf("%d",&st[i].age);
   printf("\n");
   fflush(stdin);
  }
  print(st,n);
  return 0;
}
