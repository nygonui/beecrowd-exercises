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