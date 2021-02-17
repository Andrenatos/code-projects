/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package contabancaria;
import java.io.File;
import java.io.IOException;
import java.io.FileWriter;
/**
 *
 * @author a6047
 */
public class Conta {
    
    public int num_conta;
    
    private String tipo;
    
    private String dono;
    private float saldo;
    private boolean EstadoSaldo;
    private boolean Estado;

    public Conta(int num_conta,String dono) {
        this.num_conta = num_conta;
        this.tipo = tipo;
        this.dono = dono;
        this.saldo = 0;

        setNum_conta(num_conta);
        setTipo(tipo);
        setDono(dono);
        setSaldo(saldo);
        setEstado(true);
        setEstadoSaldo(true);
    }
    
        
    public int getNum_conta() {
        return num_conta;
    }

    public void setNum_conta(int num_conta) {
        this.num_conta = num_conta;
    }

    public String getTipo() {
        return tipo;
    }

    public void setTipo(String tipo) {
        this.tipo = tipo;
    }

    public String getDono() {
        return dono;
    }

    public void setDono(String dono) {
        this.dono = dono;
    }

    public float getSaldo() {
        return saldo;
    }

    public void setSaldo(float saldo) {
        this.saldo = saldo;
    }

    public boolean getEstadoSaldo() {
        return EstadoSaldo;
    }

    public void setEstadoSaldo(boolean EstadoSaldo) {
        this.EstadoSaldo = EstadoSaldo;
    }

    public boolean getEstado() {
        return Estado;
    }

    public void setEstado(boolean Estado) {
        this.Estado = Estado;
    }
    
    public void abrirConta(String tipo){
        setTipo(tipo);
        setEstadoSaldo(true);
        if(tipo == "CC"){
        saldo=50;
     
        }else if(tipo == "CP"){
        saldo=150;
        }
        if(saldo>0){
            this.EstadoSaldo=true;
        }else{
            this.EstadoSaldo=false;
        }
    }
    
    public void fecharConta(int saldo){

        if(saldo >= 0){
            System.out.println("A conta tem dinheiro");
            this.EstadoSaldo=true;
            
        }else if(saldo < 0){
            System.out.println("A conta esta em debito");
            this.EstadoSaldo=false;
        }else{
        setEstado(false);
        }
    }
    
    public void depositar(float v){
        
    if(Estado=true){
        setSaldo(getSaldo()+v);
        System.out.println("Transaçao efetuada com sucesso");
    }else{
        System.out.println("Transaçao nao executada");
    }
    if(saldo>0){
            this.EstadoSaldo=true;
        }else{
            this.EstadoSaldo=false;
        }
    }
    
    public float levantar(float v){
        
    if(Estado=true){
        if(saldo>=v){
        saldo = saldo-v;
        System.out.println("Levantamento efetuado com sucesso");
        return saldo;
        }else{
            System.out.println("Saldo Insuficiente, (es pobre)");
            return saldo;
        }
    }else{
        System.out.println("Transaçao nao executada");
        return saldo;
    }
    }
     
    public float pagarmensal(float p){
        if(tipo=="CC"){
            p=12;
        
        }else if(tipo=="CP"){
        p=20;
        }
        if(Estado=true){
            if(saldo>p){
            saldo=saldo-p;
            }else{
                System.out.println("Saldo Insuficiente");
            }
        
        }else{
            System.out.println("Impossivel pagar");
        }
        if(saldo>0){
            this.EstadoSaldo=true;
        }else{
            this.EstadoSaldo=false;
        }
    }
    public  void CriarFile (){
    try {
      File myObj = new File("HistoricodeTransaçoes.txt");
      if (myObj.createNewFile()) {
        System.out.println("Ficheiro criado: " + myObj.getName());
      } else {
        System.out.println("Ficheiro ja existe.");
      }
    } catch (IOException e){
      System.out.println("Aconteceu um erro.");
      e.printStackTrace();
    }
    
  }
 public void WriteToFile() {
    try{
      FileWriter myWriter = new FileWriter("HistoricodeTransaçoes.txt");
      myWriter.write("Historico de Transaçoes do banco");
      myWriter.write("\n\nSobre a conta:"+num_conta);
      myWriter.write("\nTipo de conta: "+ this.getTipo());
      myWriter.write("\nDono: "+ this.getDono());
      myWriter.write("\nSaldo é: "+ this.getSaldo());
      myWriter.write("\nEstado do saldo é: "+ this.getEstadoSaldo());
      myWriter.write("\nEstado: "+ this.getEstado()+"\n\n");
      myWriter.close();
      System.out.println("Historico adicionado com sucesso.");
    } catch (IOException e) {
      System.out.println("Aconteceu um erro.");
      e.printStackTrace();
    }
  }
   
    public void status(){
        System.out.println("Sobre a conta:");
        System.out.println("Tipo de conta: "+ this.getTipo());//tipo de conta
        System.out.println("Dono: "+ this.getDono());//dono
        System.out.println("Saldo é: "+ this.getSaldo());//saldo
        System.out.println("Estado do saldo é: "+ this.getEstadoSaldo());//estado do saldo
        System.out.println("Estado: "+ this.getEstado());//a conta esta aberto ou nao
    }

}
