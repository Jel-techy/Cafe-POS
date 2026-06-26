#include <stdio.h>
#include <stdlib.h>
char menu(char yes);
float main_dish(int yes);
float dessert(int yes);
float refreshments(int yes);
int order;

int main()
{

    printf("\nWelcome to G2 Restaurant!\n");
    printf("-------------------------\n");
    printf("Would you like to order(y/n)?");
    scanf(" %c", &order);

    if (order=='Y'||order=='y'){

         menu(order);
    //First Nest
    char    main_dish_selection,dessert_selection;
    float   cash,bill,mdishAmt,dessertAmt,refAmt,totalamt;
    int     category;

        printf("Would you like to order main dish/es?(y/n)");
        scanf(" %c", &main_dish_selection);

            if (main_dish_selection=='Y'||main_dish_selection=='y'){
                mdishAmt = main_dish(main_dish_selection);
                //Second Nest
                        char choose_desert;
                        float dessertamt;
                    printf("Would you like to add dessert?(y/n)");
                    scanf(" %c", &choose_desert);

                        if (choose_desert=='Y'||choose_desert=='y'){
                            //Third Nest
                                dessertAmt = dessert(choose_desert);

                            char refchoice;
                            printf("Would you like to add refreshments?(y/n)");
                            scanf(" %c", &refchoice);
                                if(refchoice=='Y'||refchoice=='y'){
                                //Fourth Nest
                                refAmt = refreshments(refchoice);
                                }
                                else;
                                //Fourth Nest
                            }

                        else{
                            //Third Nest
                            char refchoice;
                            printf("Would you like to add refreshments?(y/n)");
                            scanf(" %c", &refchoice);

                                if(refchoice=='Y'||refchoice=='y'){
                                //Fourth Nest
                                refAmt = refreshments(refchoice);
                                }
                                else;
                                //Forth Nest
                            }
                    }
            else {
                //Second Nest
                    int choose_desert1;
                    printf("Would you like to order for desert?(y/n)");
                    scanf(" %c", &choose_desert1);

                        if (choose_desert1=='Y'||choose_desert1=='y'){
                            //Third Nest
                            dessertAmt = dessert(choose_desert1);

                             char refchoice;
                            printf("Would you like to add refreshments?(y/n)");
                            scanf(" %c", &refchoice);

                                if(refchoice=='Y'||refchoice=='y'){
                                //Fourth Nest
                                refAmt = refreshments(refchoice);
                                }
                                else;
                                //Fourth Nest

                        }
                        else{
                            //Third Nest
                            char refchoice;
                            printf("Would you like to add refreshments?(y/n)");
                            scanf(" %c", &refchoice);

                                if(refchoice=='Y'||refchoice=='y'){
                                //Fourth Nest
                                refAmt = refreshments(refchoice);
                                }
                                else{
                                //Fourth Nest
                                }
                            }
                 };
        //Total Bill & Change
        system("cls");
        totalamt = mdishAmt+dessertAmt+refAmt;
        printf("Order Summary: \n");
        printf("\tTotal Main Dish Bill\t: Php %.2f\n",mdishAmt);
        printf("\tTotal Dessert Bill\t: Php %.2f\n",dessertAmt);
         printf("\tTotal Refreshments Bill\t: Php %.2f\n",refAmt);
        printf("\n\tTotal Order Amount\t: Php %.2f\n",totalamt);
        do{
            printf("Cash Tendered\t\t: ");
            scanf("%f", &cash);

            if(cash>=totalamt){

            }

            else{
                printf("\t\tInsufficient cash.\n ");
            };
            }while(cash <= totalamt);


            bill=cash-totalamt;
            printf("Total Change\t: Php %.2f\n",bill);

            printf("\nThank you for choosing G2 restaurant come again :)\n");
}

    else{
        //First Nest
        printf("Have a Great Day!\n");
        }
  return 0;
}
char menu(char yes){
printf("\nMenu:\n");

printf("\nMain dish:\n");
        printf("===============================================================\n");
        printf("[1] Spaghetti Bolognese  ---------------------------Php 690.50\t");
        printf("[2] Pan Grilled Liempo   ---------------------------Php 520.99\n");
        printf("[3] Shrimp Scampi        ---------------------------Php 880.75\t");
        printf("[4] Grilled Salmon       ---------------------------Php 1125.50\n");
        printf("[5] Cripy Chicken Fillet ---------------------------Php 645.20\t");
        printf("[6] Beef Stroganoff      ---------------------------Php 760.45\n");
        printf("[7] BBQ Pulled Pork      ---------------------------Php 950.20\t");
        printf("[8] Chicken Piccata      ---------------------------Php 830.60\n");
        printf("[9] Grilled Chicken      ---------------------------Php 595.75\t");
        printf("[10]Garlic Tofu          ---------------------------Php 1035.75\n\n");

printf("\nDessert: \n");
        printf("===============================================================\n");
        printf("[1] Chocolate Cake        ---------------------------Php 150.50\t");
        printf("[2] Strawberry Cheesecake ---------------------------Php 200.75\n");
        printf("[3] Tiramisu              ---------------------------Php 180.25\t");
        printf("[4] Lemon Tart            ---------------------------Php 160.00\n");
        printf("[5] Mango Sorbet          ---------------------------Php 120.90\t");
        printf("[6] Apple Pie             ---------------------------Php 175.60\n");
        printf("[7] Red Velvet Cupcakes   ---------------------------Php 130.30\t");
        printf("[8] Pistachio Ice Cream   ---------------------------Php 190.45\n");
        printf("[9] Blueberry Muffins     ---------------------------Php 110.75\t");
        printf("[10]Caramel Pudding       ---------------------------Php 145.20\n\n");

printf("\nRefreshments: \n");
        printf("===============================================================\n");
        printf("[1] Iced Coffee         ---------------------------Php 45.80\t");
        printf("[2] Lemonade            ---------------------------Php 30.50\n");
        printf("[3] Fruit Smoothie      ---------------------------Php 55.25\t");
        printf("[4] Mint Mojito         ---------------------------Php 40.90\n");
        printf("[5] Green Tea           ---------------------------Php 25.75\t");
        printf("[6] Mango Lassi         ---------------------------Php 35.60\n");
        printf("[7] Raspberry Lemonade  ---------------------------Php 48.20\t");
        printf("[8] Coconut Water       ---------------------------Php 20.30\n");
        printf("[9] Srawberry Milkshake ---------------------------Php 42.75\t");
        printf("[10]Sparkling Water     ---------------------------Php 15.50\n\n");

return yes;
}
float main_dish(int yes){
float product,price,sum,dishamt,cash;
        int times,item;
        char choice,addDish;
    do {

        system("cls");
        printf("\nMain dish:\n");
        printf("===============================================================\n");
        printf("[1] Spaghetti Bolognese  ---------------------------Php 690.50\t");
        printf("[2] Pan Grilled Liempo   ---------------------------Php 520.99\n");
        printf("[3] Shrimp Scampi        ---------------------------Php 880.75\t");
        printf("[4] Grilled Salmon       ---------------------------Php 1125.50\n");
        printf("[5] Cripy Chicken Fillet ---------------------------Php 645.20\t");
        printf("[6] Beef Stroganoff      ---------------------------Php 760.45\n");
        printf("[7] BBQ Pulled Pork      ---------------------------Php 950.20\t");
        printf("[8] Chicken Piccata      ---------------------------Php 830.60\n");
        printf("[9] Grilled Chicken      ---------------------------Php 595.75\t");
        printf("[10]Garlic Tofu          ---------------------------Php 1035.75\n");

            printf("\nEnter code of the dish\t\t: ");
            scanf("%d",&item);

            switch(item){

                case 1:
                    printf("You have ordered Spaghetti Bolognese.\n");
                    price=690.50;
                    break;

                case 2:
                    printf("You have ordered Pan Grilled Liempo.\n");
                    price=520.99;
                    break;

                case 3:
                    printf("You have ordered Shrimp Scampi.\n");
                    price=880.75;
                    break;

                case 4:
                    printf("You have ordered Grilled Salmon.\n");
                    price=1125.50;
                    break;

                case 5:
                    printf("You have ordered Crispy Chicken Fillet.\n");
                    price=645.20;
                    break;

                case 6:
                    printf("You have ordered Beef Stroganoff.\n");
                    price=760.45;
                    break;

                case 7:
                    printf("You have ordered Barbeque Pulled Pork.\n");
                    price=950.20;
                    break;

                case 8:
                    printf("You have ordered Chicken Piccata.\n");
                    price=830.60;
                    break;

                case 9:
                    printf("You have ordered Grilled Chicken.\n");
                    price=595.75;
                    break;

                case 10:
                    printf("You have ordered Garlic Tofu.\n");
                    price=1035.75;
                    break;

                default:
                    printf("Invalid Input!\n");
                    break;
            }
            printf("\nQuantity\t\t\t: ");
            scanf("%d", &times);

                sum= price * times;
                printf("\nAmount\t: %.2f\n",sum);

                dishamt=sum+dishamt;
                printf("Total Main Dish Bill\t:%.2f\n",dishamt);

        printf("Would you like to add a dish(y/n)?\n");
        addDish=getch();
    }while(addDish=='Y'||addDish=='y');
return dishamt;
}
float dessert(int yes){
        float product,price,sum,dessAmt;
        int times,item;
        char choice,addDessert;
    do {

        system("cls");
        printf("\nDesserts: \n");
        printf("===============================================================\n");
        printf("[1] Chocolate Cake        ---------------------------Php 150.50\t");
        printf("[2] Strawberry Cheesecake ---------------------------Php 200.75\n");
        printf("[3] Tiramisu              ---------------------------Php 180.25\t");
        printf("[4] Lemon Tart            ---------------------------Php 160.00\n");
        printf("[5] Mango Sorbet          ---------------------------Php 120.90\t");
        printf("[6] Apple Pie             ---------------------------Php 175.60\n");
        printf("[7] Red Velvet Cupcakes   ---------------------------Php 130.30\t");
        printf("[8] Pistachio Ice Cream   ---------------------------Php 190.45\n");
        printf("[9] Blueberry Muffins     ---------------------------Php 110.75\t");
        printf("[10]Caramel Pudding       ---------------------------Php 145.20\n");

            printf("Enter code of the dessert\t\t: ");
            scanf("%d",&item);

            switch(item){

                case 1:
                    printf("You have ordered Chocolate Cake.\n");
                    price=150.50;
                    break;

                case 2:
                    printf("You have ordered Strawberry Cheesecake.\n");
                    price=200.75;
                    break;

                case 3:
                    printf("You have ordered Tiramisu.\n");
                    price=180.25;
                    break;

                case 4:
                    printf("You have ordered Lemon Tart.\n");
                    price=160.00;

                    break;

                case 5:
                    printf("You have ordered Mango Sorbet.\n");
                    price=120.90;
                    break;

                case 6:
                    printf("You have ordered Apple Pie.\n");
                    price=175.60;
                    break;

                case 7:
                    printf("You have ordered Red Velvet Cupcakes.\n");
                    price=130.30;
                    break;

                case 8:
                    printf("You have ordered Pistachio Ice Cream.\n");
                    price=190.45;
                    break;

                case 9:
                    printf("You have ordered Blueberry Muffins.\n");
                    price=110.75;
                    break;

                case 10:
                    printf("You have ordered Caramel Pudding.\n");
                    price=145.20;
                    break;

                default:
                    printf("Invalid Input!\n");
                    break;
            }
            printf("Quantity\t\t\t: ");
            scanf("%d", &times);

                sum= price * times;
                printf("Amount\t: %.2f\n",sum);

                dessAmt=sum+dessAmt;
                printf("Total Dessert Bill\t:%.2f\n",dessAmt);

        printf("Would you like to add a dessert?(y/n)\n");
        addDessert=getch();
    }while(addDessert=='Y'||addDessert=='y');
return dessAmt;
}
float refreshments(int yes){
        float product,price,sum,refamt;
        int times,item;
        char choice,addref;
    do {

        system("cls");
        printf("\nRefreshments: \n");
        printf("===============================================================\n");
        printf("[1] Iced Coffee         ---------------------------Php 45.80\t");
        printf("[2] Lemonade            ---------------------------Php 30.50\n");
        printf("[3] Fruit Smoothie      ---------------------------Php 55.25\t");
        printf("[4] Mint Mojito         ---------------------------Php 40.90\n");
        printf("[5] Green Tea           ---------------------------Php 25.75\t");
        printf("[6] Mango Lassi         ---------------------------Php 35.60\n");
        printf("[7] Raspberry Lemonade  ---------------------------Php 48.20\t");
        printf("[8] Coconut Water       ---------------------------Php 20.30\n");
        printf("[9] Srawberry Milkshake ---------------------------Php 42.75\t");
        printf("[10]Sparkling Water     ---------------------------Php 15.50\n");
            printf("Enter code of the refreshment\t\t: ");
            scanf("%d",&item);

            switch(item){

                case 1:
                    printf("You have ordered Iced Coffee.\n");
                    price=45.80;
                    break;

                case 2:
                    printf("You have ordered Lemonade.\n");
                    price=30.50;
                    break;

                case 3:
                    printf("You have ordered Fruit Smoothie.\n");
                    price=55.25;
                    break;

                case 4:
                    printf("You have ordered Mint Mojito.\n");
                    price=40.90;

                    break;

                case 5:
                    printf("You have ordered Green Tea.\n");
                    price=25.75;
                    break;

                case 6:
                    printf("You have ordered Mango Lassi.\n");
                    price=35.60;
                    break;

                case 7:
                    printf("You have ordered Raspberry Lemonade.\n");
                    price=48.20;
                    break;

                case 8:
                    printf("You have ordered Coconut Water.\n");
                    price=20.30;
                    break;

                case 9:
                    printf("You have ordered Strawberry Milkshake.\n");
                    price=42.75;
                    break;

                case 10:
                    printf("You have ordered Sparkling Water.\n");
                    price=15.50;
                    break;

                default:
                    printf("Invalid Input!\n");
                    break;
            }
            printf("Quantity\t\t\t: ");
            scanf("%d", &times);

                sum= price * times;
                printf("Amount\t: %.2f\n",sum);

                refamt=sum+refamt;
                printf("Total Refreshment Bill\t:%.2f\n",refamt);

        printf("Would you like to add a refreshments?(y/n)\n");
        addref=getch();
    }while(addref=='Y'||addref=='y');
return refamt;
}
