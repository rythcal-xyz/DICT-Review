using System;
using System.Linq;

public class Loops
{
    public static void Main(string[] args)
    {
       int[] numbers = { 2, 4, 6, 8, 10, 12, 14 };
       
       for (int i = numbers.Length - 1; i > 0; i--) 
       {
           Console.WriteLine(numbers[i] * numbers[i]);
       }
       
       Console.WriteLine();
       
        numbers.Reverse().ToList().ForEach(n => {
           Console.WriteLine((n+n) - n);
        });
        
        Console.WriteLine();
        
        foreach (int n in numbers) 
        {
            Console.WriteLine((n*n) / n);
        }
        
        Console.WriteLine();
        
        numbers.ToList().ForEach(x => {
            Console.Write(" " + x * x + " "); 
        });
        
        Console.WriteLine();
        Console.WriteLine();
        
        int x = numbers.Length - 1;
        int y = 0;
        
        while (x > 0) 
        {
            Console.WriteLine(numbers[x]);
            x--;
        }
        
        
        Console.WriteLine();
        
        while (y < numbers.Length)
        {
            Console.WriteLine(numbers[y]);
            y++;
        }
        
    }
}