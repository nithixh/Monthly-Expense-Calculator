#include <stdio.h>
int main(){
    int a[31][3],i,j,n,s=0;
    float avg;
    char m[5];
    printf("Welcome to the Monthly Expense Calculator!\nThis program will help you track your daily expenses for a specific month.\n");
    printf("Enter the month name [First 3 letters]: ");
    scanf("%s",m);
    printf("Enter the number of days you have spent money: ");
    scanf("%d",&n);
    if(n>0 && n<=31){
        for(i=0;i<n;i++){
            for(j=0;j<2;j++){
                if(j==0){
                    printf("Enter the date: ");
                    scanf("%d",&a[i][j]);
                    if(a[i][j]<0 || a[i][j]>31){
                        printf("Invalid date.\nPlease enter a date in the range 1-31.\nThank You!\n");
                        return 0;
                    }
                }else{
                    printf("Enter the expense: ");
                    scanf("%d",&a[i][j]);
                    if(a[i][j]<0){
                        printf("Invalid expense value.\nThank You!\n");
                        return 0;
                    }
                }
            }
        } 
        printf("Here is the information on the expenses made:\n");
        for(i=0;i<n;i++){
            s=s+a[i][1];
            printf("Expense on Day %d : %d/%s - Rs.%d\n",i+1,a[i][0],m,a[i][1]);
        }
        printf("Total Expense : Rs.%d\n",s);
        avg=s/n;
        printf("Average Expense per Day : Rs.%.2f\n",avg);
    }else{
        printf("Invalid number of days.\nPlease enter a number of days between 1 and 31.\nThank You!\n");
        return 0;
    }
}
