/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Classes;

/**
 *
 * @author a24480
 */
public class Fatorial {
    
       private int num = 0;
       private int fat = 1;
       private String formula = "";
       
       public void setvalor(int n){
           num = n;
           int f= 1;
           String s="";
           int c;
           for (c=n; c>1; c--){
               f=f*c;
               s=s+c+"X";
           }
      
            s=s+"1 = ";
            fat=f;
            formula = s;
         }
       
        public int getFatorial(){
            return fat;
        }
        public String getFormula(){
            return formula;
        }
}