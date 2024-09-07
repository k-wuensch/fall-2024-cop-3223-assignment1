/*********************************************************************************************
    fracturing.c
    Name: KYLE WUENSCH - UCFid: 3717858
    Date: FALL 2024
    Class: COP3223, Professor Parra

    Purpose: This program calculates distance, perimeter, area, height, and width of a circle
    given two (x,y) coordinate points. The main purpose of this assignment is to understand concepts
    regarding program fracturing through the use of functions.

    Input: Point #1 (x,y) and Point #2 (x,y) as four separate numbers

    Output: Point #1 (x,y) and Point #2 (x,y) given by user, distance, perimeter, area, width, and height of 
    circle

    *LIMITATIONS*: Inputs are assumed to be asking for numerical data in the following order:
                    1. Enter Point: x1
                    2. Enter Point: x2
                    3. Enter Point: y1
                    4. Enter Point: y2

**********************************************************************************************/
#include <stdio.h>
#include <math.h>
#define PI 3.14159

/***************************************************************************

double askForUserInput()

Purpose: Helper function to request user input for calling functions
Input: 1 value representing either Point 1 (x, y) OR Point 2 (x, y)
Output: none
Precondition: none
Postcondition: Returns a double representing the user input value

**************************************************************************/
double askForUserInput() { 
    
    // initialize variable to store user input
    double user_input = 0.0;

    // request user input
    printf("Enter Point: ");
    scanf("%lf", &user_input);

    return user_input;
}

/**************************************************************************

double distanceCalculation()

Purpose: Helper function to perform calculations for calling functions
Input: 4 values representing two (x, y) coordinates
Output: Prints Point 1 and Point 2 (x, y) for user confirmation
Precondition: none
Postcondition: Returns a double of the calculation from the provided coordinates

**************************************************************************/
double distanceCalculation() { 
    
    // initialize variables and collect user inputs
    double point_one_x = askForUserInput();
    double point_two_x = askForUserInput();
    double point_one_y = askForUserInput();
    double point_two_y = askForUserInput();
    
    // print given coordinate points
    printf("Point #1 entered: x1 = %.3f; y1 = %.3f\nPoint #2 entered: x2 = %.3f; y2 = %.3f\n", point_one_x, point_one_y, point_two_x, point_two_y);

    // calculate distance between given points and return value to caller
    return sqrt(pow(point_two_x-point_one_x,2)+pow(point_two_y-point_one_y,2));
}

/**************************************************************************

double calculateDistance()

Purpose: To provide the user with a calculated distance from the provided data
Input: Four values representing two (x, y) coordinates
Output: Prints the user given Point 1 and Point 2 (x, y) coordinates with the calculated 
distance between the given two points
Precondition: none
Postcondition: Returns a double representing the distance calculated

**************************************************************************/
double calculateDistance() {
    
    // intialize variable
    double distance = distanceCalculation();

    // print required output
    printf("The distance between the two points is %.3f\n", distance);
    
    return distance;
}

/**************************************************************************

double calculatePerimeter()

Purpose: To provide the user with a calculated circumfrence from the provided data
Input: Four values representing two (x, y) coordinates
Output: Prints the user given Point 1 and Point 2 (x, y) coordinates with the calculated 
circumfrence of the circle that comprises both points
Precondition: none
Postcondition: Returns a double of 3.0 representing how difficult I found this function to do
on a scale of 1.0[easy] to 5.0[hard]

**************************************************************************/
double calculatePerimeter() { 

    // initialize variable and perform circumfrence calculation
    double perimeter = distanceCalculation() * PI; 

    // print required output
    printf("The perimeter of the city encompassed by your request is %.3f\n", perimeter);

    return 3.0;
}


/**************************************************************************

double calculateArea()

Purpose: To provide the user with a calculated area from the provided data
Input: Four values representing two (x, y) coordinates
Output: Prints the user given Point 1 and Point 2 (x, y) coordinates with the calculated 
area of the circle that comprises both points
Precondition: none
Postcondition: Returns a double of 3.0 representing how difficult I found this function to do
on a scale of 1.0[easy] to 5.0[hard]

**************************************************************************/
double calculateArea() { 

    //initialize variable and perform area calculation
    double area = PI * pow(distanceCalculation()/2,2);

    // print required output
    printf("The area of the city encompassed by your request is %.3f\n", area);

    return 3.0;
}

/**************************************************************************

double calculateWidth()

Purpose: To provide the user with a calculated width from the provided data
Input: Four values representing two (x, y) coordinates
Output: Prints the user given Point 1 and Point 2 (x, y) coordinates with the calculated 
width of the circle that comprises both points
Precondition: none
Postcondition: Returns a double of 1.0 representing how difficult I found this function to do
on a scale of 1.0[easy] to 5.0[hard]

**************************************************************************/
double calculateWidth() { 
    
    // initialize variable
    double width = distanceCalculation();

    // print required output
    printf("The width of the city encompassed by your request is %.3f\n", width);

    return 1.0;
}

/**************************************************************************

double calculateHeight()

Purpose: To provide the user with a calculated height from the provided data
Input: Four values representing two (x, y) coordinates
Output: Prints the user given Point 1 and Point 2 (x, y) coordinates with the calculated 
height of the circle that comprises both points
Precondition: none
Postcondition: Returns a double of 1.0 representing how difficult I found this function to do
on a scale of 1.0[easy] to 5.0[hard]

**************************************************************************/
double calculateHeight() { 
    
    // initialize variable
    double height = distanceCalculation();

    // print required output
    printf("The height of the city encompassed by your request is %.3f\n", height);

    return 1.0;
}

int main(int argc, char **argv) { 
    
    // Call required functions
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}
