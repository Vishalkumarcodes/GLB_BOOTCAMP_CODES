#include <stdio.h>
#include <string.h>

void anagram(char str[]) {
    int n = strlen(str);
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main() {
    char str1[10], str2[10];
    
    printf("Enter first string= ");
    scanf("%s", str1);
    
    printf("Enter second string= ");
    scanf("%s", str2);
    
    if (strlen(str1) != strlen(str2)) {
        printf("not an anagram string beacuse length are not equal \n");
        return 0;
    }
    
    anagram(str1);
    anagram(str2);
    
    if (strcmp(str1, str2) == 0) {
        printf("anagrams\n");
    } else {
        printf("not anagrams\n");
    }
    
    return 0;
}
//anagram 

