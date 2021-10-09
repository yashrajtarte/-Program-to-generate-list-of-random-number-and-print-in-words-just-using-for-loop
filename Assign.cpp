// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int t;
    printf("Enter the number of test cases: ");
    scanf("%d",&t);
    while(t--){
            int n;
         printf("Enter the Number: ");
        scanf("%d",&n);
        int rem,rev=0;
        while(n>0){
             rem=n%10;            //124--------->421
            rev=rev*10+rem;
            n/=10;
        }
    
        int num;
        while(rev>0){
        num=rev%10;
            if(num==1){
                printf("one ");
            }
            else if(num==2){
                printf("two ");
            }
            else if(num==3){
                printf("three ");
            }
            else if(num==4){
                printf("four ");
            }
            else if(num==5){
                printf("five ");
            }
            else if(num==6){
                printf("six ");
            }
            else if(num==7){
                printf("seven ");
            }
            else if(num==8){
                printf("eight ");
            }
            else if(num==9){
                printf("nine ");
            }
            else if(num==0){
                printf("zero ");
            }
            rev/=10;
        } 
        printf("\n\n");
    }
    return 0;
}