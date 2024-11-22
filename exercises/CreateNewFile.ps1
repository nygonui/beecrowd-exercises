# Código criado para criar um novo arquivo (nome e extensão passados no $name) 
# e se eu quiser já abrir esse arquivo, passando "t"(true) no parâmetro $openFile
# ele cria o arquivo na pasta onde ele está sendo executado
# 
# objetivo: com a intenção de tirar menos o possível a mão do teclado (mesmo motivo do outr ps1 script)
#   só que dessa vez tinha outras opções:
#   1 - atalho Ctrl + N do vscode para criar novos arquivos, porém como estou usando Vim Motions no VsCode 
#   esse atalho não estava funcionando dessa maneira
#   2 - o comando no vim :vim <nome-do-arquivo>, mas essa feature ainda não foi implementada na extensão.

param($name, $openFile)

New-Item -Path . -Name "./$name" -ItemType  "file"

if($openFile -eq "t"){
    code "$name"
}