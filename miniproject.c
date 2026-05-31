#include <stdio.h>
#include <string.h>

// USER structure
struct User {
    char username[50];
    char password[50];
};

// Function for login
int login(struct User u) {
    char uname[50], pass[50];

    printf("\n--- Login ---\n");
    printf("Enter username: ");
    scanf("%s", uname);
    printf("Enter password: ");
    scanf("%s", pass);

    if (strcmp(uname, u.username) == 0 && strcmp(pass, u.password) == 0) {
        return 1; // success
    } else {
        return 0; // fail
    }
}

// Function for quiz
int startQuiz() {
    int score = 0;
    char ans;

    printf("\n--- Quiz Start ---\n");

    // Q1
    printf("\n1. C language kisne develop ki?\n");
    printf("A. Dennis Ritchie\nB. Bjarne Stroustrup\nC. James Gosling\nD. Guido van Rossum\n");
    printf("Answer: ");
    scanf(" %c", &ans);
    if (ans == 'A' || ans == 'a') score++;

    // Q2
    printf("\n2. sizeof(int) kitna hota hai (mostly)?\n");
    printf("A. 2\nB. 4\nC. 8\nD. 1\n");
    printf("Answer: ");
    scanf(" %c", &ans);
    if (ans == 'B' || ans == 'b') score++;

    // Q3
    printf("\n3. HTML ka full form kya hai?\n");
    printf("A. Hyper Trainer Marking Language\nB. Hyper Text Markup Language\nC. Hyper Text Marketing Language\nD. None\n");
    printf("Answer: ");
    scanf(" %c", &ans);
    if (ans == 'B' || ans == 'b') score++;

    return score;
}

int main() {
    struct User user;

    printf("--- Registration ---\n");
    printf("Create username: ");
    scanf("%s", user.username);
    printf("Create password: ");
    scanf("%s", user.password);

    // Login
    if (login(user)) {
        printf("\nLogin Successful!\n");

        int score = startQuiz();

        printf("\n--- Result ---\n");
        printf("Your Score: %d / 3\n", score);

        if (score == 3)
            printf("Excellent!\n");
        else if (score >= 2)
            printf("Good Job!\n");
        else
            printf("Try Again!\n");

    } else {
        printf("\nLogin Failed! Wrong username or password.\n");
    }
    return 0;
}
