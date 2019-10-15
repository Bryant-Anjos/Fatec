package aula01pkmn;
public class Aula01pkmn {
   public static void main(String[] args) {
       Pokemon p1 = new Pokemon();
       p1.especie = "Pikachu";
       p1.tipo = "Elétrico";
       p1.nivel = 5;
       p1.selvagem = true;
       p1.hp = 100;
       
       p1.status();
       p1.batalhar();
       p1.capturar();
       p1.batalhar();
       p1.status();
       
       Pokemon p2 = new Pokemon();
       p2.especie = "Charizard";
       p2.hp = 20;
       p2.nivel = 99;
       p2.selvagem = false;
       p2.tipo = "Fogo";
       
       p2.status();
       p2.batalhar();
       p2.status();
       
    }
    
}
