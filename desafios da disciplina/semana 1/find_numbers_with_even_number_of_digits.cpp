class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = nums.size();
        int contador = 0;
        int contaDigitos = 0;
        int valor;
        for (int i = 0; i < n; i++){
            valor = nums[i];

            
            while (valor != 0){
                 contaDigitos = contaDigitos + 1;
                 valor = valor / 10;
            }
            
            if(contaDigitos != 0){
                if(contaDigitos % 2 == 0){
                    contador++;
                }
            }
            
            contaDigitos = 0;

        
            
        }
        return contador;
        
    } 
    
};