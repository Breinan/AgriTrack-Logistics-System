#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  


// Data Structure_Singly Linked List
// Stores registered crops
struct crop {
    char name[50];
    struct crop *next; 
};

// Data Structure_Queue (FIFO)
// Stores harvested items in inventory
struct item {
    char name[50];
    int qty;          
    int days;          
    struct item *next; 
};

// Data Structure_Stack (LIFO)
// Stores dispatched items for undo operations
struct undo {
    char name[50];
    int qty;
    int days;
    struct undo *next; 
};


// Linked List, Queue, and Stack
struct crop *head = NULL;
struct item *front = NULL, *rear = NULL;
struct undo *top = NULL;



// ALGORITHM 1: Linked List Insertion (add crops) 
void addCrop() {
    struct crop *newCrop, *temp;
    newCrop = (struct crop*)malloc(sizeof(struct crop));

    printf("Crop name: ");
    scanf(" %[^\n]", newCrop->name);

    newCrop->next = NULL;

    if(head == NULL) {
        head = newCrop;
    } else {
        temp = head;
        while(temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newCrop;
    }
    printf("Crop added.\n");
}

// ALGORITHM 2: Linked List Traversal (Display Crops)
void showCrop() {
    struct crop *temp = head;
    if(head == NULL) {
        printf("No crops available.\n");
        return;
    }
    printf("\n--- Crop List ---\n");
    while(temp != NULL) {
        printf("%s\n", temp->name);
        temp = temp->next;
    }
}

// ALGORITHM 3: Queue Enqueue (Add Harvest)
void addHarvest() {
    char searchName[50];
    struct crop *temp = head;
    int found = 0;

    if (head == NULL) {
        printf("Error: No crops registered yet. Please add a crop first (Option 1).\n");
        return;
    }

    printf("Enter Crop name to harvest: ");
    scanf(" %[^\n]", searchName);

    // Search crop list
    while (temp != NULL) {
        if (strcmp(temp->name, searchName) == 0) {
            found = 1;
            break;
  }
        temp = temp->next;
    }

    if (found == 0) {
        printf("Error: '%s' is not in the Crop List. Not found!\n", searchName);
        return;
    }

    // If found, enqueue into inventory
    struct item *newItem = (struct item*)malloc(sizeof(struct item));
    strcpy(newItem->name, searchName);

    printf("Quantity (kg): ");
    scanf("%d", &newItem->qty);

    printf("Days left: ");
    scanf("%d", &newItem->days);

    newItem->next = NULL;

    if(front == NULL) {
        front = rear = newItem;
    } else {
        rear->next = newItem;
        rear = newItem;
    }
    printf("Harvest added successfully!\n");
}

// ALGORITHM 4: Queue Traversal (Display Inventory)
void showInventory() {
    struct item *temp = front;
    if(front == NULL) {
        printf("No inventory.\n");
        return;
    }
    printf("\n--- Inventory ---\n");
    while(temp != NULL) {
        printf("%s | %dkg | %d days left\n", temp->name, temp->qty, temp->days);
        temp = temp->next;
}
}

// ALGORITHM 5: Stack Push (Save Dispatch for Undo)
void pushUndo(char n[], int q, int d) {
    struct undo *newUndo = (struct undo*)malloc(sizeof(struct undo));
    strcpy(newUndo->name, n);
    newUndo->qty = q;
    newUndo->days = d;
    newUndo->next = top;
    top = newUndo;
}

// ALGORITHM 6: Queue Dequeue (Dispatch Item)
void dispatch() {
    struct item *temp;
    if(front == NULL) {
        printf("Nothing to dispatch.\n");
        return;
    }
    temp = front;
    printf("Dispatched: %s\n", temp->name);

    // Save to stack for undo
    pushUndo(temp->name, temp->qty, temp->days);

 front = front->next;
    if(front == NULL) rear = NULL;
    free(temp);
}

// ALGORITHM 7: Stack Pop (Undo Dispatch)
void undoLast() {
    struct item *newItem;
    struct undo *temp;
    if(top == NULL) {
        printf("Nothing to undo.\n");
        return;
    }
    newItem = (struct item*)malloc(sizeof(struct item));
    strcpy(newItem->name, top->name);
    newItem->qty = top->qty;
    newItem->days = top->days;

    newItem->next = front;
    front = newItem;
    if(rear == NULL) rear = newItem;

    temp = top;
    top = top->next;
    free(temp);
    printf("Undo successful.\n");
}

// ALGORITHM 8: Linear Search (Find Item in Inventory)
void searchItem() {
    struct item *temp = front;
    char find[50];
    int found = 0;
    printf("Enter crop name: ");
    scanf(" %[^\n]", find);

    while(temp != NULL) {
        if(strcmp(temp->name, find) == 0) {
            printf("Found: %s | %dkg | %d days\n", temp->name, temp->qty, temp->days);
            found = 1;
        }
        temp = temp->next;
    }
if(found == 0) printf("Not found.\n");
}

// ALGORITHM 9: Bubble Sort–like (Sort by Expiry Days)
void sortItems() {
    struct item *i, *j;
    char n[50];
    int q, d;
    for(i = front; i != NULL; i = i->next) {
        for(j = i->next; j != NULL; j = j->next) {
            if(i->days > j->days) {
                strcpy(n, i->name); q = i->qty; d = i->days;
                strcpy(i->name, j->name); i->qty = j->qty; i->days = j->days;
                strcpy(j->name, n); j->qty = q; j->days = d;
     }
     }
    }
    printf("Sorted by expiry.\n");
}

// ALGORITHM 10: Condition Check (Spoilage Warning)
void spoilage() {
    struct item *temp = front;
    int found = 0;
    while(temp != NULL) {
        if(temp->days <= 2) {
            printf("WARNING: %s may spoil soon!\n", temp->name);
            found = 1;
        }
        temp = temp->next;
    }
    if(found == 0) printf("No spoilage risk.\n");
}




// MAIN MENU SYSTEM

int main() {
    int ch;
    printf("---------------------------------\n");
    printf("        WELCOME TO\n");
    printf("  AgriTrack: Farm Logistics System\n");
    printf("---------------------------------\n");

    do {
        printf("\n=========== MENU ===========\n");
        printf("1. Add Crop\n");         
        printf("2. Show Crops\n");     
        printf("3. Add Harvest\n");    
        printf("4. Show Inventory\n");  
        printf("5. Dispatch\n");         
        printf("6. Undo Dispatch\n");   
        printf("7. Search Crop\n");      
        printf("8. Sort by Expiry\n");   
        printf("9. Check Spoilage\n");   
        printf("10. Exit\n");
        printf("============================\n");

        printf("Choice: ");
        scanf("%d", &ch);

      switch(ch) {
    case 1: addCrop(); break;
    case 2: showCrop(); break;
    case 3: addHarvest(); break;
    case 4: showInventory(); break;
    case 5: dispatch(); break;
    case 6: undoLast(); break;
      case 7: searchItem(); break;
    case 8: sortItems(); break;
    case 9: spoilage(); break;
    case 10: printf("Goodbye!\n"); break;
        default: printf("Invalid choice.\n");
        }

    } while(ch != 10);

    return 0;
}
