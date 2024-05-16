# Segunda lista de exercícios

Prezado aluno utilize os conhecimentos absorvidos em aula (Funções, Módulos, Struct) para resolver os problemas abaixo.

1. Desenvolva um simulador de investimentos que permita ao usuário escolher diferentes opções de investimentos (ações, poupança, etc.), calcular retornos ao longo do tempo com base em taxas de juros variáveis.

2. Desenvolva um sistema para auxiliar a escola no controle de matrículas dos cursos, atualmente a escola trabalha com as categorias dos cursos: aperfeiçoamento, técnico e graduação. Considere a documentação necessária abaixo para cada categoria de curso:
   - **Aperfeiçoamento**: RG, Comprovante de endereço, idade mínima (depende do curso), requisitos (depende do curso);
   - **Técnico**: RG, Comprovante de endereço, idade mínima 16 anos
   - **Graduação**: RG, Comprovante de endereço, diploma ensino médio, histórico escolar;

    Atualmente a escola está ofertando os seguintes cursos:
   - **Aperfeiçoamento**:
      - Técnicas de impressão 3D: (16 anos, conhecimento em software AutoCAD);
      - Lógica de programação com microcontroladores: (14 anos, nenhum);
   - **Técnicos**:
      - Técnico em química;
      - Técnico em administração;
      - Técnico em informática;
   - **Graduação**:
      - Engenharia mecânica;
      - Engenharia florestal;
      - Licenciatura em física;

A todo momento novas pessoas procuram a escola para realizar matrícula e o atendente precisa verificar se ainda existem matrículas disponíveis para o curso desejado.

3. Desenvolva um sistema para o estacionamento de carros que fica no centro da cidade, você deve considerar que o estacionamento possui 2 blocos(A, B) para estacionar, sendo que, o cliente pode escolher o bloco caso tenha vaga disponível para estacionar. Utilize a tabela abaixo para calcular os valores:

|    Veículo   |    Valor por hora   |  Convênio  |
|--------------|---------------------|------------|
|  Carro peq.  |       R$ 3,00       |     Sim    |
|  Carro peq.  |       R$ 3,50       |     Não    |
|  Carro méd.  |       R$ 4,00       |     Sim    |
|  Carro méd   |       R$ 4,50       |     Não    |
|  Caminhonete |       R$ 5,50       |     Sim    |
|  Caminhonete |       R$ 6,50       |     Não    |

Caso o veículo estacionado (qualquer modelo) fique mais de 3 horas tem um desconto de 10%.
