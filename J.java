/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */


import java.math.BigInteger;
import java.util.ArrayList;
import java.util.Random;
import java.util.Scanner;

/**
 *
 * @author augus
 */
public class carregamento {

    public static void main(String[] args) {
        Random rd = new Random();
        BigInteger bg = new BigInteger(128, rd);
        ArrayList<BigInteger> arr = new ArrayList<>();

        BigInteger num = new BigInteger("1");
        BigInteger num2 = new BigInteger("1");

        arr.add(num);
        arr.add(num2);
        
        Scanner scan = new Scanner(System.in);
        int n;
        n = scan.nextInt();
        int maior = -1;
        ArrayList<Integer> vals = new ArrayList<>();

        
        for(int i = 0; i < n; i++){
            int val = scan.nextInt();
            vals.add(val);
            if(val > maior){
                maior = val;
            }
        }
        
        for(int i = 2; i <= 8000; i++){
            BigInteger val = new BigInteger("0");
            val = val.add(arr.get(i-1));
            val = val.add(arr.get(i-2));
            arr.add(val);
        }
        
        for(int i = 0; i < n; i++){
            System.out.println(arr.get(vals.get(i)));
        }
    }
}
