package aula01pkmn;

public class Pokemon {
    private String especie;
    private String tipo;
    private int nivel;
    private int hp;
    private boolean selvagem;

    public Pokemon(String especie, String tipo) {
        this.especie = especie;
        this.tipo = tipo;
        this.setHp(100);
        this.setNivel(1);
        this.setSelvagem(true);
    }
    
    
    
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

    public String getEspecie() {
        return especie;
    }

    public void setEspecie(String especie) {
        this.especie = especie;
    }

    public String getTipo() {
        return tipo;
    }

    public void setTipo(String tipo) {
        this.tipo = tipo;
    }

    public int getNivel() {
        return nivel;
    }

    public void setNivel(int nivel) {
        this.nivel = nivel;
    }

    public int getHp() {
        return hp;
    }

    public void setHp(int hp) {
        this.hp = hp;
    }

    public boolean isSelvagem() {
        return selvagem;
    }

    public void setSelvagem(boolean selvagem) {
        this.selvagem = selvagem;
    }
    
}
