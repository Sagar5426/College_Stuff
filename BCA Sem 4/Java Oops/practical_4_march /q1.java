

import java.util.*;

// Write a program to create An abstract class employee with abstract methods calculateSalary() and  displayinfo(). 
// Create a Subclass Manager and programmer that extend the employee class and implement the 
// respective methods to. Calculate Salary and display information for each role.

abstract class employee {
    abstract int calculateSalary();
    abstract void displayinfo();
}

class Manager extends employee {
    String name;
    int baseSalary = 20000;
    int bonus = 10000;

    int calculateSalary() { 
        return baseSalary+bonus;
    }

    void displayinfo() {
        System.out.println("Name of employee " + name + "\n BaseSalary: " + baseSalary);
    }

    Manager(String name, int baseSalary, int bonus) {
        this.name = name;
        this.baseSalary = baseSalary;
        this.bonus = bonus;
    }

    Manager(){};
}

class programmer extends employee {
    String name;
    int baseSalary = 50000;
    int bonus = 20000;

    int calculateSalary() { 
        return baseSalary+bonus;
    }

    void displayinfo() {
        System.out.println("Name of employee " + name + "\n BaseSalary: " + baseSalary);
    }

    programmer(String name, int baseSalary, int bonus) {
        this.name = name;
        this.baseSalary = baseSalary;
        this.bonus = bonus;
    }
    programmer() {};
}

public class q1 {
    public static void main(String[] args) {
        Manager manager = new Manager();
        Manager manager2 = new Manager("Sagar", 20000, 3000);

        System.out.println(manager2.calculateSalary());
    }
}
