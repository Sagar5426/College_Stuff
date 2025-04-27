class Parent {
    void show() {
        System.out.println("Parent class method");
    }
}
class Child extends Parent {
    void show() {
        super.show(); // Calls parent method
        System.out.println("Child class method");
    }
    
    public static void main(String[] args) {
        Child obj = new Child();
        obj.show();
    }
}
