import java.lang.*;
public class A {
        private int a;
        private int b;
    
        public A(int a, int b) {
            this.a = a;
            this.b = b;
        }
    
        public void swapValues() {
            int temp = this.a;
            this.a = this.b;
            this.b = temp;
        }
    
        public static void main(String[] args) {
            if (args.length < 2) {
                System.out.println("Please provide two integer arguments.");
                return;
            }
    
            int arg1 = Integer.parseInt(args[0]);
            int arg2 = Integer.parseInt(args[1]);
    
            A obj = new A(arg1, arg2);
            System.out.println("Before swapping:");
            System.out.println("a = " + obj.a);
            System.out.println("b = " + obj.b);
    
            obj.swapValues();
    
            System.out.println("After swapping:");
            System.out.println("a = " + obj.a);
            System.out.println("b = " + obj.b);
        }
    }
    

