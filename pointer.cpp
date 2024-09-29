#include <stdio.h>

void update(int *a,int *b) {
    int sum = *a+*b;  
    int subtract;
    if(*a>*b)               // ye cases isiliye bnaye kyuki Mod value show krna tha sub ka
    {
         subtract = *a-*b;
    }  
    else
    {
        subtract = *b-*a;
    }
     *a = sum;      // update the pointer value *ptr value update ya show krne ko hota hi
   *b = subtract;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
