public class AgeVerification {
    public static void main(String[] args) {
        int age = 17; // Change this to test different values
        if (age < 18) {
            throw new ArithmeticException("Access denied!");
        } else {
            System.out.println("Access granted!");
        }
    }
}
