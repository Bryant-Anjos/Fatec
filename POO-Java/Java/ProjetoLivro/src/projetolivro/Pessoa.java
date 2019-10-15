package projetolivro;
public class Pessoa {
    private String nome;
    private int idade;
    private String sexo;
    
    public void fazerAniver() {
        setIdade(getIdade() + 1);
        System.out.println("Parabéns " + getNome() + " pelo seu aniversário. Você agora tem " + getIdade() + " anos!");
    }

    public String getNome() {
        return nome;
    }

    private void setNome(String nome) {
        this.nome = nome;
    }

    public int getIdade() {
        return idade;
    }

    private void setIdade(int idade) {
        this.idade = idade;
    }

    public String getSexo() {
        return sexo;
    }

    private void setSexo(String sexo) {
        this.sexo = sexo;
    }

    public Pessoa(String n, int i, String s) {
        this.setNome(n);
        this.setIdade(i);
        this.setSexo(s);
    }
    
    
}
