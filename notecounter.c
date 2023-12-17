#include<stdio.h>
int main()
{
    int  a[9];
    int n;
    char ch='y';
    while(ch=='y'||ch=='Y'){
   for(int i=0; i<9;i++) 
   a[i]=0;
    printf("Enter a amount ::: Rs ");
    scanf("%d",&n);
    while(n>0)
    {
    if(n>=500){
    n-=500;
    a[0]++;}
    else if(n>=200) {
    n-=200;
    a[1]++;}
    else if(n>=100) {
    n-=100;
    a[2]++;}
    else if(n>=50) {
    n-=50;
    a[3]++;}
    else if(n>=20) {
    n-=20;
    a[4]++;}
    else if(n>=10) {
    n-=10;
    a[5]++;}
    else if(n>=5) {
    n-=5;
    a[6]++;}
    else if(n>=2){
    n-=2;
    a[7]++;}
    else if(n>=1){
    n-=1;
    a[8]++;}
    }
 printf("\nThe count of notes required are :\nRs 500= %d\tRs 200= %d\tRs 100= %d\nRs 50= %d\tRs 20= %d\tRs 10= %d\nRs 5= %d\t\tRs 2= %d\t\tRs 1= %d\n",a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8]);
 printf("\nDo you want to recount?(y/n)");
 scanf(" %c", &ch);
    }
    if (ch=='n'||ch=='N')
    {
        printf("^_^ Nice to help you ^_^\nSee you anytime");
    }
return 0;
}