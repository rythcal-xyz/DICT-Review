using System;

public class HelloWorld
{
    public static void Main(string[] args)
    {
        Random rnd = new Random();
        
        int randomNumber = rnd.Next(1, 11);
        int input = 0;
        int tries = 0;
        
        for (int attempts = 5; attempts > 0; --attempts) 
        {
            Console.Write("Guess a number to (1 - 10) : ");     
            input = Convert.ToInt32(Console.ReadLine());
            ++tries;
            
            if (input == randomNumber) {
                Console.WriteLine($"Correct! you guess it in {tries} tries.");
                break;
            } else {
                Console.WriteLine($"Wrong guess! Attempts left: {--attempts}");
            }
        }
        
        if (input != randomNumber) 
        {
            Console.WriteLine("Failed..");
        }
    }
}