# Código criado para compilar um arquivo C, que será passado como parâmetro, e executar o binário gerado
# além disso ele coloca o binário numa pasta só de binários, e se essas pasta não existir ele cria.
# 
# objetivo: eu, com a intenção de tirar menos o possível a mão do teclado não queria apertar no botão de play do vscode,
#       rodar os comandos todas as vezes ia ficar chato em algum momento.

param($code)

$var = test-path ".\output"

$compilando = "gcc '$code.c' -o '.\output\$code.exe'"
$executando = ".\output\$code.exe"

if($var) {
    Invoke-Expression $compilando
    Invoke-Expression $executando
}
else {
    New-item -ItemType directory -Path ".\output"
    Invoke-Expression $compilando
    Invoke-Expression $executando
}