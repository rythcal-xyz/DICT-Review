using System;

public class GuessTheOuput1
{
    public static void Main(string[] args)
    {
        for (int floor = 1; floor <= 5; floor++)
        {
            if (floor == 3)
                Console.WriteLine("Stopping at floor 3");
            else
                Console.WriteLine("Passing floor " + floor);
        }
    }
}