
public class ExceptionExample {
    public static void main(String[] args) {
        try {
            int a = 10, b = 0;
            int c = a / b; // This will throw an ArithmeticException
        } catch (ArithmeticException e) {
            System.out.println("Exception caught: " + e.getMessage());
        } finally {
            System.out.println("This block always executes.");
        }
    }
}
