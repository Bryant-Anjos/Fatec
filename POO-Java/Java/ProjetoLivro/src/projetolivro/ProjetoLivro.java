package projetolivro;
public class ProjetoLivro {
    public static void main(String[] args) {
        Pessoa[] p = new Pessoa[2];
        Livro[] l = new Livro[2];
        
        p[0] = new Pessoa("Bolsonaro", 45, "M");
        p[1] = new Pessoa("Maria do Rosário", 200, "F");        
        l[0] = new Livro("Lambendo botas de militares", "Ustra", 20, p[0]);
        l[1] = new Livro("Como conquistar um facista", "Mussolini", 321, p[1]);
        l[0].abrir();
        l[0].folhear();
        
        System.out.println(l[0].detalhes());
    }
    
}
