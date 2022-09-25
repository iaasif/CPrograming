#include<stdio.h>
int main(){

    double salary, incrementedSalary,incrementedRate;



    scanf("%lf",&salary);
    incrementedSalary = salary + (incrementedRate/100);
    if(salary>0 && salary<=400){
        incrementedRate=15;
       // printf("%.2lf",incrementedSalary);
    }
    else if(salary>400 && salary<=700){
            incrementedRate=12;
        //printf("%.2lf",incrementedSalary);

    }
    else if(salary>700 && salary<=1200){
            incrementedRate=10;
        //printf("%.2lf",incrementedSalary);

    }
    else if(salary>1200){
            incrementedRate=8;
        //printf("%.2lf",incrementedSalary);

    }
    else{
        printf("you entered a negative value\n");

    }
    incrementedSalary =  salary * (incrementedRate/100);
    printf("%.2lf",incrementedSalary);

return 0;



return 0;
}
