import java.util.Scanner;

public class SimpleInput {
    public static void main(String[] args) {
        // Create a Scanner object to read input
        Scanner scanner = new Scanner(System.in);

        // Prompt the user for input
        System.out.println("Enter your name:");

        // Read a string input (name)
        String name = scanner.nextLine();

        // Prompt the user for an integer input
        System.out.println("Enter your age:");

        // Read an integer input (age)
        int age = scanner.nextInt();

        // Display the entered information
        System.out.println("Hello " + name + ", you are " + age + " years old.");
    }
}
