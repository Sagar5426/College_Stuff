class Example {
    int x;
    
    Example(int x) {
        this.x = x; // Differentiates between instance variable and parameter
    }
    
    void display() {
        System.out.println("Value: " + this.x);
    }
    
    public static void main(String[] args) {
        Example obj = new Example(10);
        obj.display();
    }
}
