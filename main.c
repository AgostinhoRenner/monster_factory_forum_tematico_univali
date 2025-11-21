#include <stdio.h>
#include <string.h>

/*
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
*/

// Definições de tipos para facilitar durante as tomadas de decisão no código
typedef enum
{
  FRANKEN = 1,
  ZOMBOS = 2,
  HAPPY = 3
} formatosCabeca;

typedef enum
{
  WACKUS_OLHOS = 1,
  VEGITAS_OLHOS = 2,
  SPRITEM_OLHOS = 3
} formatosOlhos;

typedef enum
{
  WACKUS_NARIZ = 1,
  VEGITAS_NARIZ = 2,
  SPRITEM_NARIZ = 3
} formatosNariz;

typedef enum
{
  WACKUS_BOCA = 1,
  VEGITAS_BOCA = 2,
  SPRITEM_BOCA = 3
} formatosBoca;

// Funções utilitárias para já deixar a linha quebrada e também para fácil alteração do aviso quando preciso.
void printLine(char string[])
{
  printf("%s \n", string);
}

void printAviso()
{
  printLine("===========================================================");
  printLine("Desculpe, voce informou um valor errado, digite entre 1 e 3");
  printLine("===========================================================\n");
}

// Funções de montagem do ASCII ART referente as partes selecionadas pelo usuário
void recebeOlhosWackus(formatosCabeca cabeca, char strLine[][25])
{
  switch (cabeca)
  {
  case FRANKEN:
  case ZOMBOS:
    strcpy(strLine[2], " |  __     _  |  ");
    strcpy(strLine[3], " | | *|   |.| |  ");
    strcpy(strLine[4], " |  \"\"     \"  |  ");
    break;
  case HAPPY:
    strcpy(strLine[2], " ## __     _ ##  ");
    strcpy(strLine[3], " | | *|   |.| |  ");
    strcpy(strLine[4], " |  \"\"     \"  |  ");
  }
}

void recebeOlhosVegitas(formatosCabeca cabeca, char strLine[][25])
{
  switch (cabeca)
  {
  case FRANKEN:
  case ZOMBOS:
    strcpy(strLine[2], " |  _     __  |  ");
    strcpy(strLine[3], " | |*|   | *| |  ");
    strcpy(strLine[4], " |  \"     \"\"  |  ");
    break;
  case HAPPY:
    strcpy(strLine[2], " ## _     __ ##  ");
    strcpy(strLine[3], " | |*|   | *| |  ");
    strcpy(strLine[4], " |  \"     \"\"  |  ");
    break;
  default:
    break;
  }
}

void recebeOlhosSpritem(formatosCabeca cabeca, char strLine[][25])
{
  switch (cabeca)
  {
  case FRANKEN:
  case ZOMBOS:
    strcpy(strLine[2], " |  _     _   |  ");
    strcpy(strLine[3], " | /^|   /^|  |  ");
    strcpy(strLine[4], " |  \"     \"   |  ");
    break;
  case HAPPY:
    strcpy(strLine[2], " ## _     _  ##  ");
    strcpy(strLine[3], " | /^|   /^|  |  ");
    strcpy(strLine[4], " |  \"     \"   |  ");
    break;
  default:
    break;
  }
}

void recebeNarizWackus(char strLine[][25])
{
  strcpy(strLine[5], " |      C     |  ");
}

void recebeNarizVegitas(char strLine[][25])
{
  strcpy(strLine[5], " |     ^^     |  ");
}

void recebeNarizSpritem(char strLine[][25])
{
  strcpy(strLine[5], " |   __><__   |  ");
}

void recebeBocaWackus(formatosCabeca cabeca, char strLine[][25])
{
  switch (cabeca)
  {
  case FRANKEN:
    strcpy(strLine[6], " |   [`bb`]   |  ");
    break;
  case ZOMBOS:
    strcpy(strLine[6], "  \\_ [`bb`] _/   ");
    break;
  case HAPPY:
    strcpy(strLine[6], " \\   [`bb`]   /  ");
    break;
  default:
    break;
  }
}

void recebeBocaVegitas(formatosCabeca cabeca, char strLine[][25])
{
  switch (cabeca)
  {
  case FRANKEN:
    strcpy(strLine[6], " |    [.m.']  |  ");
    break;
  case ZOMBOS:
    strcpy(strLine[6], "  \\_ [.m.'] _/   ");
    break;
  case HAPPY:
    strcpy(strLine[6], " \\   [.m.']   /  ");
    break;
  default:
    break;
  }
}

void recebeBocaSpritem(formatosCabeca cabeca, char strLine[][25])
{
  switch (cabeca)
  {
  case FRANKEN:
    strcpy(strLine[6], " |   (====)   |  ");
    break;
  case ZOMBOS:
    strcpy(strLine[6], "  \\_ (====)  _/  ");
    break;
  case HAPPY:
    strcpy(strLine[6], " \\   (====)   /  ");
    break;
  default:
    break;
  }
}

void desenhaMonstrinho(formatosCabeca cabeca, formatosOlhos olhos, formatosNariz nariz, formatosBoca boca)
{
  char retrato[8][25];

  switch (cabeca)
  {
  case FRANKEN:
    strcpy(retrato[0], "  ############  ");
    strcpy(retrato[1], " |##``~##``#~#|  ");
    switch (olhos)
    {
    case WACKUS_OLHOS:
      recebeOlhosWackus(cabeca, retrato);
      break;
    case VEGITAS_OLHOS:
      recebeOlhosVegitas(cabeca, retrato);
      break;
    case SPRITEM_OLHOS:
      recebeOlhosSpritem(cabeca, retrato);
      break;
    default:
      break;
    }

    switch (nariz)
    {
    case WACKUS_NARIZ:
      recebeNarizWackus(retrato);
      break;
    case VEGITAS_NARIZ:
      recebeNarizVegitas(retrato);
      break;
    case SPRITEM_NARIZ:
      recebeNarizSpritem(retrato);
      break;
    default:
      break;
    }

    switch (boca)
    {
    case WACKUS_BOCA:
      recebeBocaWackus(cabeca, retrato);
      break;
    case VEGITAS_BOCA:
      recebeBocaVegitas(cabeca, retrato);
      break;
    case SPRITEM_BOCA:
      recebeBocaSpritem(cabeca, retrato);
      break;
    default:
      break;
    }

    strcpy(retrato[7], "P|____________|P ");
    break;
  case ZOMBOS: // ZOMBOS
    strcpy(retrato[0], "   __________   ");
    strcpy(retrato[1], "  /          \\  ");
    switch (olhos)
    {
    case WACKUS_OLHOS:
      recebeOlhosWackus(cabeca, retrato);
      break;
    case VEGITAS_OLHOS:
      recebeOlhosVegitas(cabeca, retrato);
      break;
    case SPRITEM_OLHOS:
      recebeOlhosSpritem(cabeca, retrato);
      break;
    default:
      break;
    }

    switch (nariz)
    {
    case WACKUS_NARIZ:
      recebeNarizWackus(retrato);
      break;
    case VEGITAS_NARIZ:
      recebeNarizVegitas(retrato);
      break;
    case SPRITEM_NARIZ:
      recebeNarizSpritem(retrato);
      break;
    default:
      break;
    }

    switch (boca)
    {
    case WACKUS_BOCA:
      recebeBocaWackus(cabeca, retrato);
      break;
    case VEGITAS_BOCA:
      recebeBocaVegitas(cabeca, retrato);
      break;
    case SPRITEM_BOCA:
      recebeBocaSpritem(cabeca, retrato);
      break;
    default:
      break;
    }
    strcpy(retrato[7], "    |______|     ");
    break;

  case HAPPY:
    strcpy(retrato[0], "   _________ ");
    strcpy(retrato[1], " /      &&   \\");
    switch (olhos)
    {
    case WACKUS_OLHOS:
      recebeOlhosWackus(cabeca, retrato);
      break;
    case VEGITAS_OLHOS:
      recebeOlhosVegitas(cabeca, retrato);
      break;
    case SPRITEM_OLHOS:
      recebeOlhosSpritem(cabeca, retrato);
      break;
    default:
      break;
    }

    switch (nariz)
    {
    case WACKUS_NARIZ:
      recebeNarizWackus(retrato);
      break;
    case VEGITAS_NARIZ:
      recebeNarizVegitas(retrato);
      break;
    case SPRITEM_NARIZ:
      recebeNarizSpritem(retrato);
      break;
    default:
      break;
    }

    switch (boca)
    {
    case WACKUS_BOCA:
      recebeBocaWackus(cabeca, retrato);
      break;
    case VEGITAS_BOCA:
      recebeBocaVegitas(cabeca, retrato);
      break;
    case SPRITEM_BOCA:
      recebeBocaSpritem(cabeca, retrato);
      break;
    default:
      break;
    }
    strcpy(retrato[7], "  \\__________/   ");
    break;
    break;
  default:
    break;
  }

  for (int i = 0; i < 8; i++)
  {
    printf("%s\n", retrato[i]);
  }
  printf("\n");
}

// Função Principal que o usuário irá interagir
int main()
{
  int escolhaCabeca, escolhaOlhos, escolhaNariz, escolhaBoca;

  // Matriz / Array que será usada para determinar caracteristica pelos olhos
  char caracteristicas[3][25] = {"Wackus", "Vegitas", "Spritem"};

  formatosCabeca cabecaEscolhida;
  formatosOlhos olhoEscolhido;
  formatosNariz narizEscolhido;
  formatosBoca bocaEscolhida;

  printLine("Bem vindo a Fabrica de Monstros e gostariamos de identificar seu monstrinho!");
  printLine("Para conseguirmos fazer um retrato dele, nos informe as caracteristicas dele!\n");

  /*
  Quatro laços de repetição para forçar uma escolha válida, como quis fazer ASCII ART
  fui obrigado a não utilizar a opção "NULL" pois precisava fixar um formato a uma característica.
  */
  do
  {
    printLine("Por favor, nos informe o formato da cabeca que ele possui:");
    printLine("1 - Franken: Mais quadrada e grande");
    printLine("2 - Zombos: Arredondada em cima com queixo pequeno");
    printLine("3 - Happy: Arredondada e grande");
    scanf("%d", &escolhaCabeca);

    if (escolhaCabeca < 1 || escolhaCabeca > 3)
    {
      printAviso();
      continue;
    }

    switch (escolhaCabeca)
    {
    case 1:
      cabecaEscolhida = FRANKEN;
      break;
    case 2:
      cabecaEscolhida = ZOMBOS;
      break;
    case 3:
      cabecaEscolhida = HAPPY;
      break;
    default:
      break;
    }

  } while (escolhaCabeca < 1 || escolhaCabeca > 3);

  do
  {
    printLine("Muito obrigado pela sua confirmacao, agora nos informa o formato dos olhos dele!");
    printLine("1 - Wackus: Grande na esquerda, pequeno direita");
    printLine("2 - Vegitas: Grande na direita, pequeno esquerda");
    printLine("3 - Spritem: Redondos e alegres");
    scanf("%d", &escolhaOlhos);

    if (escolhaOlhos < 1 || escolhaOlhos > 3)
    {
      printAviso();
      continue;
    }

    switch (escolhaOlhos)
    {
    case 1:
      olhoEscolhido = WACKUS_OLHOS;
      break;
    case 2:
      olhoEscolhido = VEGITAS_OLHOS;
      break;
    case 3:
      olhoEscolhido = SPRITEM_OLHOS;
      break;
    default:
      break;
    }

  } while (escolhaOlhos < 1 || escolhaOlhos > 3);

  do
  {
    printLine("Hipnotizante! Agora nos informa o formato de seu lindo nariz!");
    printLine("1 - Wackus: Grande, arredondado e fofo ");
    printLine("2 - Vegitas: Pequeno e com narinas pontudas");
    printLine("3 - Spritem: Grande e pontudo");
    scanf("%d", &escolhaNariz);

    if (escolhaNariz < 1 || escolhaNariz > 3)
    {
      printAviso();
      continue;
    }

    switch (escolhaNariz)
    {
    case 1:
      narizEscolhido = WACKUS_NARIZ;
      break;
    case 2:
      narizEscolhido = VEGITAS_NARIZ;
      break;
    case 3:
      narizEscolhido = SPRITEM_NARIZ;
      break;
    default:
      break;
    }

  } while (escolhaNariz < 1 || escolhaNariz > 3);

  do
  {
    printLine("Maravilhoso! Agora nos diz como eh a boca dele...");
    printLine("1 - Wackus: Com dentes grandes e rentes ");
    printLine("2 - Vegitas: Com dentes irregulares");
    printLine("3 - Spritem: sempre com um sorriso");
    scanf("%d", &escolhaBoca);

    if (escolhaBoca < 1 || escolhaBoca > 3)
    {
      printAviso();
      continue;
    }
    switch (escolhaBoca)
    {
    case 1:
      bocaEscolhida = WACKUS_BOCA;
      break;
    case 2:
      bocaEscolhida = VEGITAS_BOCA;
      break;
    case 3:
      bocaEscolhida = SPRITEM_BOCA;
      break;
    default:
      break;
    }

  } while (escolhaBoca < 1 || escolhaBoca > 3);

  printLine("Muito obrigado veja o retrato que fizemos do seu monstrinho!!!");
  desenhaMonstrinho(cabecaEscolhida, olhoEscolhido, narizEscolhido, bocaEscolhida);

  switch (cabecaEscolhida)
  {
  case FRANKEN:
    if ((olhoEscolhido == 1 && narizEscolhido == 1) || (olhoEscolhido == 1 && bocaEscolhida == 1) || (narizEscolhido == 1 && bocaEscolhida == 1))
    {
      printLine("Categorizamos seu monstrinho como: FRANKEN WACKUS");
    }
    else if ((olhoEscolhido == 2 && narizEscolhido == 2) || (olhoEscolhido == 2 && bocaEscolhida == 2) || (narizEscolhido == 2 && bocaEscolhida == 2))
    {
      printLine("Categorizamos seu monstrinho como: FRANKEN VEGITAS");
    }
    else if ((olhoEscolhido == 3 && narizEscolhido == 3) || (olhoEscolhido == 3 && bocaEscolhida == 3) || (narizEscolhido == 3 && bocaEscolhida == 3))
    {
      printLine("Categorizamos seu monstrinho como: FRANKEN SPRITEM");
    }
    else
    {
      printf("Categorizamos seu monstrinho como: FRANKEN %s \n", caracteristicas[olhoEscolhido]);
    }
    break;
  case ZOMBOS:
    if ((olhoEscolhido == 1 && narizEscolhido == 1) || (olhoEscolhido == 1 && bocaEscolhida == 1) || (narizEscolhido == 1 && bocaEscolhida == 1))
    {
      printLine("Categorizamos seu monstrinho como: ZOMBOS WACKUS");
    }
    else if ((olhoEscolhido == 2 && narizEscolhido == 2) || (olhoEscolhido == 2 && bocaEscolhida == 2) || (narizEscolhido == 2 && bocaEscolhida == 2))
    {
      printLine("Categorizamos seu monstrinho como: ZOMBOS VEGITAS");
    }
    else if ((olhoEscolhido == 3 && narizEscolhido == 3) || (olhoEscolhido == 3 && bocaEscolhida == 3) || (narizEscolhido == 3 && bocaEscolhida == 3))
    {
      printLine("Categorizamos seu monstrinho como: ZOMBOS SPRITEM");
    }
    else
    {
      printf("Categorizamos seu monstrinho como: FRANKEN %s \n", caracteristicas[olhoEscolhido]);
    }
    break;

  case HAPPY:
    if ((olhoEscolhido == 1 && narizEscolhido == 1) || (olhoEscolhido == 1 && bocaEscolhida == 1) || (narizEscolhido == 1 && bocaEscolhida == 1))
    {
      printLine("Categorizamos seu monstrinho como: HAPPY WACKUS");
    }
    else if ((olhoEscolhido == 2 && narizEscolhido == 2) || (olhoEscolhido == 2 && bocaEscolhida == 2) || (narizEscolhido == 2 && bocaEscolhida == 2))
    {
      printLine("Categorizamos seu monstrinho como: HAPPY VEGITAS");
    }
    else if ((olhoEscolhido == 3 && narizEscolhido == 3) || (olhoEscolhido == 3 && bocaEscolhida == 3) || (narizEscolhido == 3 && bocaEscolhida == 3))
    {
      printLine("Categorizamos seu monstrinho como: HAPPY SPRITEM");
    }
    else
    {
      printf("Categorizamos seu monstrinho como: FRANKEN %s \n", caracteristicas[olhoEscolhido]);
    }
    break;
  default:
    break;
  }
  return 0;
}
