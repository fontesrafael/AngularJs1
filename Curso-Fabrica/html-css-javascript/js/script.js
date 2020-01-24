function Soma(){

    //preventDefault(); //Dessa forma o subimit não troca de página
    let valor1 = document.querySelector("#valor1").value;
    let valor2 = document.querySelector("#valor2").value;

    alert( parseInt(valor1) +  parseInt(valor2));
}

function retornaPessoa(){
    let pessoa = {
        nome: "Rafael",
        idade: 31
    };

    console.log(JSON.stringify(pessoa));

}

document.querySelector("button").addEventListener('click',Soma);