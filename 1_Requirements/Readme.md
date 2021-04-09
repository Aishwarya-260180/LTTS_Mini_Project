# Requirements
## Introduction
 * This project includes various methods of searching and sorting the numbers given by users. This projects helps me to play with number and understand the logic how can numbers be stored and accessed back to perform operations.
 * This topic was chosen because it gives me an opportunity to implement efficient data structures and provides me flexibilty to understand multiple C programming concepts.

## Research
### Patient Management Software System Features and Benefits
A health care providers main aim is, caring for patients and the buildup of everyday tasks like paperwork, scheduling and billing can get in the way of that. What is patient management software anyway? A patient management system is also known as clinic management software, patient manager software, medical patient software or medical practice management software (MPM). It refers to a number of efficient automated systems designed for tracking patient information, diagnoses, prescriptions, interactions and encounters within healthcare organizations like medical clinics or hospitals.

Some of these software applications focus on general patient management while others address specific processes such as inpatient tracking or blood testing. What they all have in common is that they make your job as a care provider smoother and more manageable.

### Benefits
It is been used by users who wants their numbers to be sorted or searched among many numbers.



## Cost and Features with Time 
| Time | Feature | Cost |
| ----- | ----- | ----- |
| 8

## Defining Our System
### Certain assumptions:
* Our system will interact with users
    
![Description](https://github.com/arc-arnob/LnT_Mini_Project/blob/main/1_Requirements/system.png)
### Explanation:
* Sorting Searching Application have few inbuilt features like:
    * Taking input by user
    * Choose among search or sort option
    * Choose among multiple search techniques
    * Choose among multiple sort techniques
    * Provide output to user
    



## SWOT ANALYSIS
![SWOT Analysis](https://github.com/arc-arnob/LnT_Mini_Project/blob/main/1_Requirements/swot.png)

# 4W&#39;s and 1&#39;H

## Who:
* Small size users who wants to sort or search data with different techniques available in C Programming Language.

## What:
* Many users are not able to afford high systems and hence still depend on manual sorting and searching systems.

## When:
* This can be used whenever any searching or sorting is needed.

## Where:
* This problem is expected to surface in all needed situations.

## How:
* This problem may reduce the time taken to sort and search and helps in better understanding of different Sorting and Searching techniques available in C Programming Language.

# Detail requirements
## High Level Requirements: 
| ID | Description | Category | Status | 
| ----- | ----- | ------- | ---------|
| HR01 | User shall be able to enter size of array | Techincal | TBD-S1 | 
| HR02 | User shall be able to enter numbers  | Techincal | TBD-S1 |
| HR03 | User shall be able to choose among search or sort | Techincal | TBD-S1 |
| HR04 | User shall be able to choose among different searching techniques | Techincal | TBD-S1 |
| HR05 | User shall be able to choose among different sorting techniques | TBD-S1 |
| HR06 | User shall be able to re-enter numbers | Techincal | TBD-S1 |
| HR07 | User shall be able to exit | Techincal | TBD-S1 |
| HR08 | Data should sorted or searched for element accurately | Scenario | FUTURE |
##  Low level Requirements:
 
| ID | Description | HLR ID | Status (Implemented/Future) |
| ------ | --------- | ------ | ----- |
| LR01 | User shall be able to enter the size of array i.e, user should provide number of elements that he/she wants to search or sort. This acts as size of array here array is the data structure used to store the numbers which are used to search or sort based on user input. | HR01 | TBD-S1 |
| LR02 | User shall be able to enter the numbers as input, here we use the previously entered input i.e, size of array as barier to store that many numbers in the array. Numbers entered should not exceed or recede the size of array. | HR02 | TBD-S1 |
| LR03 | As the next step user is required to choose between sort or search based on his requirements, If he chooses sort various sorting techniques will be displayed and if he chooses search various searching techniques will be displayed in which he needs to choose further. | HR03 | TBD-S1 |
| LR04 | If user chooses search in above scenario he will be provided with various searching techniques like linear search, binary search as output. He is needed to choose technique which he wants to apply for searching among the numbers he entered previously. | HR04 | TBD-S1 |
| LR05 | If user chooses sort in above scenario he will be provided with various sorting techniques like selection sort, merge sort, bubble sort, heap sort,quick sort, insertion sort as output. He is needed to choose technique which he wants to apply for sorting among the numbers he entered previously | HR05 | TBD-S1 |
| LR06 | If user wish to re-enter the numbers that he/she is using for searching and sorting then he/she should be provided with option re-enter to change the numbers. | HR06 | TBD-S1 |
| LR07 | User can exit the system if he/she doesnt wishes to continue with any activity of searching or sorting of the system. User should be provided with the option to exit system with Thank you message. | HR07 | TBD-S1 |
| LR08 | All the operations of searching or sorting using different techniques should yeild at accurate results. | HR08 | TBD-S1 |

