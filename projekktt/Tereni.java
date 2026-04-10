package projekktt;
import projekktt.UnosClana;
import projekktt.Voditelj_Izbornik;
import java.awt.EventQueue;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.Statement;

import javax.swing.JFrame;
import javax.swing.JOptionPane;
import javax.swing.JScrollPane;
import javax.swing.JTable;
import javax.swing.table.DefaultTableModel;
import javax.swing.JLabel;
import java.awt.Font;
import javax.swing.JButton;
import javax.swing.JTextField;
import java.awt.event.ActionListener;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;
import java.awt.event.ActionEvent;

public class Tereni {

    private JFrame frame;
    private DefaultTableModel tableModel;
    private JTable table;

    public static void main(String[] args) {
        EventQueue.invokeLater(new Runnable() {
            public void run() {
                try {
                    Tereni window = new Tereni();
                    window.frame.setVisible(true);
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
        });
    }

    public Tereni() {
        initialize();
    }

    private void initialize() {
        frame = new JFrame();
        frame.setBounds(100, 100, 926, 486);
        frame.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);

        // Create a table model with columns
        String[] columns = {"CLAN_ID", "IME", "PREZIME", "GOD_ROD", "SPOL", "E-MAIL"};
        tableModel = new DefaultTableModel(columns, 0);
         

        frame.getContentPane().setLayout(null);
        
        JScrollPane scrollPane = new JScrollPane();
        scrollPane.setBounds(10, 89, 902, 190);
        frame.getContentPane().add(scrollPane);
        
        table = new JTable(tableModel);
        scrollPane.setViewportView(table);
        table.setModel(new DefaultTableModel(
        	new Object[][] {
        	},
        	new String[] {
        		"ID_TEREN", "NAZIV", "VRSTA", "POVRSINA"
        	}
        ) {
        	boolean[] columnEditables = new boolean[] {
        		true, false, false, false, false
        	};
        	public boolean isCellEditable(int row, int column) {
        		return columnEditables[column];
        	}
        });
        
        JButton btnNewButton = new JButton("PRIKAŽI TERENE");
        btnNewButton.addActionListener(new ActionListener() {
        	public void actionPerformed(ActionEvent e) {
        		
        		try
				{
					Class.forName("com.mysql.cj.jdbc.Driver");
					Connection con=DriverManager.getConnection("jdbc:mysql://student.veleri.hr/ljuras?serverTimezone=UTC", "ljuras", "11");
					String upit="SELECT * FROM TEREN";
					Statement stmt=con.createStatement();
					ResultSet rs=stmt.executeQuery(upit);
					
					DefaultTableModel model=(DefaultTableModel)table.getModel();
					
					model.setRowCount(0);
					
					while(rs.next())
					{
						int id_teren=rs.getInt(1);
						String naziv=rs.getString(2);
						String vrsta=rs.getString(3);
						String povrsina=rs.getString(4);
						
						
						model.addRow(new Object[] {id_teren, naziv, vrsta, povrsina});
					}
					
					
				}
				catch(Exception e1)
				{
					JOptionPane.showMessageDialog(null, e1);
				}
        	}
        });
        btnNewButton.setBounds(757, 290, 145, 23);
        frame.getContentPane().add(btnNewButton);
        
        

        JLabel lblNewLabel = new JLabel("PREGLED TERENA");
        lblNewLabel.setFont(new Font("Tahoma", Font.PLAIN, 18));
        lblNewLabel.setBounds(374, 25, 283, 14);
        frame.getContentPane().add(lblNewLabel);
        
        
        
    }
        
        

    public void showWindow()
	{
		frame.setVisible(true);
	}
}
