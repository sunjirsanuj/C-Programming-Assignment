#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

int element;
int ar[100];

int main_f();
void insert_array();
void update_array();
void update_byValue();
void update_byIndex();
void delete_array();
void delete_byValue();
void delete_byIndex();
void sort_array();
void search_array();
void search_byValue();
void search_byIndex();
void display_array();
void divider();

int main()
{
    while(1){
        switch(main_f()){
        case 1:
            insert_array();
            break;
        case 2:
            update_array();
            break;
        case 3:
            delete_array();
            break;
        case 4:
            sort_array();
            break;
        case 5:
            search_array();
            break;
        case 6:
            display_array();
            break;
        case 7:
            exit(0);
        default:
            printf("\n\n*****Wrong Choice! Please Try Again*****");
        }
    }
}

int main_f(){
    int choice;

    system("cls");
    printf("\n\n");
    divider();
    printf("\n");
    printf("\t\tARRAY OPERATION\n");
    divider();
    printf("\n\n\t[1] Insert\n");
    printf("\t[2] Update\n");
    printf("\t[3] Delete\n");
    printf("\t[4] Sort\n");
    printf("\t[5] Search\n");
    printf("\t[6] Display\n");
    printf("\t[7] Exit\n\n");

    printf("\tEnter Your Choice: ");
    scanf("%d",&choice);
    return choice;

}

void divider(){
    printf("********************************************");
}

void insert_array(){
    system("cls");
    printf("\n\n");
    divider();
    printf("\n");
    printf("\tINSERT ELEMENTS IN AN ARRAY\n");
    divider();
    printf("\n\nHow much elements you want in this Array? : ");
    scanf("%d",&element);
    printf("\n");

    for (int i=0; i<element; i++){
        printf("Element [%d]: ",i+1);
        scanf("%d",&ar[i]);
    }

    printf("\nElements of the Array are : ");
    for (int i=0; i<element; i++) printf("%d ",ar[i]);
    getch();

}

void update_array(){
    int choice;

    system("cls");
    printf("\n\n");
    divider();
    printf("\n");
    printf("\tUPDATE ELEMENTS OF AN ARRAY\n");
    divider();
    update_options:
    printf("\n\n\t[1] By Value\n");
    printf("\t[2] By Index\n\n");
    printf("\tEnter Your Choice: ");
    scanf("%d",&choice);

    switch(choice){
    case 1:
        update_byValue();
        break;
    case 2:
        update_byIndex();
        break;
    default:
        printf("\n\n*****Wrong Choice! Please Try Again*****");
        goto update_options;
    }
    getch();
}

void update_byValue(){
    system("cls");
    printf("\n\n");
    divider();
    printf("\n");
    printf("\tUPDATE ELEMENTS OF AN ARRAY\n");
    divider();

    int previous_value, new_value;
    char check;

    printf("\n\n\tEnter the Previous Value: ");
    scanf("%d",&previous_value);
    printf("\tEnter the New Value: ");
    scanf("%d",&new_value);
    printf("\n\tAre you sure?[y/n]: ");
    check = getche();

    if (check == 'y'){
        printf("\n\n\tPrevious Elements of The Array: ");
        for (int i=0; i<element; i++) printf("%d ",ar[i]);

        for (int i=0; i<element; i++){
        if (previous_value == ar[i]) ar[i] = new_value;
        }

        printf("\n\tNew Elements of The Array: ");
        for (int i=0; i<element; i++) printf("%d ",ar[i]);
    }
}

void update_byIndex(){
    system("cls");
    printf("\n\n");
    divider();
    printf("\n");
    printf("\tUPDATE ELEMENTS OF AN ARRAY\n");
    divider();

    int index, value;
    char check;

    printf("\n\n\tEnter the index: ");
    scanf("%d",&index);
    printf("\tEnter the New Value: ");
    scanf("%d",&value);
    printf("\n\tAre you sure?[y/n]: ");
    check = getche();

    if (check == 'y'){
        printf("\n\n\tPrevious Elements of The Array: ");
        for (int i=0; i<element; i++) printf("%d ",ar[i]);

        ar[index] = value;

        printf("\n\tNew Elements of The Array: ");
        for (int i=0; i<element; i++) printf("%d ",ar[i]);
    }
}

void delete_array(){
    system("cls");
    printf("\n\n");
    divider();
    printf("\n");
    printf("\tDELETE ELEMENT OF AN ARRAY\n");
    divider();

    int choice;

    delete_options:
    printf("\n\n\t[1] By Value\n");
    printf("\t[2] By Index\n\n");
    printf("\tEnter Your Choice: ");
    scanf("%d",&choice);

    switch(choice){
    case 1:
        delete_byValue();
        break;
    case 2:
        delete_byIndex();
        break;
    default:
        printf("\n\n*****Wrong Choice! Please Try Again*****");
        goto delete_options;
    }
    getch();
}

void delete_byValue(){
    system("cls");
    printf("\n\n");
    divider();
    printf("\n");
    printf("\tDELETE ELEMENT OF AN ARRAY\n");
    divider();

    int value, f=0, index;
    char check;

    printf("\n\n\tEnter the Value: ");
    scanf("%d",&value);
    printf("\n\tAre you sure?[y/n]: ");
    check = getche();

    if (check == 'y'){
        printf("\n\n\tPrevious Elements of The Array: ");
        for (int i=0; i<element; i++) printf("%d ",ar[i]);

        for (int i=0; i<element; i++){
            if (value == ar[i]){
                f = 1;
                index = i;
                break;
            }
        }

        for (int i=index; i<element-1; i++) ar[i] = ar[i+1];

        printf("\n\tNew Elements of The Array: ");
        for (int i=0; i<element-1; i++) printf("%d ",ar[i]);
    }
}

void delete_byIndex(){
    system("cls");
    printf("\n\n");
    divider();
    printf("\n");
    printf("\tDELETE ELEMENT OF AN ARRAY\n");
    divider();

    int index;
    char check;

    printf("\n\n\tEnter the Index: ");
    scanf("%d",&index);
    printf("\n\tAre you sure?[y/n]: ");
    check = getche();

    if (check == 'y'){
        printf("\n\n\tPrevious Elements of The Array: ");
        for (int i=0; i<element; i++) printf("%d ",ar[i]);

        for (int i=index; i<element-1; i++) ar[i] = ar[i+1];

        printf("\n\tNew Elements of The Array: ");
        for (int i=0; i<element-1; i++) printf("%d ",ar[i]);
    }
}

void sort_array(){
    system("cls");
    printf("\n\n");
    divider();
    printf("\n");
    printf("\tSORTING OF AN ARRAY\n");
    divider();

    printf("\n\nPrevious Elements of The Array: ");
        for (int i=0; i<element; i++) printf("%d ",ar[i]);

    for (int i=0; i<element; i++){
        for (int j=i+1; j<element; j++){
            if (ar[i]>ar[j]){
                int temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }

    printf("\nNew Elements of The Array: ");
        for (int i=0; i<element; i++) printf("%d ",ar[i]);
    getch();
}

void search_array(){
    int choice;

    system("cls");
    printf("\n\n");
    divider();
    printf("\n");
    printf("\tSEARCH AN ELEMENT OF AN ARRAY\n");
    divider();
    search_options:
    printf("\n\n\t[1] By Value\n");
    printf("\t[2] By Index\n\n");
    printf("\tEnter Your Choice: ");
    scanf("%d",&choice);

    switch(choice){
    case 1:
        search_byValue();
        break;
    case 2:
        search_byIndex();
        break;
    default:
        printf("\n\n*****Wrong Choice! Please Try Again*****");
        goto search_options;
    }
    getch();
}

void search_byValue(){
    system("cls");
    printf("\n\n");
    divider();
    printf("\n");
    printf("\tSEARCH AN ELEMENT OF AN ARRAY\n");
    divider();

    int value, f = 0, index;

    printf("\n\n\tEnter Searching Value: ");
    scanf("%d",&value);

    for (int i=0; i<element; i++){
        if (value == ar[i]){
            f = 1;
            index = i;
            break;
        }
    }

    if (f) printf("\n\tFound in index: %d",index);
    else printf("\n\tThere are no such value in the Array !!");
}

void search_byIndex(){
    system("cls");
    printf("\n\n");
    divider();
    printf("\n");
    printf("\tSEARCH AN ELEMENT OF AN ARRAY\n");
    divider();

    int index;

    printf("\n\n\tEnter Searching Index: ");
    scanf("%d",&index);

    printf("\n\tThe value of index [%d]: %d",index,ar[index]);
}

void display_array(){
    system("cls");
    printf("\n\n");
    divider();
    printf("\n");
    printf("\tDISPLAY ELEMENTS OF AN ARRAY\n");
    divider();
    printf("\n\n");

    for (int i=0; i<element; i++){
        printf("Element [%d]: %d\n",i+1,ar[i]);
    }
    printf("\nElements of the Array are : ");
    for (int i=0; i<element; i++) printf("%d ",ar[i]);
    getch();
}
