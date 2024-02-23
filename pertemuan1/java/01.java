package perkenalan;

class Student{
    int id;
    String name;
}

public static void main(String[] args) {
    Student student1 = new Student();
    student1.id = 1;
    student1.name = "Rizki";
    System.out.println(student1.id);
    System.out.println(student1.name);
}

//contoh v2.0
class KelasDiluar{
    public static void main(String[] args) {
        Student student1 = new Student();
            student1.id = 1;
            student1.name = "Rizki";
        System.out.println(student1.id);
        System.out.println(student1.name);
    }
}