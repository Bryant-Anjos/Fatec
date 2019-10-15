package aula03;

public class Aula03 {

    public static void main(String[] args) {
        Caneta c1 = new Caneta("Nic", "Amarelo", 0.4f);
        c1.status();        
        System.out.println("Tenho uma caneta " + c1.getModelo() + " de ponta " + c1.getPonta());
        
        Caneta c2 = new Caneta("HUE", "Black", 1.5f);
        c2.status();
    }
    
}
