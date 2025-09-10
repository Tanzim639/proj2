import java.util.Scanner;

public class topic1 {

    public static void main(String[] arg) {
        System.out.println("F A Tanzim");
        System.out.println("Rajshahi Bangladesh");

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the first integer: ");
        int num1 = scanner.nextInt();

        System.out.print("Enter the second integer: ");
        int num2 = scanner.nextInt();

        int max = (num1 > num2) ? num1 : num2;

        System.out.println("The maximum of " + num1 + " and " + num2 + " is: " + max);

        double[] numbers = new double[10];

        for (int i = 0; i < 10; i++) {
            System.out.print("Enter number " + (i + 1) + ": ");
            numbers[i] = scanner.nextDouble();
        }

        double largest = numbers[0];
        double smallest = numbers[0];

        double sum = 0;

        for (int i = 0; i < 10; i++) {
            if (numbers[i] > largest) {
                largest = numbers[i];
            }
            if (numbers[i] < smallest) {
                smallest = numbers[i];
            }
            sum += numbers[i];
        }

        double average = sum / 10.0;

        System.out.println("Largest number: " + largest);
        System.out.println("Smallest number: " + smallest);
        System.out.println("Average: " + average);

    }
}
