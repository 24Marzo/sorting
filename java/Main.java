import java.util.Scanner;
import java.util.Random;

class useful {
    protected static void printArr(int arr[]) {
        for(int i : arr) {
            System.out.print(i + " ");
        }
    }
}


public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        Random random = new Random(881);
        sort sort = new sort();
        //System.out.println(nonStatic.x);

        System.out.println("How long do you want the array to be?\n");
        int arrayLenght = scan.nextInt();

        // Here we are initializing the variable (giving a value to it)
        int[] randArray = new int[arrayLenght];

        //fill array
        for (int x = 0; x < arrayLenght; x++) {
            randArray[x] = random.nextInt(0 , 100 + 1);
        }
        useful.printArr(randArray);
        System.out.print("\n");
        useful.printArr(sort.sortArr(randArray, arrayLenght));

    }
}