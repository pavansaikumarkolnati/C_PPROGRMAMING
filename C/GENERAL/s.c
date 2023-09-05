
/*
// Sample code to perform I/O:
#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);                          // Reading input from STDIN
    printf("Input number is %d.\n", num);       // Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/
#include <stdio.h>

int main(){
    
     int N;
    scanf("%ld", &N);
    int rem,sum=0;
    int data[N];
    for(int i=0; i<N; i++)
        {scanf("%ld", &data[i]);
    //  printf("%ld-->"data[i]));
    }
    for(long long j=0;j<N;j++)
    {   if(data[j]>10)
        {rem=data[j]%10;}
        else{
            rem=data[j];
        }
        sum=(sum*10)+rem;
    //printf("%d-->",data[j]);
    }
   // printf("%d",sum);
    if(sum%10==0)
    printf("%s","Yes");
    else
    printf("%s","No");
    
    return 0;
}