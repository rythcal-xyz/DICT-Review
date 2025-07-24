using System;
using System.Threading;

public class TrafficLightSimulator
{
    // Simulate a traffic light system that cycles through 
    // Green (60s), Yellow (5s), and Red (55s), 
    // for a total of 10 cycles.

    // Enum for light states
    public enum TrafficLight
    {
        Green,
        Yellow,
        Red
    }

    public void SimulateLight(TrafficLight light, int duration)
    {
        for (int i = 1; i <= duration; i++)
        {
            Console.WriteLine(light + " Time: " + i + "s");
            Thread.Sleep(50); // Slow down simulation for effect
        }
    }

    public static void Main(string[] args)
    {
        TrafficLightSimulator ts = new TrafficLightSimulator();
        TrafficLight currentLight;

        int greenDuration = 60;
        int yellowDuration = 5;
        int redDuration = 55;
        int cycleCount = 10;

        for (int cycle = 1; cycle <= cycleCount; cycle++) 
        {
            Console.WriteLine($"\n---- Cycle {cycle} ----");

            currentLight = TrafficLight.Green;
            ts.SimulateLight(currentLight, greenDuration);

            currentLight = TrafficLight.Yellow;
            ts.SimulateLight(currentLight, yellowDuration);

            currentLight = TrafficLight.Red;
            ts.SimulateLight(currentLight, redDuration);
        }

        Console.WriteLine("\nSimulation Complete");
    }
}
