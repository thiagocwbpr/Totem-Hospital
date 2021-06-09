# Totem para triagem em Hospital - COVID-19
Trabalho de faculdade onde foi solicitado o desenvolvimento de um totem eletrônico para um hospital. Esse totem realizará a triagem inicial dos pacientes, no qual identificará o risco da comorbidade do paciente. 
Nessa triagem, conseguiremos separar os pacientes com sintomas de **covid-19**, dos demais pacientes com outras comorbidades.

Esse totem é responsável por coletar informações pessoais dos pacientes que chegam no hospital em busca de atendimento médico. O totem coleta as seguintes informações : CPF, nome completo e idade.

Em seguida,  é realizado um questionário de 10 perguntas no qual o paciente responde com "S" para sim, e "N" para não. Cada pergunta do questionário, possui um valor de risco. A cada pergunta, os valores são somados, e analisados por uma condição. Essa condição cria uma escala de risco, que corresponde as "alas" de atendimento do hospital. Essas alas são de risco baixo, médio e alto.

Ao final do questionário, o totem irá mostrar qual ala de risco o paciente deve se dirigir. No entanto, quando encerrado o atendimento pelo totem, é criado automaticamente um arquivo texto, que possui todas as informações do usuário, o mesmo poderá ser utilizado para "ordem de chamada" de pacientes pelo médico, ou até mesmo para futuras auditorias administrativas do hospital.

### Linguagem desenvolvida
Esse projeto é uma atividade de lógica de programação solicitado pela faculdade neste primeiro semestre. Portanto foi desenvolvido em **linguagem C**. porém analisando a semântica do código, **esse projeto pode ser realizado em qualquer outra linguagem.**

### Observações
- O projeto foi desenvolvido em plataforma **Windows**, porém foi testado em **Linux-Mint cinnamon**.
- Se caso estiver utilizando Linux, a **função system("clear")** deve ser alterada para **system("cls")**.
- Foi utilizado a função **setlocale**, para utilização de acentos do portugues no código.
- Se caso estiver utilizando Linux, verifique se a função **setlocate** irá ter as funções ativadas.
- O mesmo pode ser compilado diretamente pelo **terminal linux**, sem a necessidade de utilização de uma IDE.

