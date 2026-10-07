#include <stdio.h>
#include <ctype.h>

int main(){

    char questions[][100] = {"\nWhat is the largest planet in the solar system?\n",
        "\nWhat is the hotest planet?\n",
        "\nWhat planet has the most moons?\n",
        "\nIs the earth flat?\n"
    };

    char options[][100] = {"A. Jupiter\nB. Saturn\nC. Uranus\nD. Neptune\n",
    "A. Mercury\nB. Venus\nC. Earth\nD. Mars\n",
    "A.Earth\nB. Mars\nC. Jupiter\nD. Saturn\n",
    "A. Yes\nB. No\nC. Maybe\nD. Sometimes\n"
    };
    char answerKey[] = {'A', 'B', 'D', 'B'};

    int questionCount = sizeof(questions) / sizeof(questions[0]);

    char guess = '\0';
    int score = 0;

    printf("\n*** QUIZ GAME ***\n");

    for(int i = 0; i < questionCount; i++){
        printf("%s\n", questions[i]);
        printf("%s\n", options[i]);

        printf("\nEnter your choice: ");
        scanf(" %c", &guess);

        guess = toupper(guess);

        if(guess == answerKey[i]){
            printf("\nYes baby\n");
            score++;
        } else{
            printf("\nNext time honey!\n");
        }
    }

    printf("\nYOUR SCORE IS %d OUT OF %d POINTS\n", score, questionCount);

    
    return 0;
}