package employee;

import employee.emp;
import java.util.Scanner;

public class EmpPay {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        emp e = new emp();

        System.out.print("Enter name: ");
        e.name = sc.next();
        System.out.print("Enter empid: ");
        e.empid = sc.nextInt();
        System.out.print("Enter basic pay: ");
        e.basic_pay = sc.nextDouble();

        e.calculate();

        System.out.println("Gross Pay: " + e.gross_pay);
        System.out.println("Net Pay: " + e.net_pay);
        sc.close();
    }
}
