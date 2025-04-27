import java.util.*;

class A  {
    
    void display() {
        System.out.println("A class");
    }
    A() {
        display();
    }
}
class B extends A {
    void display() {
        System.out.println("B class");
    }
    B() {
        display();
    }
}
class C extends A {
    void display() {
        System.out.println("C class");
    }
    C() {
        display();
    }
}

public class prac {

    public static void main(String[] args) {
        // A a = new A();
        // B b = new B();
        C c = new C();

        // a.display();
        // c.display();
    }
}