# AgriTrack: Farm Logistics System

## Project Overview & Purpose
AgriTrack is a simple, user-friendly tool built in C to help farmers stay organized. It acts as a digital logbook for tracking which crops are being grown and managing the harvest inventory. 

**Our Goal:** We want to prevent food waste. By using a Data Structures & Algorithms logic, the system makes sure that the oldest stock is sold or dispatched first. It also includes helpful features like spoilage warnings so farmers know which items need to be moved immediately.


## Data Structures
* **Linked List:** We used this for the Crop List because it’s flexible and we can keep adding as many different types of crops as we want.
* **Queue:** This handles the inventory. It follows the FIFO (First-In, First-Out) rule, which is suit for logistics because the first item harvested is the first one out.
* **Stack:** It uses LIFO (Last-In, First-Out) to know the very last thing we dispatched so we can bring it back if we made a mistake.

## Algorithms
* **Linked List Insertion:** Adds a new crop node at the end of the linked list.

* **Linked List Traversal:** Iterates through the crop list to display all crops.

* **Queue Enqueue:** Adds a harvested item to the rear of the inventory queue.

* **Queue Traversal:** Iterates through the queue to display all inventory items.

* **Stack Push:** Saves a dispatched item onto the stack for undo.

* **Queue Dequeue:** Removes the oldest item from the inventory queue.

* **Stack Pop:**  
Restores the last dispatched item back into the queue.

* **Linear Search:** Searches for a crop in the inventory queue.

* **Bubble Sort–like Algorithm:**  Sorts inventory items by expiry days using data swapping.

* **Condition Check:** Checks if any items have 2 days left and warns of spoilage.

## Key Features
* **Crop Management:** Keep a record of all the crops we grow or available in our farm
* **Smart Inventory:** Track quantities and how many days are left until items spoil.
* **Easy Dispatch:** Remove items from stock 
* **Mistake Proof:** Use the Undo feature to instantly restore a dispatched item.
* **Safety Alerts:** Automatically flags items that are within 2 days of spoiling.


## Academic Integrity & AI Attribution
This project was created for academic submission by our group (4 members).

## AI Tools Used
* Google and ChatGPT

## How it helped
We used these tools to brainstorm and understand the logic for the Linear Search, Bubble Sort, and other algorithms we were unfamiliar with.
