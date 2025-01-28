# Embarca Animações [Unidade 03 - Capitulo 04] Subgrupo 2

Simulação do hardware

<img src="Placa.png" alt="Simulação do hardware" width="450">


Para testar o projeto em uma placa fisica siga a seguinte instrução:
```bash
# No arquivo: neopixel_pio.c 
Comente essa linha de código: char key = scan_keypad();
Desfaça o comentario dessas linhas: //char key; e //scanf("%c", &key);
```

## Pré-requisitos para abrir o projeto

Para configurar o ambiente de desenvolvimento, siga as instruções abaixo:

### 1. Instalar o Visual Studio Code
- Acesse o site oficial e faça o download: [Visual Studio Code](https://code.visualstudio.com/).
- Instale o programa e configure conforme necessário.
- Adicione a extensão [Wokwi](https://marketplace.visualstudio.com/items?itemName=Wokwi.wokwi-vscode) e faça sua integração com o VS CODE para simular o hardware.

### 2. Instalar o CMake
- Baixe o instalador do CMake: [CMake](https://cmake.org/download/).
- Durante a instalação, marque a opção **"Add CMake to the system PATH"**.
- Conclua a instalação.

### 3. Instalar o GCC para ARM
- Baixe o compilador ARM GNU em: [GCC ARM Toolchain](https://developer.arm.com/tools-and-software/open-source-software/developer-tools/gnu-toolchain/gnu-rm).
- Após a instalação, adicione o diretório do executável ao **PATH**:
  - Vá para **Configurações do Sistema > Variáveis de Ambiente**.
  - Edite a variável `Path` e adicione:
    ```
    C:\Program Files (x86)\Arm GNU Toolchain\<versão>\bin
    ```
  - Substitua `<versão>` pela versão instalada.

### 4. Instalar o Git
- Faça o download: [Git para Windows](https://git-scm.com/).
- Instale o programa e configure-o.
- Abra o terminal (Git Bash ou CMD) e configure seu nome e e-mail:
  ```bash
  git config --global user.name "Seu Nome"
  git config --global user.email "seu.email@exemplo.com"

### 5. Instale o Raspberry Pi Pico SDK 
- Faça o download aqui: [Pico Setup Windows](https://github.com/raspberrypi/pico-setup-windows?tab=readme-ov-file).


