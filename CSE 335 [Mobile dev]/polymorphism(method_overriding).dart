class vehicle{
  void run(){
    print("vehicle is running");
  }
}

class car extends vehicle{
  @override
  void run(){
    print("Car is running");
  }
}

class bus extends car{
  @override
  void run(){
    print("Bus is running");
  }
}

void main(){
  vehicle v = vehicle();
  v.run();
  car c = car();
  c.run();
}
