#include<stdio.h>

int main(){
    int n, rev = 0, rem;
    printf("Enter a number : ");
    scanf("%d", &n);
    while(n!=0){
        rem = n%10;
        rev = rev*10+rem;
        n = n/10;
    }

    if (rev == n)
        printf("\nNumber is Palindrome");
    else
        printf("\nNumber is not Palindrome");
    return 0;
}