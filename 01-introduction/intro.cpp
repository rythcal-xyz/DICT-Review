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
