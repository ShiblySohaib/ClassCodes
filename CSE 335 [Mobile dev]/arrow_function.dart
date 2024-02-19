int add(int n1, int n2)=>n1+n2;
int sub(int n1, int n2)=>n1-n2;
int mul(int n1, int n2)=>n1*n2;
double div(int n1, int n2)=>n1/n2;
int div2(int n1, int n2)=>n1~/n2;


void main(List<String> arguments) {
  int num1 = 100;
  int num2 = 30;
  print("Addition is: ${add(num1, num2)}");
  print("Subtraction is: ${sub(num1, num2)}");
  print("Multiplication is: ${mul(num1, num2)}");
  print("Division is: ${div(num1, num2)}");
  print("int div is: ${div2(num1, num2)}");
}
