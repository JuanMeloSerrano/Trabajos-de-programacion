/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.mycompany.andrescuentaquiz;

/* Programa mediante el cual se pruena si un núnmero dado es PRIMO o NO.
 */

import javax.swing.JOptionPane;
//import java.util.Scanner;
public class quiz {
    public static void main (String args[]){
        
        int N, i, THT, PAGO, HA;
        int PAGOE = 0;
        String CED, NMB;
        //Scanner teclado = new Scanner(System.in);
        N = Integer.parseInt(JOptionPane.showInputDialog("Ingrese el numero de obreros: "));
        
        for (i = 1; i <= N; i++){
            NMB = JOptionPane.showInputDialog("Introduzca el nombre del obrero # "+ i + " : ");
            
            CED = JOptionPane.showInputDialog("Introduzca el numero de cedula de "+ NMB + " : ");
            
            THT = Integer.parseInt(JOptionPane.showInputDialog("Ingrese numero de horas trabajadas por "+NMB+": "));
            
            if(THT <= 40){
                PAGO = 20000 * THT;
            }else{
                HA = THT - 40;
                PAGO = (20000 * THT) + (HA * 25000);
            }
            JOptionPane.showMessageDialog(null,"El salario obtenido por "+ NMB +" es: "+PAGO);
           PAGOE = PAGOE + PAGO;
        }
     JOptionPane.showMessageDialog(null,"La empresa pagó en total: "+PAGOE);
    }
}
    
