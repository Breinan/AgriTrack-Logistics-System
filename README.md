# AgriTrack: Farm Logistics System

## Project Overview & Purpose
AgriTrack is a simple, user-friendly tool built in C to help farmers stay organized. It acts as a digital logbook for tracking which crops are being grown and managing the harvest inventory. 

**Our Goal:** We want to prevent food waste. By using a Data Structures & Algorithms logic, the system makes sure that the oldest stock is sold or dispatched first. It also includes helpful features like spoilage warnings so farmers know which items need to be moved immediately.


## Data Structures
* **Linked List:** We used this for the Crop List because it’s flexible and we can keep adding as many different types of crops as we want.
* **Queue:** This handles the inventory. It follows the FIFO (First-In, First-Out) rule, which is suit for logistics because the first item harvested is the first one out.
* **Stack:** It uses LIFO (Last-In, First-Out) to know the very last thing we dispatched so we can bring it back if we made a mistake.

## Algorithms
* **Linear Search:** We used this to scan through the inventory when searching for a specific crop by name. It checks each item one by one until it finds a match.

* **Bubble Sort:** We used this to reorganize our inventory. It compares items and swaps them if they are in the wrong order, ensuring the items closest to expiring move to the top of the list.

## Key Features
* **Crop Management:** Keep a record of all the crops we grow or available in our farm
* **Smart Inventory:** Track quantities and how many days are left until items spoil.
* **Easy Dispatch:** Remove items from stock 
* **Mistake Proof:** Use the Undo feature to instantly restore a dispatched item.
* **Safety Alerts:** Automatically flags items that are within 2 days of spoiling.
* **Summary Reports:** Get a quick look at total stock count and weight.


## 1. Get the Source Code
You can get the project files in two ways:

Clone the Repository: Open your terminal and type:

https://github.com/Breinan/AgriTrack-Logistics-System

Simply download the main.c file from this repository.

## 2. Compile the Program
Open your terminal or Command Prompt in the folder where the file is saved 

## 3. Run the Application
Once compiled, start the program by typing:

On Windows: agritrack.exe

On Mac or Linux: ./agritrack
## Academic Integrity & AI Attribution
This project was created for academic submission by our group (4 members).

## AI Tools Used
* Google, ChatGPT, and Dola

## How it helped
We used these tools to brainstorm and understand the logic for the Linear Search, Bubble Sort, and Undo functions. The AI also helped explain technical concepts we were unfamiliar with.
