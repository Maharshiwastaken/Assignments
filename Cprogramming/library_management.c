#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Book {
    int id;
    char title[50];
    char author [50];
    float price;
};

void addBook();
void viewBook();
void searchBook();
void updateBook();
void deleteBook();

int main(){
    int choice;

    while (1)
    {
        printf("\n LIBRARY MANAGEMENT SYSTEM\n");
        printf("1. Add Book \n");
        printf("2. View all books \n");
        printf("3. Search book\n");
        printf("4. Update Book\n");
        printf("5. Delete Book\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);


        switch (choice)
        {
        case 1: addBook(); break;
        case 2: viewBook(); break; 
        case 3: searchBook(); break;
        case 4: updateBook(); break;
        case 5: deleteBook(); break;
        case 6: exit(0);
        default : printf("Invalid Number choice \n");
        
    }
    
}
return 0;
}

void addBook() {
    FILE *fp = fopen("library.dat", "ab");
    struct Book b;
    printf("Enter the Book ID: ");
    scanf("%d", &b.id);
    fflush(stdin);
    printf("Enter Title: ");
    scanf("%s", b.title);

    printf("Enter Author : ");
    scanf("%s", b.author);
    fflush(stdin);

    printf("Enter price: ");
    scanf("%f", &b.price);

    fwrite(&b, sizeof(b), 1, fp);
    fclose(fp);

    printf("Book added successfully\n");
}


void viewBook() {
    FILE *fp = fopen("library.dat", "rb");
    struct Book b;

    if(!fp){
        printf("No records found! \n");
        return;
    }

    while (fread(&b, sizeof(b), 1, fp)){
        printf("\nID: %d\nTitle: %s\nAuthor: %s\nPrice: %.2f\n", b.id, b.title, b.author, b.price);
    }
    fclose(fp);
}


void searchBook() {
    FILE *fp = fopen("library.dat", "rb");
    struct Book b;
    int id, found = 0;

    printf("Enter Book ID to search: ");
    scanf("%d", &id);
    
    while (fread(&b, sizeof(b), 1, fp))
    {
        if(b.id == id){
            printf("\nBook Found \n Title: %s\n Author: %s\n Price: %.2f", b.title, b.author, b.price);
            found = 1;
            break;
        }

    }

    if(!found){
        printf("Book not found \n");
        fclose(fp);
    }
    

}

void updateBook(){
    FILE *fp = fopen("library.dat", "rb+");
    struct Book b;
    int id, found = 0;

    printf("Enter Book id to update: \n");
    scanf("%d", &id);

    while(fread(&b, sizeof(b), 1, fp)){
        if(b.id == id){
        printf("Enter new title: ");
        scanf("%s", b.title);
        printf("Enter new Author: ");
        scanf("%s", b.author);
        fflush(stdin);
        printf("Enter new price: ");
        scanf("%f", &b.price);

        fseek(fp, -sizeof(b), SEEK_CUR);
        fwrite(&b, sizeof(b), 1, fp);
        found = 1;
        break;
    }
    }
    if(!found){
        printf("Book not found\n");
    }
    else{
        printf("Book updated successfully\n");
        fclose(fp);
    }
}

void deleteBook() {
    FILE *fp = fopen("library.dat", "rb");
    FILE *temp = fopen ("temp.dat", "wb");
    struct Book b;
    int id, found = 0;

    printf("Enter Book ID to delete: ");
    scanf("%d", &id);

    while(fread(&b, sizeof(b), 1, fp)){
        if(b.id != id)
            fwrite(&b, sizeof(b), 1, temp);
        else
        found = 1;
    }
    fclose(fp);
    fclose(temp);
    remove("library.dat");
    rename("temp.dat", "library.dat");

    if(found){
        printf("Book deleted successfully\n");
    }
    else{
        printf("Book not found \n");
    }
}