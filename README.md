# AgriTrack: Farm Logistics System

## Project Overview & Purpose
AgriTrack is a digital logbook designed to help farmers organize crop cultivation and manage harvest inventory.

**Our Goal:** We want to prevent food waste. The system is designed to ensure that the oldest stock is sold or dispatched first. It also includes helpful features like spoilage warnings so farmers know which items need to be moved immediately


## Data Structures
* **Linked List:** We used this for the Crop List because it’s flexible and we can keep adding as many different types of crops as we want.
* **Queue:** This handles the inventory. It follows the FIFO (First-In, First-Out) rule, which is suit for logistics because the first item harvested is the first one out.
* **Stack:** It uses LIFO (Last-In, First-Out) to know the very last thing we dispatched so we can bring it back if we made a mistake.

## Algorithms
* **Linear Search:** We used this to scan through the inventory when searching for a specific crop by name. It checks each item one by one until it finds a match.

* **Bubble Sort:** We used this to reorganize our inventory. It compares items and swaps them if they are in the wrong order, ensuring the items closest to expiring move to the top of the list.

## Key Features
* **Mistake Proof:** Use the Undo feature to instantly restore a dispatched item.
* **Search Crop:** Easily find any crop in your master list to check if it exists before harvesting.
* **Sort by Expiry:** Automatically sort the storage so items closest to expiring are shown at the top.
* **Safety Alerts:** Automatically flags items that are within 2 days of spoiling.


## ## Compilation and Execution Instructions

To run this application, make sure you have a C compiler (such as **Dev-C++** or **GCC**) installed on your system.

### ### Step 1: Get the Code from GitHub
There are two ways to get the project files from this repository:
* **Option A:** Click the green **Code** button at the top right of this page, select **Download ZIP**, and extract the files on your computer.
* **Option B:** Open your terminal or command prompt and clone the repository:
  ```bash
  git clone [https://github.com/Breinan/AgriTrack-Logistics-System.git](https://github.com/Breinan/AgriTrack-Logistics-System.git)
### Step 2: Open the Code in Dev-C++
Open Dev-C++ on your computer.

Go to File > Open Project or File (or press Ctrl + O).

Locate and select the main.c file from the folder you downloaded or cloned.


### Step 3: Compile and Run the Application
Go to the Execute menu at the top of the screen.

Select Compile & Run (or simply press F11 on your keyboard).

Check the Compile Log at the bottom of the screen to ensure there are no errors.

A console window will appear showing the WELCOME TO AgriTrack: Farm Logistics System menu.

---

## ## Academic Integrity and AI Use

### ### AI Tools Used
* **Primary Tools:** Google Gemini, ChatGPT, and Dola

---

### ### AI Prompts Used
* *"How do I make an Undo feature in C using a Stack?"*
* *"Explain how Bubble Sort works on a linked list."*
* *"How do I use Linear Search to check user inputs against a crop list in C?"*
* *"Help us fix pointer errors when adding and removing items from a queue."*

---

### ### How It Was Implemented
* We used AI to help us find and fix errors in our code.
* AI helped us fix broken pointers and memory bugs so the code runs smoothly.
* We used AI to make sure our program compiles perfectly in Dev-C++ without any warnings.
