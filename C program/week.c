#include <stdio.h>

int main() {
    int choice;

    printf("1. Display Days of the Week\n2. Check Vowel or Consonant\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter a number (1-7): ");
            int day;
            scanf("%d", &day);
            switch(day) {
                case 1: printf("Monday\n"); break;
                case 2: printf("Tuesday\n"); break;
                case 3: printf("Wednesday\n"); break;
                case 4: printf("Thursday\n"); break;
                case 5: printf("Friday\n"); break;
                case 6: printf("Saturday\n"); break;
                case 7: printf("Sunday\n"); break;
                default: printf("Invalid day\n");
            }
            break;
        case 2:
            printf("Enter a character: ");
            char ch;
            scanf(" %c", &ch);
            switch(ch) {
                case 'a': case 'e': case 'i': case 'o': case 'u':
                case 'A': case 'E': case 'I': case 'O': case 'U':
                    printf("%c is a vowel.\n", ch);
                    break;
                default:
                    printf("%c is a consonant.\n", ch);
            }
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
