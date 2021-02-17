/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package contabancaria;
import java.io.File;
import java.io.IOException;

public class ContaBancaria {

    
    public static void main(String[] args) {
   
    Conta c1 = new Conta(1 , "Lana");
   
    c1.abrirConta("CP");
    c1.CriarFile();
    c1.status();
    c1.fecharConta(0);
    c1.status();
    c1.depositar(140);
    c1.status();
    c1.levantar(290);
    c1.status();
    c1.WriteToFile();
    }
    
}
