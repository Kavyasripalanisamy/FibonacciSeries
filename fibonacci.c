#include<stdio.h>
void generateFibonacciSeries(int);  

void sum(int n){
    int fib[n];
  fib[0]=0;
    fib[1]=1;
    for (int i=2;i<=n-1;i++)
    {
      fib[i]=fib[i-1]+fib[i-2];
    }

    int ans = 0;

    for (int i=0;i<=n+1;i++)
    {
      ans += fib[i+1];
    }

    printf("%d", ans);
}

void evenNumber(int n){
  if(n==0) printf("0");
  else if(n==1) printf("No even numbers");
  else{
    int fib[n],i;
    fib[0]=0;
    fib[1]=1;
    for (int i=2;i<=n-1;i++)
    {
      fib[i]=fib[i-1]+fib[i-2];
    }

 

    for (int i=0;i<=n-1;i++)
    {
      if(fib[i]%2==0)
        printf("%d", fib[i]);
    }
  }
}

void sumSeries(int n){
  int n1= 0;
  int n2 = 1;
  int ans  = 0;

  for(int i=1; i<n; i++){
    int n3 = n1+n2;
    n1 = n2;
    n2 = n3;
    ans += n3;
  }

  printf("%d", ans);
}

void oddNumber(int n){
  if(n==1) printf("1");
  else if(n==0) printf("No odd numbers");
  else{
    int fib[n],i;
    fib[0]=0;
    fib[1]=1;
    for (int i=2;i<=n-1;i++)
    {
      fib[i]=fib[i-1]+fib[i-2];
    }

 

    for (int i=0;i<=n-1;i++)
    {
      if(fib[i]%2!=0)
        printf("%d", fib[i]);
    }
  }
}
void getMaxValue(int n){

}
void nthElement(int n){
  int n1,n2,n3,i;
  n1=0;
  n2=1;
    for (i=2;i<=n-1;i++)
    {
      n3=n1+n2;
      n1=n2;
      n2=n3;
    }
}


int main()  
{  
    int n;  
    printf("How many number of series? :\n");  
    scanf("%d", &n);  
    printf("series:");  
    generateFibonacciSeries(n);
    printf("\nEvene:");  
    evenNumber(n);
    printf("\nSum :");  
    sum(n);
    return 0;  
}  

generateFibonacciSeries(int n)  
{  
    int fib[n],i;
    fib[0]=0;
    fib[1]=1;
    for (i=2;i<=n-1;i++)
    {
      fib[i]=fib[i-1]+fib[i-2];
    }

 

    for (i=0;i<=n-1;i++)
    {
      printf("%d", fib[i]);
    }

}
