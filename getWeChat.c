#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char num2char[] = {
    'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
    'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
    'u', 'v', 'w', 'x', 'y', 'z', '_'
};

void int2str(char *input) {
    char cleaned_input[1000];
    int cleaned_len = 0;
    for (int i = 0; i < strlen(input); i++) {
        if (input[i] != ' ') {
            cleaned_input[cleaned_len++] = input[i];
        }
    }
    cleaned_input[cleaned_len] = '\0';
    char result[500];
    int result_len = 0;
    for (int i = 0; i < cleaned_len; i += 2) {
        char num_str[3] = { cleaned_input[i], cleaned_input[i + 1], '\0' };
        int num = atoi(num_str);

        if (num >= 1 && num <= 27) {
            result[result_len++] = num2char[num - 1];
        } else {
            printf("Error!\n");
            return;
        }
    }
    result[result_len] = '\0';
    printf("My WeChat ID is: %s\n", result);
}

int main() {
    char input[1000];
    printf("Enter your answer: ");
    fgets(input, 1000, stdin);
    input[strcspn(input, "\n")] = '\0'; 
    int2str(input);
    return 0;
}
