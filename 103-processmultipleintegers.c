/* Here is your final activity of this unit. Use it to apply everything you have learned! David is fighting Goliath (again...) and it turns out that Goliath is much bigger than David thought. Fortunately David is not short of resources and he plans to send robots to fight the giant. But before launching the assault, David must evaluate the performance of these robots to ensure success. This is where you come in. You are given some data on David's robots and need to compute and output a corresponding power score.

Here is how: You should write a program that takes several lines of input from a user (see the below example). The first line of the input indicates the number of robots to be deployed. Each subsequent line shows the height, the weight, the power of the engines and a resistance rating (1,2, or 3) of each of of these robots. Your program should use this information to calculate the total power of these robots. The power of all robots is the sum of the power of each robot, where the power of an individual robot is calculated via:

(enginePower + resistance) * (weight - height) */
#include <stdio.h>

/**
 * main - Calculates the force of an army
 *
 * Return: 0
 */
 int main(void)
 {
     //Variables declaration
     int totalPower = 0, number, height, weight, power, resistance;

     printf("Please input the number of robot to be deployed:\n ");
     //Takes input from user and assigns its value to the number variable
     scanf("%d", &number);
     //Loop depending on the number of robot user inputed
     for (int i = 0; i < number; i++)
     {
         printf("Please enter the Height, Weight, Power and Resistance of the robots:\n ");
         //Collects details of power, resistance, weight and height of each robot from user
         scanf("%d%d%d%d", &height, &weight, &power, &resistance);
         //Calculates the details of height, weight, power and resistance, adds it to totalPower and goes back to the loop to get the overall power depending on the total amount of robots
         totalPower = totalPower+(power + resistance) * (weight - height);
     }
     printf("Your total battle power is: %d\n", totalPower);
     return 0;
 }
