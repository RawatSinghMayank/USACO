 #include <stdio.h>
int main(){
    printf("enter no of elements in first array");
    int n1;
    scanf("%d",&n1);
    int a[n1];
    printf("enter the elements ");
    for(int i=0;i<n1;i++){
        scanf("%d",&a[i]);
    }
printf("enter no of elements in second array");
int n2;
scanf("%d",&n2);
int b[n2];
printf("enter the elements");
for(int i=0;i<n2;i++){
    scanf("%d",&b[i]);}
    int max,min;
    
    if(n1>n2){
    max=n1;
    min=n2;}
    else { min=n1;
    max=n2;}
    int c[max];
    for(int i=0;i<min;i++){
c[i]=a[i]+b[i];
    }
    if(n1>n2){
    for(int i=min;i<max;i++){
        c[i]=a[i];}
    }
    else { for(int i=min;i<max;i++){
        c[i]=b[i];}}
        for(int i=0;i<max;i++){
            printf("%d  ",c[i]);
        }
}