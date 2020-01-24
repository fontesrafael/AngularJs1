function Salvar(){

    let codigo  = document.querySelector("#codigo").value;
    let nome    = document.querySelector("#nome").value;
    let data    = document.querySelector("#data").value;
    let salario = document.querySelector("#salario").value;

        
    var cadastro = [];
    var json = {"codigo":codigo,"nome":nome,"data":data,"salario":salario};

    let retorno = cadastro.push(json);

}
document.querySelector("button").addEventListener('click',Salvar);