#include <stdio.h>

int parenthesisChecker(char arr[], int n){
    int c1 = 0; int c2 = 0; int c3 = 0;
    for(int i = 0; i <n; i++){
        if (arr[i] == '{') c1++;
        else if (arr[i] == '}') c1--;
        else if (arr[i] == '[') c2++;
        else if (arr[i] == ']') c2--;
        else if (arr[i] == '(') c3++;
        else if (arr[i] == ')') c3--;
    }
    if( c1 != 0 || c2 != 0 || c3 != 0){
        return 0;
    } else{
        return 1;
    }
}

int main(){
    int n;
    printf("Hãy nhập số lượng kí tự cho chuỗi bạn muốn nhập: ");
    scanf("%d", &n);

    char arr[n];
    printf("Hãy nhập các kí tự '{' '}' '[' ']' '(' ')' bất kì nhưng tối đa %d kí tự: ",n);
    for(int i = 0; i < n; i++){
        scanf(" %c",&arr[i]);
    }

    int result = parenthesisChecker(arr,n);

    if(result == 0){
        printf("False");
    } else{
        printf("True");
    }
    
    return 0;
}