# Fábrica de Monstros - Pensamento Computacional - Universidade do Vale do Itajaí 

Repósitório para armazenar o código referente ao trabalho de fórum Temático da faculdade Univali referente ao Curso Análise e Desenvolvimento de Sistemas.

O desafio era criar um algoritmo capaz de fazer a mistura e categorização de monstros baseados em:
* Formato da Cabeça
* Características do Rosto ( Olhos, Nariz e Boca)

Foi disponibilizado um PDF com 3 faces de monstros e suas categorias, das quais transcrevi para ASCII ART

```
===================FÁBRICA DE MONSTROS==========================

  ############         __________        __________
 |##``"##``#"#|       /          \      /      &&  \
 |  __     _  |      |  _     __  |    ## _     _  ##
 | | *|   |.| |      | |*|   | *| |    | /^|   /^|  |
 |  ¨¨     ¨  |      |  "     ""  |    |  "     "   |
 |      C     |      |     ^^     |    |   __><__   |
 |   [`bb`]   |       \_ [.m.'] _/     \   (====)   /
P|____________|P        |______|        \__________/

=============FAÇA AQUI O RETRATO DO SEU MONSTRINHO==============
```

E baseado nesta ASCII decidi fazer um algoritmo que iria questionar o usuário sobre seu monstro de estimação e iria no final fornecer um retrato,
assim como a categorização do monstro baseado nas escolhas, sendo escolhas iguais em caracteristicas determinando o subtipo (WACKUS, VEGITAS ou SPRITEM)
ou caso não houvesse então deveria utilizar os olhos.

Como meu objetivo era fornecer um retrato do monstro, optei por não permitir informações NULL ou VAZIAS, forcei o usuário a escolher um característica já catalogada.
Dessa forma consegue fazer diversas combinações.

# Como rodar o projeto
1. Garanta que possui instalado um compilador C (GCC ou CL) ou uma IDE com compilador integrado (Code Blocks, DEV++, Visual Studio)
2. Baixe o código.
3. Compile no seu ambiente e execute o .exe que será gerado ou use o DEBUG da ferramenta que possui compilador embutido.
