# redeAdHoc-Windows-Linguagem-C

## RedeAdHoc no Windows usando Linguagem C

Este projeto tem como objetivo iniciar uma rede Rede Ad Hoc no Windows através de um programa executável escrito em C. Este programa funciona da seguinte maneira, o usuário pressiona alguma tecla previamente configurada. 

```
0 -> Parar a rede Wi-Fi, 1-> Iniciar a rede, 2-> Ajustar as configurações da rede, ESC-> Fechar o programa
```

Programa bem simples, não conta com estrutura de testes. É totalmente funcional

# Pré-requisito
Durante a edição do código é necessário que o sua **IDE** (Interface de criação de códigos) esteja rodando com **privilégios de administrador**. E após o programa ser compilado ele também precisa **ser iniciado** com **privilégios de administrador**.
Isto é devido aos comandos de rede *NETSH WLAN* precisarem destes privilegios para funcionar

## Construido com

* [Code::Blocks IDE](http://www.codeblocks.org/) - Usado para escrever e copilar o codigo
* [GNU GCC Compiler](http://www.mingw.org/) - Compilador usado no Code::Blocks IDE

## Autor

* **Guilherme Rodrigues** - *Escritor do programa* - [GuilhermeRodrigues680](https://github.com/guilhermerodrigues680)
