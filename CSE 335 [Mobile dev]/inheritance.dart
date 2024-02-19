class Person{
  String? name;
  int? age;
}

class Doctor extends Person{
  List<String>? listofDegrees;
  String? hospitalName;
  void display(){
    print("Name is: $name");
    print("Age is: $age");
    print("Degrees are: $listofDegrees");
    print("Hospital name: $hospitalName");
  }
}

class specialist extends Doctor{
  String? specialization;
  void display(){
    super.display();
    print(specialization);
  }
}

void main(){
  specialist sp = specialist();
  sp.name = 'ABC';
  sp.age = 45;
  sp.listofDegrees = ['MBBS', 'FCPS'];
  sp.hospitalName = 'Apollo';
  sp.specialization = 'Cardiologist';
  sp.display();
}
