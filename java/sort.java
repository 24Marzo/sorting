public class sort {
    int firstNum = 0;
    int smallestNum;
    int counter = 0;
    public sort() {
        //...//
    }
    public int[] sortArr(int[] arr, int arrLenght) {
        int[] sorted = new int[arrLenght];
        for(int i : arr) {
            for(int secondNum = 1 ; secondNum <= arrLenght-1 ; ) {
                if(arr[firstNum] <= arr[secondNum]) {
                    smallestNum = arr[firstNum];
                } else {
                    secondNum = -1;
                    firstNum++;
                }
                secondNum++;
            }
            sorted[counter] = smallestNum;
            arr[firstNum] = 999999;
            firstNum = 0;
            counter++;
        }
        return sorted;
    }
}
