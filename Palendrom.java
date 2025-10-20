//palendrom number
import java.util.Scanner;
public class Palendrom {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int n = sc.nextInt();
        int originalNumber = n;
        int reversedNumber = 0;
        while (n != 0) {
            int digit = n % 10;
            reversedNumber = reversedNumber * 10 + digit;
            n /= 10;
        }
        if (originalNumber == reversedNumber) {
            System.out.println(originalNumber + " is a palindrome.");
        } else {
            System.out.println(originalNumber + " is not a palindrome.");
        }
        sc.close();
    }
}