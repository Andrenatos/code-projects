/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Lesbicas;
/**
 *
 * @author a24480
 */
public class Calculadora extends javax.swing.JFrame {

    /**
     * Creates new form Calculadora
     */
    public Calculadora() {
        initComponents();
    }

    /**
     * This method is called from within the constructor to initialize the form.
     * WARNING: Do NOT modify this code. The content of this method is always
     * regenerated by the Form Editor.
     */
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        txtN1 = new javax.swing.JTextField();
        txtN2 = new javax.swing.JTextField();
        butN1 = new javax.swing.JButton();
        butN2 = new javax.swing.JButton();
        butN3 = new javax.swing.JButton();
        butN4 = new javax.swing.JButton();
        butN5 = new javax.swing.JButton();
        butN6 = new javax.swing.JButton();
        butN7 = new javax.swing.JButton();
        butN8 = new javax.swing.JButton();
        butN9 = new javax.swing.JButton();
        lblN1 = new javax.swing.JLabel();
        lblN2 = new javax.swing.JLabel();
        lblN3 = new javax.swing.JLabel();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);

        txtN1.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                txtN1ActionPerformed(evt);
            }
        });

        txtN2.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                txtN2ActionPerformed(evt);
            }
        });

        butN1.setText("+");
        butN1.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                butN1ActionPerformed(evt);
            }
        });

        butN2.setText("-");
        butN2.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                butN2ActionPerformed(evt);
            }
        });

        butN3.setText("x");
        butN3.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                butN3ActionPerformed(evt);
            }
        });

        butN4.setText("/");
        butN4.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                butN4ActionPerformed(evt);
            }
        });

        butN5.setText("%");
        butN5.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                butN5ActionPerformed(evt);
            }
        });

        butN6.setText("PI");
        butN6.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                butN6ActionPerformed(evt);
            }
        });

        butN7.setText("Pow");
        butN7.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                butN7ActionPerformed(evt);
            }
        });

        butN8.setText("Raiz2");
        butN8.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                butN8ActionPerformed(evt);
            }
        });

        butN9.setText("Raiz3");
        butN9.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                butN9ActionPerformed(evt);
            }
        });

        lblN1.setText("    =");

        lblN3.setText("Calculadora do Renato");

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addGap(34, 34, 34)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(butN6, javax.swing.GroupLayout.PREFERRED_SIZE, 66, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(butN1))
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(layout.createSequentialGroup()
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addGroup(layout.createSequentialGroup()
                                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                                    .addComponent(lblN3, javax.swing.GroupLayout.PREFERRED_SIZE, 192, javax.swing.GroupLayout.PREFERRED_SIZE)
                                    .addGroup(layout.createSequentialGroup()
                                        .addComponent(butN2)
                                        .addGap(30, 30, 30)
                                        .addComponent(butN3)))
                                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
                            .addGroup(layout.createSequentialGroup()
                                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                                    .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, layout.createSequentialGroup()
                                        .addComponent(butN7, javax.swing.GroupLayout.PREFERRED_SIZE, 62, javax.swing.GroupLayout.PREFERRED_SIZE)
                                        .addGap(43, 43, 43))
                                    .addGroup(layout.createSequentialGroup()
                                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                                            .addComponent(txtN1, javax.swing.GroupLayout.PREFERRED_SIZE, 101, javax.swing.GroupLayout.PREFERRED_SIZE)
                                            .addGroup(layout.createSequentialGroup()
                                                .addGap(115, 115, 115)
                                                .addComponent(lblN1)))
                                        .addGap(14, 14, 14)))
                                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                                    .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, layout.createSequentialGroup()
                                        .addGap(0, 0, Short.MAX_VALUE)
                                        .addComponent(butN4)
                                        .addGap(53, 53, 53)
                                        .addComponent(butN5))
                                    .addGroup(layout.createSequentialGroup()
                                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                                            .addComponent(txtN2, javax.swing.GroupLayout.PREFERRED_SIZE, 136, javax.swing.GroupLayout.PREFERRED_SIZE)
                                            .addGroup(layout.createSequentialGroup()
                                                .addComponent(butN8)
                                                .addGap(32, 32, 32)
                                                .addComponent(butN9)))
                                        .addGap(0, 17, Short.MAX_VALUE)))
                                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))))
                    .addGroup(layout.createSequentialGroup()
                        .addGap(88, 88, 88)
                        .addComponent(lblN2, javax.swing.GroupLayout.PREFERRED_SIZE, 234, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addGap(0, 64, Short.MAX_VALUE))))
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addGap(15, 15, 15)
                .addComponent(lblN3, javax.swing.GroupLayout.PREFERRED_SIZE, 21, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(txtN1, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(txtN2, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(63, 63, 63)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(butN4)
                    .addComponent(butN3)
                    .addComponent(butN2)
                    .addComponent(butN1)
                    .addComponent(butN5))
                .addGap(25, 25, 25)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(butN8, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                    .addComponent(butN6, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                    .addGroup(layout.createSequentialGroup()
                        .addComponent(butN7, javax.swing.GroupLayout.PREFERRED_SIZE, 42, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addGap(0, 0, Short.MAX_VALUE))
                    .addComponent(butN9, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
                .addGap(18, 18, 18)
                .addComponent(lblN1)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(lblN2, javax.swing.GroupLayout.PREFERRED_SIZE, 19, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(23, 23, 23))
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void butN1ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_butN1ActionPerformed
        // TODO add your handling code here:
        float n1 = Float.parseFloat(txtN1.getText());
        float n2 = Float.parseFloat(txtN2.getText());
        float r = n1+n2;
        lblN2.setText(Float.toString(r));
    }//GEN-LAST:event_butN1ActionPerformed

    private void butN2ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_butN2ActionPerformed
        // TODO add your handling code here:
        float n1 = Float.parseFloat(txtN1.getText());
        float n2 = Float.parseFloat(txtN2.getText());
        float r = n1-n2;
        lblN2.setText(Float.toString(r));
    }//GEN-LAST:event_butN2ActionPerformed

    private void butN3ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_butN3ActionPerformed
        // TODO add your handling code here:
        float n1 = Float.parseFloat(txtN1.getText());
        float n2 = Float.parseFloat(txtN2.getText());
        float r = n1*n2;
        lblN2.setText(Float.toString(r));
    }//GEN-LAST:event_butN3ActionPerformed

    private void butN4ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_butN4ActionPerformed
        // TODO add your handling code here:
        float n1 = Float.parseFloat(txtN1.getText());
        float n2 = Float.parseFloat(txtN2.getText());
        float r = n1/n2;
        lblN2.setText(Float.toString(r));
    }//GEN-LAST:event_butN4ActionPerformed

    private void butN5ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_butN5ActionPerformed
        // TODO add your handling code here:
        float n1 = Float.parseFloat(txtN1.getText());
        float n2 = Float.parseFloat(txtN2.getText());
        float r = n1%n2;
        lblN2.setText(Float.toString(r));
    }//GEN-LAST:event_butN5ActionPerformed

    private void txtN1ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_txtN1ActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_txtN1ActionPerformed

    private void txtN2ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_txtN2ActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_txtN2ActionPerformed

    private void butN6ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_butN6ActionPerformed
        // TODO add your handling code here:
        float n2 = (float) Math.PI;
        txtN2.setText(Float.toString(n2));
    }//GEN-LAST:event_butN6ActionPerformed

    private void butN7ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_butN7ActionPerformed
        // TODO add your handling code here:
        double n1 = Double.parseDouble(txtN1.getText());
        double n2 = Double.parseDouble(txtN1.getText());
        double n3;
        n3 = (double) Math.pow(n1, n2);
        lblN2.setText(Double.toString(n3));
    }//GEN-LAST:event_butN7ActionPerformed

    private void butN8ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_butN8ActionPerformed
        // TODO add your handling code here:
       float n1 = Float.parseFloat(txtN1.getText());
       float n2 = (float) Math.sqrt(n1);
        lblN2.setText(Float.toString(n2));
    }//GEN-LAST:event_butN8ActionPerformed

    private void butN9ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_butN9ActionPerformed
        // TODO add your handling code here:
        float n1 = Float.parseFloat(txtN1.getText());
       float n2 = (float) Math.cbrt(n1);
        lblN2.setText(Float.toString(n2));
    }//GEN-LAST:event_butN9ActionPerformed

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        /* Set the Nimbus look and feel */
        //<editor-fold defaultstate="collapsed" desc=" Look and feel setting code (optional) ">
        /* If Nimbus (introduced in Java SE 6) is not available, stay with the default look and feel.
         * For details see http://download.oracle.com/javase/tutorial/uiswing/lookandfeel/plaf.html 
         */
        try {
            for (javax.swing.UIManager.LookAndFeelInfo info : javax.swing.UIManager.getInstalledLookAndFeels()) {
                if ("Nimbus".equals(info.getName())) {
                    javax.swing.UIManager.setLookAndFeel(info.getClassName());
                    break;
                }
            }
        } catch (ClassNotFoundException ex) {
            java.util.logging.Logger.getLogger(Calculadora.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(Calculadora.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(Calculadora.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(Calculadora.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>

        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new Calculadora().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton butN1;
    private javax.swing.JButton butN2;
    private javax.swing.JButton butN3;
    private javax.swing.JButton butN4;
    private javax.swing.JButton butN5;
    private javax.swing.JButton butN6;
    private javax.swing.JButton butN7;
    private javax.swing.JButton butN8;
    private javax.swing.JButton butN9;
    private javax.swing.JLabel lblN1;
    private javax.swing.JLabel lblN2;
    private javax.swing.JLabel lblN3;
    private javax.swing.JTextField txtN1;
    private javax.swing.JTextField txtN2;
    // End of variables declaration//GEN-END:variables
}
