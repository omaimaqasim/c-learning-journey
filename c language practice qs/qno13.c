#include<stdio.h>

int main(){
int n=5 ,i=1,sum=0,f=1;
    //   sum of First N Even Numbers

    // while (i<=n)
    // {
    //    sum +=i;
    //    i++;
    // }

    // printf("sum of %dth number is :%d",n,sum);

    // Sum of First N Odd Numbers
    //  while (i<=n)
    // {
    //    if (i%2!=0)
    //    {
    //      sum+=i;

    //    }
    //    i++;   
    // }
    //  printf("sum of odd number uptil%d :%d",n,sum);
    
    // Factorial of a Number
//  while (i<=n)
//     {
//        f *=i;
//        i++;
//     }

//      printf(" %d factorial is %d",n,f);

//     return 0;
// }

// Sum of Squares of First N Numbers

  while (i<=n)
    {
       sum += i*i;
       i++;
    }

    printf("sum of %dth number is :%d",n,sum);

}



/*
Q: Develop a program in C that provides 
o	sum of First N Even Numbers
o	Sum of First N Odd Numbers
o	Factorial of a Number
•	1*2*3*...*N
o	Sum of Squares of First N Numbers
o	Sum of First N Natural Numbers
o	Sum of Cubes of First N Numbers
o	Multiplication Table of a Number
5 x 1 = 5
5 x 2 = 10
...
5 x 10 = 50
*/