//Write a Program to Find Factorial of a Number in Java.

public class Factorial {
    public static void main(String[] args) {
        int input = 5;
        int result = 1;
        for (int i =1; i <=input;i++){
            result*=i;
        }
        System.out.println(result);
    }
}
