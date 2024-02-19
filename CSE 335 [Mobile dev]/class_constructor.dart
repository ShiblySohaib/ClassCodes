class Teacher{
  String? name;
  int? age;
  double? salary;
  Teacher(String name, int age, double salary){
    print("Teacher is created");
    this.name= name;
    this.age= age;
    this.salary=salary;

  }
  void display(){
    print("Name: $name");
    print("Age: $age");
    print("Salary: $salary");
  }
}
void main(){
  Teacher teacher = Teacher("Sazin", 24, 1000000);
  teacher.display();
}
