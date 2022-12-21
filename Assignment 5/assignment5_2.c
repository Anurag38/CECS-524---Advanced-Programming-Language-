#include <stdio.h>
#include <math.h>

int main(void) {

  int a,b,c;
  double d,x1,x2,img;
  printf("Enter the co-efficient of x^2: ");
  scanf("%d", &a);
  printf("Enter the co-efficient of x: ");
  scanf("%d", &b);
  printf("Enter the constant: ");
  scanf("%d", &c);

  
  
  while (a !=0 || b != 0 || c != 0){
    
    printf("\nThe equation is: %dx^2 + %dx + %d \n", a, b, c);
    d = (b * b) - (4 * a * c);
    printf("D: %f \n", d);
    
    if (d > 0){
      x1 = ((-b) + sqrt(d)) / (2 * a);
      x2 = ((-b) - sqrt(d)) / (2 * a);

      printf("\nRoot 1: %f \n", x1);
      printf("Root 2: %f \n\n", x2);
    }

    else if (d < 0){
      x1 = ((-b) / (2 * a)) ;
      img = (sqrt(-d))/ (2 * a);
      
      printf("Root 1: %f + i %f \n", x1, img);
      printf("Root 2: %f - i %f \n\n", x1, img);
    }

    else{
      x1 = ((-b) / (2 * a));
      printf("Roots are: %f \n\n", x1);
    }

    printf("Enter the co-efficient of x^2: ");
    scanf("%d", &a);
    printf("Enter the co-efficient of x: ");
    scanf("%d", &b);
    printf("Enter the constant: ");
    scanf("%d", &c);
  }
  
  return 0;
}