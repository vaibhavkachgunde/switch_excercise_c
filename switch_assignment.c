// Create a quiz program using switch statement.  with 10 questions.
#include<stdio.h>
 int main(){

     int choice, score = 0;

    printf("\t\t%c %c %c QUIZ - APP %c %c %c\n\n",3,3,3,3,3,3);
    printf("Q1. Which country  has the largest landmass\n");
    printf("1.India\n2.United States\n3.Russia\n4.China\n\n");
    scanf("%d", &choice);
    if(choice == 3){
        score++;
    }

    printf("Q2.which is nationaal animal ion india \n");
    printf("1.eleephant\n2.tiger \n3.monkey \n4.deer \n\n");
    scanf("%d",&choice);
    if (choice==2)
    {
        score++;
    }
    
    printf("Q3.which is national bird in india \n");
    printf("1.peacock \n2.sparrow \n3.butterfly \n4.duck \n\n");
    scanf("%d",&choice);
    if (choice==1)
    {
        score++;
    }

    printf("Q4.world largest mountain \n");
    printf("1.kalsubai \n2. mt everest \n3.deomali \n4. nanda devi \n\n");
    scanf("%d", &choice);
    if (choice==2)
    {
        score++;
    }

    printf("Q5. which in the middle color of indian flag \n");
    printf("1. red \n.2 orange \n3 white \n4. green \n\n");
    scanf("%d",&choice);
    if (choice==3)
    {
        score++;
    }

    printf("Q6.how many total state in india");
    printf("1.32 \n2. 29 \n3. 30 \n4. 28 \n\n");
    scanf("%d",&choice);
    if (choice==2)
    {
        score++;
    }
    


    printf("Q7.who is the cheif of indian navy \n");
    printf("1.air chief marshal amar preet singh \n2. vice ad miral krishna swaaminathan \n3. sujit.p.dharkar \n4.admiral r hari kunmar \n\n");
    scanf("%d",&choice);
    if (choice==4)
    {
        score++;

    }

    printf("Q8.what is the capital of india \n");
    printf("1.mumbai \n2. pune \n3. new delhi \n4. goa \n \n");
    scanf("%d", &choice);
    if (choice==3)
    {
        score++;
    }
     
    printf("Q9. who route in the national anthum of india \n");
    printf("1.mahatama gandhi \n2.ravindranath tagor \n3. narendra modi \n4. sunil anna shelke \n\n");
    scanf("%d",&choice);
    if (choice==2)
    {
        score++;
    }

    printf("Q10. which is the smallest state in india \n");
    printf("1.goa \n2.up \n3.bengol \n4. bihar \n\n");
    scanf("%d", &choice);
    if (choice==1);
    {
        score++;

    }

    printf("Correct Answers: %d", score);
    printf("Incorrect Answers %d", 10-score);
    

    

return 0;

 }
