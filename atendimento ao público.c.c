# include <stdio.h>
# include <stdlib.h>

int main () {
    char nome[20], course[20], course2[20], course1[20], completename[40], mom[20], dad[20];
    float cpf, cpf2, phone;
    int number, answer;
    printf("----------------------------------------------------------------------------");
    printf("\n| Hello outsider! Thank you for contacting us. Are you registered?       |");
    printf("\nPress 1 for 'YES'");
    printf("\nPress 2 for 'NO'");
    printf("\nYour answer: ");
    scanf("%d", &answer);
    if (answer==1) {
            printf ("\nGreat! Now I need you to inform me your name: ");
            scanf("%s", nome);
            printf("\nHi %s", nome);
            printf(". Now I need you to inform me your social security number: ");
            scanf("%f", &cpf);
            printf("\nNow, Let's see what are your intentions...");
            printf("\n----------------------------------------------------------------------------");
            printf("\nPlease, select one of these numbers depending on your intentions: ");
            printf("\n1 -- available courses");
            printf("\n2 -- subscribe to one of our courses");
            printf("\n3 -- cancel your subscription in one of our courses");
            printf("\n4 -- speak to one of our attendants");
            printf("\nYour answer: ");
            scanf("%d", &number);
            printf("\n----------------------------------------------------------------------------");
            if(number==1) {
                        printf("\nWe have the following available courses: ");
                        printf("\nTECH, INFO, MAININFO, MAINTECH");
            } else if (number==2) {
                        printf("\nI see that you want to subscribe to one of our courses(TECH, INFO, MAININFO, MAINTECH). ");
                        printf("Please write which one: ");
                        scanf("%s", course);
                        printf("\nGreat! You are officially subscribed to %s", course);
            } else if (number==3){
                        printf("\nI see that you want to unsubscribe to one of our courses...");;
                        printf("\nPlease write the name of the course you want to cancel your subscription: ");
                        scanf("%s", course2);
                        printf("\nOkay! You've been officially left out of %s", course2);
            } else if (number==4){
                        printf("\nI am connecting you to one of our attendants...");
                }
    } else if(answer==2){
            printf("\nSo you're not registered, let's change that!");
            printf("\nJust to warn you, I am going to ask a lot of questions about you. Be ready!");
            printf("\nWhat's your whole name?");
            scanf("%s", completename);
            printf("\nWhat is your social security number?");
            scanf("%f", &cpf2);
            printf("\nWhat is the name of your mother?");
            scanf("%s", mom);
            printf("\nWhat is the name of your father?");
            scanf("%s", dad);
            printf("\nAnd last but not least, what is your phone number? ");
            scanf("%f", &phone);
            printf("\nCongratulations! You've been officially registered!");

    }


return 0;
}
