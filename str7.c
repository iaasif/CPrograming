
#include <stdio.h>

int main() {
    int i , j , n;
    n=5;

    for(i=1;i<=n;i++){
        for(j=1;j<=5;j++){
           if(j<=n+1-i) printf("*");
           else printf(" ");
        }
        printf("\n");
    }

}

//*****
//****
//***
//**
//*
