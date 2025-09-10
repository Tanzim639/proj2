interface AI {
    void PrintA();
}

interface BI {
    void PrintB();
}

interface CI {
    void PrintC();
}

class A implements AI {
    public void PrintA() {
        System.out.println("Printing from class A");
    }
}

class B extends A implements BI {
    public void PrintB() {
        System.out.println("Printing from class B");
    }
}

class C extends B implements CI {
    public void PrintC() {
        System.out.println("Printing from class C");
    }  
}

public class topic2 {
    public static void main(String[] args) {
        C cObj = new C();

        cObj.PrintA(); 
        cObj.PrintB(); 
        cObj.PrintC();
    }
}
