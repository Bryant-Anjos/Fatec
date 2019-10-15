package projetolivro;

import java.util.Random;

public class Livro implements Publicacao {
    // Atributos
    private String titulo;
    private String autor;
    private int totPaginas;
    private int pagAtual;
    private boolean aberto;
    private Pessoa leitor;
    
    /*public void detalhes() {
        System.out.println("##### DETALHES DO LIVRO #####");
        System.out.println("Nome do Livro: " + this.getTitulo());
        System.out.println("Autor do Livro: " + this.getAutor());
        System.out.println("Número de páginas: " + getTotPaginas());
        System.out.println("Está aberto? " + isAberto() + " Página atual: " + getPagAtual());
        System.out.println("Leitor do livro: " + this.leitor.getNome());
        System.out.println("==============================");
    }*/

    public String detalhes() {
        return "Livro{" + "titulo = " + titulo + ", autor = " + autor 
                + ",\n totPaginas = " + totPaginas + ", pagAtual = " 
                + pagAtual + ", aberto = " + aberto 
                + ",\n leitor = " + leitor.getNome() 
                + ", idade = " + leitor.getIdade() + ", sexo = " + leitor.getSexo() +'}';
    }
        
    public String getTitulo() {
        return titulo;
    }
    
    private void setTitulo(String titulo) {
        this.titulo = titulo;
    }

    public String getAutor() {
        return autor;
    }

    private void setAutor(String autor) {
        this.autor = autor;
    }
    
    public int getTotPaginas() {
        return totPaginas;
    }
    
    private void setTotPaginas(int totPaginas) {
        this.totPaginas = totPaginas;
    }

    public int getPagAtual() {
        return pagAtual;
    }

    private void setPagAtual(int pagAtual) {
        this.pagAtual = pagAtual;
    }

    public boolean isAberto() {
        return aberto;
    }

    private void setAberto(boolean aberto) {
        this.aberto = aberto;
    }

    public Pessoa getLeitor() {
        return leitor;
    }

    public void setLeitor(Pessoa leitor) {
        this.leitor = leitor;
    }

    public Livro(String titulo, String autor, int totPaginas, Pessoa leitor) {
        this.setTitulo(titulo);
        this.setAutor(autor);
        this.setTotPaginas(totPaginas);
        this.setPagAtual(0);
        this.setAberto(false);
        this.setLeitor(leitor);
    }

    @Override
    public void abrir() {
        this.setAberto(true);
        this.setPagAtual(1);
        System.out.println("O livro " + this.getTitulo() + " foi aberto por " + this.leitor.getNome());
    }

    @Override
    public void fechar() {
        this.setAberto(false);
        this.setPagAtual(0);
        System.out.println("O livro " + this.getTitulo() + " foi fechado por " + this.leitor.getNome());
    }

    @Override
    public void folhear() {
        if (this.isAberto()) {
            Random pagAleatoria = new Random();
            this.setPagAtual(pagAleatoria.nextInt(this.getTotPaginas()));
            System.out.println(this.leitor.getNome() + " folheou o livro " + this.getTitulo() + " para a página " + this.getPagAtual());
        } else {
            System.out.println("Não pode folhear livro fechado");
        }
        
    }

    @Override
    public void avancarPag() {
        if (this.isAberto() && this.getPagAtual() < this.getTotPaginas()) {
            this.setPagAtual(this.getPagAtual() + 1);
            System.out.println(this.leitor.getNome() + " avançou o livro " + this.getTitulo() + " para a página " + this.getPagAtual());
        } else {
            System.out.println("Imposível avançar");
        }
    }

    @Override
    public void voltarPag() {
        if (this.isAberto() && this.getPagAtual() > 1) {
            this.setPagAtual(this.getPagAtual() - 1);
            System.out.println(this.leitor.getNome() + " voltou o livro " + this.getTitulo() + " para a página " + this.getPagAtual());
        } else {
            System.out.println("Impossível voltar");
        }
    }
}
