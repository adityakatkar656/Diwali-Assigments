//sum of n odd numbers
import java.util.Scanner;
public class SumOdd {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int n = sc.nextInt();
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            sum += (2 * i - 1);
        }
        System.out.println("Sum of first " + n + " odd numbers is: " + sum);
        sc.close();
    }
}