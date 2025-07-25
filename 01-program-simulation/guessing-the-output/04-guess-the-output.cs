using System;

public class GuessTheOuput4
{
    public static void Main(string[] args)
    {
        bool isOn = false;

        for (int i = 0; i < 4; i++)
        {
            isOn = !isOn;
            Console.WriteLine(isOn ? "Light On" : "Light Off");
        }
    }
}
