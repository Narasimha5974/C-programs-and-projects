#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to store ID card details
struct IDCard {
    char name[50];
    char idNumber[20];
    char department[30];
    char section[20];
    char contact[15];
    char email[30];
};

// Function to display the ID card
void displayIDCard(struct IDCard card) {
    printf("\n=====================================\n");
    printf("|            ID CARD                |\n");
    printf("=====================================\n");
    printf("Name       : %s\n", card.name);
    printf("ID Number  : %s\n", card.idNumber);
    printf("Department : %s\n", card.department);
    printf("Section    : %s\n", card.section);
    printf("Contact    : %s\n", card.contact);
    printf("E-Mail     : %s\n", card.email);
    printf("=====================================\n");
}

// Function to save the ID card to a file
void saveIDCardToFile(struct IDCard card) {
    FILE *file = fopen("IDCards.txt", "a");
  
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }
    
    fprintf(file, "Name: %s\nID Number: %s\nDepartment: %s\nSection: %s\nContact: %s\n\nE-Mail: %s\n", 
            card.name, card.idNumber, card.department,card.section, card.email, card.contact);
    fclose(file);
    printf("ID card saved to file successfully!\n");
}

int main() {
    struct IDCard card;
    char choice;

    do {
    printf("                     ************ WELCOME TO ID CARD GENERATOR ************");
    
        printf("\nEnter Name: ");
        fgets(card.name, sizeof(card.name), stdin);
        card.name[strcspn(card.name, "\n")] = 0; // Remove trailing newline

        printf("Enter ID Number: ");
        fgets(card.idNumber, sizeof(card.idNumber), stdin);
        card.idNumber[strcspn(card.idNumber, "\n")] = 0;

        printf("Enter Department: ");
        fgets(card.department, sizeof(card.department), stdin);
        card.department[strcspn(card.department, "\n")] = 0;
        
        printf("Enter Section: ");
        fgets(card.section, sizeof(card.section), stdin);
        card.section[strcspn(card.section, "\n")] = 0;

        printf("Enter Contact Number: ");
        fgets(card.contact, sizeof(card.contact), stdin);
        card.contact[strcspn(card.contact, "\n")] = 0;
        
        printf("Enter your E-mail Address: ");
        fgets(card.email, sizeof(card.email), stdin);
        card.email[strcspn(card.email, "\n")] = 0;

        // Display ID card
        displayIDCard(card);

        // Ask if the user wants to save the ID card
        printf("\nDo you want to save this ID card to a file? (y/n): ");
        scanf(" %c", &choice);

        if (choice == 'y' || choice == 'Y') {
            saveIDCardToFile(card);
        } 
        else {
            printf("ID card not saved.\n");
        }

        // Ask if the user wants to create another ID card
        printf("\nDo you want to create another ID card? (y/n): ");
        scanf(" %c", &choice);
        getchar(); // Consume the newline character left by scanf

    } while (choice == 'y' || choice == 'Y');

    printf("Thank you for using the ID Card Generator!\n");
    
    printf("HAVE A NICE DAY!");
    return 0;
}
