package practiceQuestion;

public class longestOnes {
    int longOnes(int[] array){
        int max = 0;
        int beforeZero = 0;
        int afterZero = 0;
        boolean zeroFound = false;
        
        for(int i = 0; i < array.length; i++){
            if(array[i] == 1){
                afterZero++;
            } else {
                beforeZero = afterZero;
                afterZero = 0;
                zeroFound = true;
            }
            if (zeroFound) {
                max = Math.max(max, beforeZero + afterZero + 1);
            } else {
                max = Math.max(max, afterZero);
            }
        }
        return max;
    }

    public static void main(String[] args) {
        longestOnes lo = new longestOnes();
        int[] array = {0, 1, 1, 0, 1, 0, 1};
        System.out.println(lo.longOnes(array));
    }
}