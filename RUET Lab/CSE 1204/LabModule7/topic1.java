class A {
    int x;

    public A() {
        x = 0;
    }

    public A(int x) {
        this.x = x;
    }

    public int getX() {
        return (x + 10);
    }
}

class B extends A {
    int x = 20;

    public int getX() {
        return (x + 10);
    }

    public void displayX() {
        System.out.println(super.x);
    }

    public void callGetX() {
        int result = super.getX();
        System.out.println("Result of getX() in class A: " + result);
    }

    public B() {
        super(5);
    }
}

public class topic1 {
    public static void main(String[] args) {
        B bObj = new B();

        bObj.displayX();
        bObj.callGetX();
    }
}
