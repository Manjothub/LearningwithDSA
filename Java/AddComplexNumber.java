class ComplexNumber {
    private int real, imaginary;

    public ComplexNumber(int real, int imaginary) {
        this.real = real;
        this.imaginary = imaginary;
    }

    // Method to add two complex numbers
    public ComplexNumber add(ComplexNumber other) {
        return new ComplexNumber(this.real + other.real, this.imaginary + other.imaginary);
    }

    // Print the complex number
    public void print() {
        System.out.println(real + "+" + imaginary + "i");
    }
}

public class AddComplexNumber {
    public static void main(String[] args) {
        ComplexNumber num1 = new ComplexNumber(1, 2); // 1 + 2i
        ComplexNumber num2 = new ComplexNumber(4, 5); // 4 + 5i

        ComplexNumber result = num1.add(num2); // Add the complex numbers
        result.print(); // Output: 5+7i
    }
}
