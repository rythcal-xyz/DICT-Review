// Introduction to Program Simulation and Control Structures

//      In computer programming, simulation allows us to imitate the behavior of real-world processes 
//      by executing sequences of instructions in a controlled manner. This is essential for modeling, 
//      testing, and demonstrating how a program responds to different scenarios. 
//      One of the most important aspects of creating simulations is controlling the flow of execution, 
//      such as repeating actions and making decisions based on conditions.

// Below are some fundamental structures used to build simulations and manage program flow:



// Program Simulation

//      A program simulation involves designing and running code to reproduce the 
//      actions of a situation or process you have created. 
//      Simulations help programmers observe outcomes, test logic, 
//      and predict how systems will behave under various conditions.



// Loop

//      A loop is a programming structure that repeats a sequence of instructions until a specific condition is met. 
//      Loops are essential for automating repetitive tasks, processing data collections, and managing time-based operations.

//      Common types of loops:
//          For Loop
//          While Loop
//          Do While Loop



// For Loop

//      A for loop provides a concise way of writing looping structures. 
//      Unlike a while loop, a for statement combines initialization, condition checking, 
//      and increment/decrement in a single line, which makes it shorter and easier to debug.

for (int i = 0; i < 10; i++)
{
    cout << "This is a FOR LOOP " << i << endl;
}


// While Loop

//      A while loop also checks a condition before entering the loop, 
//      but its structure is less compact than a for loop. 
//      It requires initialization before the loop 
//      and updating variables inside the loop body.

int i = 0;
while (i < 10)
{
    cout << "This is a WHILE LOOP " << i << endl;
    i += 1;
}


// Do While Loop

//      A do while loop is similar to other loops but differs in 
//      that it always executes the loop body at least once, 
//      because the condition is checked after the loop executes.


int i = 0;
do
{
    cout << "This is a DO WHILE LOOP " << i << endl;
    i++;
}
while (i < 20);



// Arithmetic Operators
// + - * / %

int firstNum = 2; 
int secondNum = 5;
int equiv = 0;

// Addition
equiv = firstNum + secondNum;
cout << equiv << endl;

// Subtraction
equiv = firstNum - secondNum;
cout << equiv << endl;

// Multiplication
equiv = firstNum * secondNum;
cout << equiv << endl;

// Division
equiv = firstNum / secondNum;
cout << equiv << endl;

// Modulus
equiv = firstNum % secondNum;;
cout << equiv << endl;


// Relational Operators

// < - less than
//  > - greater than
//  <= - less than equal
//  >= - greater than equal
// == - equal to
// != - not equal to

// int x = 10;

if (x < 20) {      // True
    // Execute this code if true
    cout << 'Yes it is less than' << endl;
} else {           // False
    // Execute this if false
}

// False
if (x > 12) {
    // Execute this code if true
    cout << 'Yes it is less than' << endl;
}


if (x <= 11) {          // True
    // Execute if true 
} else if (x <= 10) {  // True 
    // Execute if true
} else {               // False
    // Execute if false
}


if (x >= 8) {           // True
    // Execute if true 
} else if (x >= 10) {   // True
    // Execute if true
} else {                // False
    // Execute if false
}

// Since the two were true, the first statement to be execute, the rest will ignore.


if (x == 10) {          // True
    // Execute if true
} else if (x == '10') { // False
    // Execute if true
} else {                // False
    // Execute if fale
} 

if (x != '10') {     // True
    // Execute if true
} else if (x != 10) {// False
    // Execute if true
} else {                // False
    // Execute if false
}

// Logical Operators

// && - AND
// || - OR

int num1 = 1234;
//      True           True         -       True       
if (num1 != 100 && num1 >= 1000) {
    // Execute if true
} else {
    // Execute if false
}

//      True          False        -       False
if (num1 != 100 && num1 < 1000) {
    // Execute if true
} else {
    // Execute if false
}

//      False           True       -       True
if (num1 < 1000 || num1 <= 1300) [
    // Execute if true
] else {
    // Execute if false
}

//      True            True       -       True
if (num1 < 2000 || num1 >= 1000) {
    // Execute if true
} else {
    // Execute if false
}

//      False           False      -       False
if (num1 == 1000 || num1 != 1234) {
    // Execute if true
} else {
        // Execute if false
}

