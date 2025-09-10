class Person {
    String NAME = "Person";

    public void Display() {
        System.out.println(NAME);
    }
}

class Employee extends Person {
    // This field hides the 'name' field in the superclass
    String name = "Employee";

    @Override
    public void Display() {
        super.Display();
        System.out.println(name);
    }
}

public class supr {
    public static void main(String[] args) {
        Employee emp = new Employee();
        emp.Display();
    }
}
