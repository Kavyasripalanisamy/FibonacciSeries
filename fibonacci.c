generateFibonacciSeries(int);  
  
int main()  
{  
    int n;  
    printf("How many number of series? :\n");  
    scanf("%d", &n);  
    FibonacciSeries(n);  
    return 0;  
}  
  
generateFibonacciSeries(int num)  
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
      printf("%d",fib[i]);
    }
}  

int evennumber(int n){ "This is a even number"}


