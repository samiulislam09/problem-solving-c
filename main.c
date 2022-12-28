#include <stdio.h>
int main(){
    int n,i, count=0;
    scanf("%d", &n);
    char arr[n];
    for (i=0; i<n; i++){
        scanf("%s", &arr[i]);
    }
    for(i=0; i<n; i++){
        printf("%s", arr[i]);
    }


}
