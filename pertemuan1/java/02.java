class Employee{
    int id;
    String name;
    float salary;
    void insert(int i, String n, float s){
        id = i;
        name = n;
        salary = s;
    }
    void display(){
        System.out.println(id + " " + name + " " + salary);
    }
}

public class AdaMetode{
    public static void main(String[] args) {
        Employee employee1 = new Employee();
        Employee employee2 = new Employee();
        Employee Employee3 = new Employee();
        employee1.insert(101, "Rizki", 45000);
        employee2.insert(102, "Rizki", 25000);
        employee3.insert(103, "Rizki", 15000);
        employee1.display();
        employee2.display();
        employee3.display();
    }
}
