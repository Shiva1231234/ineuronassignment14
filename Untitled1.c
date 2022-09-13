Assignment=14(A JOB READY BOOT CAMP )
Question =1
/*
#include<stdio.h>
int main()
{
    int arr[100], size, i, sum = 0;
    printf("Enter array size\n");
    scanf("%d",&size);
    printf("Enter array elements\n");
    for(i = 0; i < size; i++)
          scanf("%d",&arr[i]);
    for(i = 0; i < size; i++)
          sum = sum + arr[i];
    printf("Sum of the array = %d\n",sum);

    return 0;
}
*\
Question =2
/*
#include <stdio.h>
int main() {
    int n, i;
    float num[100], sum = 0.0, avg;

    printf("Enter the numbers of elements: ");
    scanf("%d", &n);

    while (n > 100 || n < 1) {
        printf("Error! number should in range of (1 to 100).\n");
        printf("Enter the number again: ");
        scanf("%d", &n);
    }

    for (i = 0; i < n; ++i) {
        printf("%d. Enter number: ", i + 1);
        scanf("%f", &num[i]);
        sum += num[i];
    }

    avg = sum / n;
    printf("Average = %.2f", avg);
    return 0;
}
*\
Question =3
/*
#include <stdio.h>

int main() {

int a[10],i,se=0,so=0;
printf("enter 10 numbers");
for(i=0;i<=9;i++)
scanf("%d",&a[i]);
for(i=0;i<=9;i++)
{
    if(a[i]%2==0)
    se=se+a[i];
    else
   so=so+a[i];
}
    printf("\nsum all even number%d",se);
    printf("\nsum all odd number%d\n",so);

}
*\
QUESTION =4
/*
#include <stdio.h>
int main()
{
int a[10],i,max;
printf("enter 10 numbers");
for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    max = a[0];
for(i=0;i<=9;i++)

    if(max<a[i])
    max=a[i];
    printf("\nthe greatest number is %d",max);
}
*\
Question =5
/*
#include <stdio.h>

int main() {
    // Write C code here
int a[10],i,small;
printf("enter 10 numbers");
for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
  small = a[0];
for(i=0;i<=9;i++)

    if(small>a[i])
    small=a[i];
    printf("\nthe smallest number is %d",small);
}
*\
Question =6
/*
 #include<stdio.h>
int main()
{
 int num[10],a,i,j;
 printf("enter 10 numbers");
 for(i=0;i<9;++i)
     scanf("%d",&num[i]);
 for(i=0;i<9;++i)
 {
     for(j=i+1;j<9;++j)
     {
         if(num[i]>num[j])
         {
         a=num[i];
         num[i]=num[j];
         num[j]=a;
     }
     }
 }
     for(i=0;i<9;++i){
     printf("sorting element is %d\n",num[i]);
     }
}
*\
Question =7
/*

#include <stdio.h>     // Maximum array size

int main()
{
    int arr[10],a, i;
    int max1, max2;

    /* Input array elements */
    printf("enter 10 numbers ");
    for(i=0; i<9; i++)
    {
        scanf("%d", &arr[i]);


    max1= max2 = arr[0];
}

    /*
     * Check for first largest and second
     */
    for(i=0; i<9; i++)
    {
        if(arr[i] > max1)
        {
            /*
             * If current element of the array is first largest
             * then make current max as second max
             * and then max as current array element
             */
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] > max2 && arr[i] < max1)
        {
            /*
             * If current array element is less than first largest
             * but is greater than second largest then make it
             * second largest
             */
            max2 = arr[i];
        }
    }

    printf("First largest = %d\n", max1);
    printf("Second largest = %d", max2);

    return 0;
}
Question =8
/*
#include <stdio.h>
main()
{
    int smallest, secondsmallest;
    int array[100], size, i;
    printf("\n How many elements do you want to enter: ");
    scanf("%d", &size);
    printf("\nEnter %d elements: ", size);
    for (i = 0 ; i < size; i++)
        scanf("%d", &array[i]);
    if (array[0] < array[1]) {
        smallest = array[0];
        secondsmallest = array[1];
    }
    else {
      smallest = array[1];
      secondsmallest = array[0];
    }
    for (i = 2; i < size; i++) {
        if (array[i] < smallest) {
        secondsmallest = smallest;
        smallest = array[i];
        }
        else if (array[i] < secondsmallest) {
            secondsmallest = array[i];
        }
    }
    printf(" \nSecond smallest element is %d", secondsmallest);
}
*\
Question =9
/*
#include <stdio.h>

void main()
{
   int i,n,a[100];

       printf("\n\nRead n number of values in an array and display it in reverse order:\n");
       printf("------------------------------------------------------------------------\n");

   printf("Input the number of elements to store in the array :");
   scanf("%d",&n);

   printf("Input %d number of elements in the array :\n",n);
   for(i=0;i<n;i++)
      {
	  printf("element - %d : ",i);
	  scanf("%d",&a[i]);
	  }

   printf("\nThe values store into the array are : \n");
   for(i=0;i<n;i++)
     {
	   printf("% 5d",a[i]);
	 }

   printf("\n\nThe values store into the array in reverse are :\n");
   for(i=n-1;i>=0;i--)
      {
	   printf("% 5d",a[i]);
	  }
   printf("\n\n");
}
*\
