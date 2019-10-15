package projetoyoutube;
public class ProjetoYouTube {
    public static void main(String[] args) {
        Video v[] = new Video[3];
        v[0] = new Video("Aula 01 de POO");
        v[1] = new Video("Aula 12 de PHP");
        v[2] = new Video("Aula 10 de HTML5");
        
        Gafanhoto g[] = new Gafanhoto[2];
        g[0] = new Gafanhoto("Jubileu", 22, "M", "juba");
        g[1] = new Gafanhoto("Creuza", 12, "F", "creuzita");
        
        Visualisacao vis[] = new Visualisacao[5];
        vis[0] = new Visualisacao(g[0], v[2]);
        vis[0].avaliar();
        System.out.println(vis[0].toString());
    }
    
}
