import java.util.ArrayList;

class Funcionario {
    String nome;
    int ID;
    double salarioBase;

    public Funcionario(String nome, int ID, double salarioBase) {
        this.nome = nome;
        this.ID = ID;
        this.salarioBase = salarioBase;
    }

    public void exibirInformacoes() {
        System.out.println("Nome: " + nome);
        System.out.println("Salário Base: R$ " + salarioBase);
    }
}

class FuncionarioAssalariado extends Funcionario {

    public FuncionarioAssalariado(String nome, int ID, double salarioBase) {
        super(nome, ID, salarioBase);
    }

    public double calcularSalarioMensal() {
        return salarioBase;
    }
}

class FuncionarioPorHora extends Funcionario {
    double taxaHoraria;
    int totalHorasTrabalhadas;

    public FuncionarioPorHora(String nome, int ID, double salarioBase, double taxaHoraria) {
        super(nome, ID, salarioBase);
        this.taxaHoraria = taxaHoraria;
        this.totalHorasTrabalhadas = 0;
    }

    public void registrarHorasTrabalhadas(int horas) {
        totalHorasTrabalhadas += horas;
    }

    public double calcularSalarioMensal() {
        return totalHorasTrabalhadas * taxaHoraria;
    }
}

// Classe Empresa
class Empresa {
    ArrayList<Funcionario> funcionarios;

    // Construtor
    public Empresa() {
        funcionarios = new ArrayList<>();
    }

    // Método para adicionar funcionários à lista
    public void adicionarFuncionario(Funcionario funcionario) {
        funcionarios.add(funcionario);
    }

    // Método para calcular a folha de pagamento mensal
    public double calcularFolhaPagamentoMensal() {
        double totalSalarios = 0;
        for (Funcionario funcionario : funcionarios) {
            totalSalarios += funcionario.calcularSalarioMensal();
        }
        return totalSalarios;
    }
    public void exibirInformacoesFuncionarios() {
        System.out.println("Informações dos Funcionários:");
        for (Funcionario funcionario : funcionarios) {
            funcionario.exibirInformacoes();
            System.out.println("------");
        }
    }
}
public class Main {
    public static void main(String[] args) {
        Empresa empresa = new Empresa();

        FuncionarioAssalariado funcAssalariado = new FuncionarioAssalariado("João", 1, 3000);
        FuncionarioPorHora funcPorHora = new FuncionarioPorHora("Maria", 2, 0, 20);

        funcPorHora.registrarHorasTrabalhadas(80);

        empresa.adicionarFuncionario(funcAssalariado);
        empresa.adicionarFuncionario(funcPorHora);

        System.out.println("Folha de Pagamento Mensal:");
        System.out.println("Total: R$ " + empresa.calcularFolhaPagamentoMensal());
        System.out.println();

        empresa.exibirInformacoesFuncionarios();
    }
}
