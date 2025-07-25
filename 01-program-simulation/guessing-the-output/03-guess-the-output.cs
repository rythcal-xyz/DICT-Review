using System;

public class GuessTheOuput3
{
    public static void Main(string[] args)
    {
        int battery = 100;
        while (battery > 0)
        {
            battery -= 25;
            Console.WriteLine("Battery: " + battery + "%");
        }
        Console.WriteLine("Device shut down");  
    }
}