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

// Array to store ID cards
#define MAX_CARDS 100
struct IDCard cards[MAX_CARDS];
int cardCount = 0; // Number of ID cards created

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
    
    fprintf(file, "Name: %s\nID Number: %s\nDepartment: %s\nSection: %s\nContact: %s\nE-Mail: %s\n\n", 
            card.name, card.idNumber, card.department, card.section, card.contact, card.email);
    fclose(file);
    printf("ID card saved to file successfully!\n");
}

// Function to display all created ID cards
void displayAllIDCards() {
    if (cardCount == 0) {
        printf("\nNo ID cards created yet.\n");
        return;
    }

    printf("\n************ All Created ID Cards ************\n");
    for (int i = 0; i < cardCount; i++) {
        displayIDCard(cards[i]);
    }
}

// Function to display the total count of ID cards created
void displayCount() {
    printf("\nTotal ID cards created: %d\n", cardCount);
}

int main() {
    struct IDCard card;
    char choice;

    while (1) {
        // Menu
        printf("\n************ ID CARD GENERATOR ************\n");
        printf("1. Create a new ID Card\n");
        printf("2. Display total ID cards created\n");
        printf("3. View all created ID cards\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);
        getchar(); // Consume the newline character left by scanf

        switch (choice) {
            case '1':
                // Create a new ID card
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
                    if (cardCount < MAX_CARDS) {
                        cards[cardCount++] = card;  // Save the card in the array
                    } else {
                        printf("\nCannot store more ID cards, storage limit reached.\n");
                    }
                } 
                else {
                    printf("ID card not saved.\n");
                }
                break;

            case '2':
                // Display total ID cards created
                displayCount();
                break;

            case '3':
                // View all created ID cards
                displayAllIDCards();
                break;

            case '4':
                // Exit the program
                printf("Thank you for using the ID Card Generator!\n");
                printf("HAVE A NICE DAY!\n");
                return 0;

            default:
                // Handle invalid choices
                printf("Invalid choice! Please select a valid option.\n");
                break;
        }
    }

    return 0;
}


Why we should take while(1)
