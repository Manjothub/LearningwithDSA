//Write a Program to Swap Two Numbers
public class SwapTwoNumbers {
    public static void main(String[] args) {
        int a = 2;
        int b = 5;
        int temp = 0;

        // Before swapping
        System.out.println("Number Before Swapping: a = " + a + ", b = " + b);

        // Swapping
        temp = a;
        a = b;
        b = temp;

        // After swapping
        System.out.println("Number After Swapping: a = " + a + ", b = " + b);
    }
}
