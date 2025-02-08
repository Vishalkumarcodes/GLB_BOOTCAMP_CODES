#include <stdio.h>
int main() {
    char str1[10],str2[10];
    int i, str1len = 0, str2len = 0, compare = 0;
    printf("Enter the first string =");
    scanf("%s",&str1);
    printf("Enter the second string =");
    scanf("%s",&str2);
    for (i=0;str1[i]!='\0';i++) {
        str1len++;
    }
    for (i=0; str2[i]!='\0';i++) {
        str2len++;
    }
    printf("first string length = %d\n", str1len);
    printf("second string length = %d\n", str2len);
 
    if (compare==0 && str1[i]!=str2[i]) {
        compare=str1[i]-str2[i];
    }

    if (compare == 0) {
        printf("The strings are equal\n");
    }
    else if (compare < 0) {
        printf("str1 is greater\n");
    } 
    else {
        printf("str2 is greater\n");
    }
    

    return 0;
}
