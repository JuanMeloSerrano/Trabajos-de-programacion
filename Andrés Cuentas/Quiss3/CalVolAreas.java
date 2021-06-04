/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.mycompany.tercercorte;

import javax.swing.JOptionPane;

/**
 *
 * @author ProBook
 */
public class CalVolAreas {
    public static void main (String args[]){
        int opc;
        float lado, area, base, alt, log, rad, pi = (float) 3.1415, vol;
        
        JOptionPane.showMessageDialog(null,"Programa que calcula el área, el volumen o la longitud de algunas figuras geometricas.");
        
        do{
            opc = Integer.parseInt(JOptionPane.showInputDialog(""
                + "1. Área de un Cuadrado.\n"
                + "2. Área de un Rectángulo.\n"
                + "3. Área de un Triangulo.\n"
                + "4. Longitud de un Círculo, área de una Circunferencia y vollumen de una eEsfera\n"
                + "5. Volumen de un cono.\n"
                + "6. Volumen de una pirámide con base cuadrangular.\n"
                + "7. Volumen de un Cilindro.\n"
                + "9. FINAL.\n\n"
                + "Ingrese el número que corresponde a la opción deseada."));
            
            switch(opc){
                case 1:
                     JOptionPane.showMessageDialog(null,"Área de un Cuadrado.\n");
                     lado = Integer.parseInt(JOptionPane.showInputDialog("Ingrese la longitud de un lado del cuadrado: "));
                     area = lado * lado;
                     JOptionPane.showMessageDialog(null,"El área del cuadrado es: "+ area);
                     break;
                case 2:
                    JOptionPane.showMessageDialog(null,"Área de un Rectángulo.\n");
                    base = Integer.parseInt(JOptionPane.showInputDialog("Ingrese la base del Rectángulo: "));
                    alt = Integer.parseInt(JOptionPane.showInputDialog("Ingrese la altura del Rectángulo: "));
                    area = (base * alt);
                    JOptionPane.showMessageDialog(null,"El área del Rectángulo es: "+ area);
                    break;
                case 3:
                    JOptionPane.showMessageDialog(null,"Área de un Triangulo.\n");
                    base = Integer.parseInt(JOptionPane.showInputDialog("Ingrese la base del triangulo: "));
                    alt = Integer.parseInt(JOptionPane.showInputDialog("Ingrese la altura del triangulo: "));
                    area = (float) (0.5 * (base * alt));
                    JOptionPane.showMessageDialog(null,"El área del trinagulo es: "+ area);
                    break;
                case 4:
                    JOptionPane.showMessageDialog(null,"Longitud de un Círculo.\n");
                    rad = Integer.parseInt(JOptionPane.showInputDialog("Ingrese el radio del Círculo: "));
                    log = (2 * pi * rad);
                    JOptionPane.showMessageDialog(null,"La longitud del Círculo es: "+ log);
                    JOptionPane.showMessageDialog(null,"Área de una Circunferencia.\n");
                    rad = Integer.parseInt(JOptionPane.showInputDialog("Ingrese el radio de la Circunferencia: "));
                    area = (pi * rad * rad);
                    JOptionPane.showMessageDialog(null,"El área de la Circunferencia es: "+ area);
                    JOptionPane.showMessageDialog(null,"Volumen de una Esfera.\n");
                    rad = Integer.parseInt(JOptionPane.showInputDialog("Ingrese el radio de la Esfera: "));
                    vol = (4/3) * pi * (rad * rad * rad);
                    JOptionPane.showMessageDialog(null,"La longitud del Círculo es: "+ vol);
                    break;
                case 5:
                    JOptionPane.showMessageDialog(null,"Volumen de un cono.\n");
                    rad = Integer.parseInt(JOptionPane.showInputDialog("Ingrese el radio del Cono: "));
                    alt = Integer.parseInt(JOptionPane.showInputDialog("Ingrese la altura del Cono: "));
                    vol = (float) 0.3333 * alt * (rad * rad) * pi;
                    JOptionPane.showMessageDialog(null,"El volumen del Cono es: "+ vol);
                    break;
                case 6:
                    JOptionPane.showMessageDialog(null,"Volumen de una pirámide con base cuadrangular.\n");
                    lado = Integer.parseInt(JOptionPane.showInputDialog("Ingrese la longitud de un lado de la base de la piramide: "));
                    alt = Integer.parseInt(JOptionPane.showInputDialog("Ingrese la altura de la piramide: "));
                    area = lado * lado;
                    vol = (float) (0.3333 * alt * area);
                    JOptionPane.showMessageDialog(null,"El volumen de la Piramide cuadrangular es: "+ vol);
                    break;
                case 7:
                    JOptionPane.showMessageDialog(null,"Volumen de un Cilindro.\n");
                    rad = Integer.parseInt(JOptionPane.showInputDialog("Ingrese el radio del Cilindro: "));
                    alt = Integer.parseInt(JOptionPane.showInputDialog("Ingrese la altura de la Cilindro: "));
                    vol = pi * (rad * rad) * alt;
                    JOptionPane.showMessageDialog(null,"El volumen de la Piramide cuadrangular es: "+ vol);
                    break;
                case 9:
                    JOptionPane.showMessageDialog(null,"Cerrando programa.\n");
                    break;
                default:
                     JOptionPane.showMessageDialog(null,"Error! opción inválida.");
            }
        }while(opc!=9);
    }
}
