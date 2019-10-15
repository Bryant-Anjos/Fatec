package aula01pkmn;

public class Pokemon {
    String especie;
    String tipo;
    int nivel;
    int hp;
    boolean selvagem;
    
    void status() {
        System.out.println("Pokémon: " + this.especie);
        System.out.println("Tipo: " + this.tipo);
        System.out.println("Nível: " + this.nivel);
        System.out.println("HP: " + this.hp + "%");
        System.out.println("Selvagem? " + this.selvagem);
    }
    
    void capturar() {
        if (selvagem == true) {
            selvagem = false;
            System.out.println(this.especie + " foi Capturado!");
        } else {
            System.out.println(this.especie + " já foi capturado");
        }
    }
    
    void batalhar() {
        if (hp > 0 && selvagem == false) {
            nivel = nivel + 1;
            hp = hp - 20;
            System.out.println(this.especie + " batalhou e agora está no nível " + this.nivel);
        } else {
            System.out.println(this.especie + " não pode batalhar");
        }
    }
    
}
