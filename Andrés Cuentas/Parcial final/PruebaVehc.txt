/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.mycompany.tercercorte;

import javax.swing.JOptionPane;

/**
// *
 * @author ProBook
 */
public class PruebaVehc {
    public static void main (String args[]) throws InterruptedException{
        int opc = 1;
        float gasolina = 0, distancia, tiempo = 0, TTC = 0, TGC = 0, TDR = 0, VPV = 0;
        float minuto = 60, hora = 3600, tiemHora;
        int vueltas = 0, NTV;
        JOptionPane.showMessageDialog(null,"Precione Ok para iniciar la prueba de rendimiento del vehiculo.");
        do{
            if(opc == 1){
                Thread.sleep(2000);
                JOptionPane.showMessageDialog(null,"VUELTA TERMINADA!\n "
                    + "El vehiculo llegó al punto de partida.");
                vueltas = vueltas + 1;
                gasolina = Integer.parseInt(JOptionPane.showInputDialog("Ingrese el consumo de gasolina (Galones): "));
                TGC = TGC + gasolina;
                distancia = Integer.parseInt(JOptionPane.showInputDialog("Ingrese la distancia recorrido (Kilometros): "));
                TDR = TDR + distancia;
                tiempo = Integer.parseInt(JOptionPane.showInputDialog("Ingrese el tiempo (Segundos): "));
                TTC = TTC + tiempo;
                tiemHora = tiempo / hora;
                VPV = distancia / tiemHora;
                JOptionPane.showMessageDialog(null,"Velocidad promedio del vehiculo por cada vuelta: "+ VPV+"k/h");
                opc = Integer.parseInt(JOptionPane.showInputDialog("Ingrese (1) para continuar con la prueba ó (0) para terminar la prueba."));             
            }else{
                JOptionPane.showMessageDialog(null,"ERROR! Opción invalida.");
                opc = Integer.parseInt(JOptionPane.showInputDialog("Ingrese (1) para continuar con la prueba ó (0) para terminar la prueba."));
            }
        }while(opc != 0);   
        JOptionPane.showMessageDialog(null,"Prueba terminada.");
            TTC = (float) (TTC / minuto);
        JOptionPane.showMessageDialog(null,"RENDIMIENTO DEL VEHÍCULO EN LA PRUEBA.\n"
                + "Número de vueltas: "+ vueltas +"\n"
                + "Total tiempo consumido: "+ TTC +" minutos\n"
                + "Total de gasolina consumida: "+ TGC +" galones");
    }
}
