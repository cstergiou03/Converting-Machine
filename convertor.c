#include <stdio.h>

void weight();
void height();
void lenght();

int main(){

  int option;
  int q;

  printf("Converting Machine");
  sleep(1);
  system("cls");
  do{
   sleep(1);
   do{
   system("cls");
   printf("1.Weight\n");
   printf("2.Height\n");
   printf("3.Lenght\n");
   printf("What do you want to convert: ");
   scanf("%d", &option);
   if (option<1 || option>3){
     system("cls");
     printf("Wrong number.Give a number between 1-3");
     sleep(1);
    }
   }while(option<1 || option>3);

   if (option==1){
     system("cls");
     weight();
   }else if (option==2){
     system("cls");
     height();
   }else {
     system("cls");
     length();
   }
   do{
    printf("Do you want to convert something else?(Yes->1/No->0): ");
    scanf("%d", &q);
    if (q<0 || q>1){
       system("cls");
       printf("\nWrong number.Give a number between 0-1\n");
       sleep(1);
       system("cls");
    }
  }while (q<0 || q>1);
  system("cls");
}while (q==1);
printf("Have a nice day!");

   return 0;
}

void weight(){

  float number, solution;
  int option;
  int q;

do{
  do{
   printf("1.Kilos-->Libres\n");
   printf("2.Libres-->Kilos\n");
   printf("Do you want to convert(1/2): ");
   scanf("%d", &option);
   if (option<1 || option>2){
     system("cls");
     printf("Wrong number.Give a number between 1-2\n");
     sleep(1);
     system("cls");
   }
  }while(option<1 || option>2);
  system("cls");
  if (option==1){
    do{
     printf("Give kilos: ");
     scanf("%f", &number);
     if (number<0){
        system("cls");
        printf("Wrong number.Give a number positive number\n");
        sleep(1);
        system("cls");
     }
    }while(number<0);
    solution=number*2.2046226218;
    printf("It's %.10f libres", solution);
  }else {
     do{
       printf("Give libres: ");
       scanf("%f", &number);
     if (number<0){
        system("cls");
        printf("Wrong number.Give a number positive number\n");
        sleep(1);
        system("cls");
     }
    }while(number<0);
    solution=number/2.2046226218;
    printf("It's %.10f kilos", solution);
  }
  sleep(3);
  system("cls");
  do{
    printf("Return to menu?(Yes->1/No->0): ");
    scanf("%d", &q);
    if (q<0 || q>1){
       system("cls");
       printf("\nWrong number.Give a number between 0-1\n");
       sleep(1);
       system("cls");
    }
  }while (q<0 || q>1);
  system("cls");
 }while (q==0);
}


void height(){

  float number, solution;
  int option;
  int q;
do{
  do{
   printf("1.Centimeters-->Feet\n");
   printf("2.Feet-->Centimeters\n");
   printf("Do you want to convert(1/2): ");
   scanf("%d", &option);
   if (option<1 || option>2){
      system("cls");
      printf("Wrong number.Give a number between 1-2\n");
      sleep(1);
      system("cls");
   }
  }while(option<1 || option>2);
  system("cls");
  if (option==1){
    do{
    printf("Give centimeters: ");
    scanf("%f", &number);
    if (number<0){
       system("cls");
       printf("Wrong number.Give a number positive number\n");
       sleep(1);
       system("cls");
     }
    }while(number<0);
    solution=number*0.032808399;
    printf("It's %.10f feet", solution);
  }else {
    do{
     printf("Give inches: ");
     scanf("%f", &number);
     if (number<0){
        system("cls");
        printf("Wrong number.Give a number positive number\n");
        sleep(1);
        system("cls");
     }
    }while(number<0);
    solution=number/0.032808399;
    printf("It's %.10f feet", solution);
  }
  sleep(3);
  system("cls");
  do{
    printf("Return to menu?(Yes->1/No->0): ");
    scanf("%d", &q);
    if (q<0 || q>1){
       system("cls");
       printf("\nWrong number.Give a number between 0-1\n");
       sleep(1);
       system("cls");
    }
  }while (q<0 || q>1);
  system("cls");
 }while (q==0);
}


void length(){

  float number, solution;
  int option;
  int q;
do{
  do{
   printf("1.Meters-->Yards\n");
   printf("2.Yards-->Meters\n");
   printf("Do you want to convert(1/2): ");
   scanf("%d", &option);
   if (option<1 || option>2){
      system("cls");
      printf("Wrong number.Give a number between 1-2\n");
      sleep(1);
      system("cls");
   }
  }while(option<1 || option>2);
  system("cls");
  if (option==1){
    do{
     printf("Give meters: ");
     scanf("%f", &number);
     if (number<0){
        system("cls");
        printf("Wrong number.Give a number positive number\n");
        sleep(1);
        system("cls");
     }
    }while(number<0);
    solution=number*1.0936133;
    printf("It's %.10f yards", solution);
  }else {
    do{
     printf("Give yards: ");
     scanf("%f", &number);
     if (number<0){
        system("cls");
        printf("Wrong number.Give a number positive number\n");
        sleep(1);
        system("cls");
     }
    }while(number<0);
    solution=number/1.0936133;
    printf("It's %.10f meters", solution);
  }
  sleep(3);
  system("cls");
  do{
    printf("Return to menu?(Yes->1/No->0): ");
    scanf("%d", &q);
    if (q<0 || q>1){
       system("cls");
       printf("\nWrong number.Give a number between 0-1\n");
       sleep(1);
       system("cls");
    }
  }while (q<0 || q>1);
  system("cls");
 }while (q==0);
}
