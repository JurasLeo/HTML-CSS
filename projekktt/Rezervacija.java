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

public class Rezervacija {

    private JFrame frame;
    private DefaultTableModel tableModel;
    private JTable table;
    private JTextField pretraga;

    public static void main(String[] args) {
        EventQueue.invokeLater(new Runnable() {
            public void run() {
                try {
                    Rezervacija window = new Rezervacija();
                    window.frame.setVisible(true);
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
        });
    }

    public Rezervacija() {
        initialize();
    }

    private void initialize() {
        frame = new JFrame();
        frame.setBounds(100, 100, 926, 486);
        frame.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);

        // Create a table model with columns
        String[] columns = {"CLAN_ID", "IME", "PREZIME", "GOD_ROD", "SPOL", "BR.MOB"};
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
    					"ID", "DATUM_VRIJEME", "CLAN", "TEREN"
    			}
    		) {
    			boolean[] columnEditables = new boolean[] {
    				false, false, false, false
    			};
    			public boolean isCellEditable(int row, int column) {
    				return columnEditables[column];
    			}
    		});
        
        JButton btnNewButton = new JButton("PRIKAŽI REZERVACIJE");
        btnNewButton.addActionListener(new ActionListener() {
        	public void actionPerformed(ActionEvent e) {
        		
        		try
				{
					Class.forName("com.mysql.cj.jdbc.Driver");
					Connection con=DriverManager.getConnection("jdbc:mysql://student.veleri.hr/ljuras?serverTimezone=UTC", "ljuras", "11");
					String upit="SELECT * FROM rezervacija";
					Statement stmt=con.createStatement();
					ResultSet rs=stmt.executeQuery(upit);
					
					DefaultTableModel model=(DefaultTableModel)table.getModel();
					
					model.setRowCount(0);
					
					while(rs.next())
					{
						int id=rs.getInt(1);
						String dat_=rs.getString(2);
						String clan=rs.getString(4);
						String teren=rs.getString(3);
						
						
						model.addRow(new Object[] {id, dat_, clan, teren});
					}
					
					
				}
				catch(Exception e1)
				{
					JOptionPane.showMessageDialog(null, e1);
				}
        	}
        });
        btnNewButton.setBounds(10, 55, 145, 23);
        frame.getContentPane().add(btnNewButton);
        
        

        JLabel lblNewLabel = new JLabel("PREGLED REZERVACIJA");
        lblNewLabel.setFont(new Font("Tahoma", Font.PLAIN, 18));
        lblNewLabel.setBounds(374, 25, 283, 14);
        frame.getContentPane().add(lblNewLabel);
        
        JButton btnNewButton_2 = new JButton("OBRIŠI");
        btnNewButton_2.addActionListener(new ActionListener() {
        	public void actionPerformed(ActionEvent e) {
        		
        		DefaultTableModel model=(DefaultTableModel)table.getModel();
				int odabraniRedak=table.getSelectedRow();
				
				if (odabraniRedak>=0)
				{
					try
					{
						int clan_id=Integer.parseInt(table.getValueAt(odabraniRedak,0).toString());
						
						Class.forName("com.mysql.cj.jdbc.Driver");
						Connection con=DriverManager.getConnection("jdbc:mysql://student.veleri.hr/ljuras?serverTimezone=UTC", "ljuras", "11");
						
						
						String upit="DELETE FROM rezervacija WHERE id=?";
						//String upit="DELETE FROM ClanoviProjekt WHERE clan_id=? AND ime=? AND prezime=?";
						PreparedStatement ps=con.prepareStatement(upit);
						ps.setInt(1, clan_id);
						
						int rezultat=ps.executeUpdate();
						
						if (rezultat==1)
						{
							DefaultTableModel model1=(DefaultTableModel)table.getModel();
							model1.removeRow(odabraniRedak);
							JOptionPane.showMessageDialog(null, "Rezervacija uspješno izbrisan");
						}
						else
						{
							JOptionPane.showMessageDialog(null, "Rezervaciju nije moguće obrisati");
						}
						
						
					}
					catch(Exception e1)
					{
						JOptionPane.showMessageDialog(null, e1);
					}
				}
				else
				{
					JOptionPane.showMessageDialog(null, "Redak nije odabran");
				}
        	}
        });
        btnNewButton_2.setBounds(813, 298, 89, 23);
        frame.getContentPane().add(btnNewButton_2);
        
        JButton btnNewButton_1 = new JButton("DODAJ REZERVACIJU");
        btnNewButton_1.addActionListener(new ActionListener() {
        	public void actionPerformed(ActionEvent e) {
        		
        		RezervacijaClana rez=new RezervacijaClana();
        		rez.showWindow();
        	}
        });
        btnNewButton_1.setBounds(623, 298, 180, 23);
        frame.getContentPane().add(btnNewButton_1);
        
        pretraga = new JTextField();
        pretraga.setBounds(623, 58, 96, 20);
        frame.getContentPane().add(pretraga);
        pretraga.setColumns(10);
        
        JButton btnNewButton_3 = new JButton("PRETRAŽI");
        btnNewButton_3.addActionListener(new ActionListener() {
        	public void actionPerformed(ActionEvent e) {
        		
String pretragas=pretraga.getText();
				
				try
				{
					Class.forName("com.mysql.cj.jdbc.Driver");
					Connection con=DriverManager.getConnection("jdbc:mysql://student.veleri.hr/ljuras?serverTimezone=UTC", "ljuras", "11");
					
					String upit="SELECT * FROM rezervacija WHERE datum_rezervacije LIKE ? OR clan_ime LIKE ? OR teren LIKE ?";
					
					PreparedStatement ps=con.prepareStatement(upit);
					ps.setString(1, "%"+pretragas+"%");
					ps.setString(2, "%"+pretragas+"%");
					ps.setString(3, "%"+pretragas+"%");
					
					
					ResultSet rs=ps.executeQuery();
					//i dalje ide defaultTableModel i nakon toga while (rs.next)
					// i onda sve isto kao kod punjenja podataka iz baze
					
DefaultTableModel model=(DefaultTableModel)table.getModel();
					
					model.setRowCount(0);
					
					while(rs.next())
					{
						int datum_rez=rs.getInt(1);
						String ime=rs.getString(2);
						String teren=rs.getString(3);
						
						
						
						model.addRow(new Object[] {datum_rez, ime, teren});
					}
				}
				catch(Exception e1)
				{
					JOptionPane.showMessageDialog(null, e1);
				}
        		
        	}
        });
        btnNewButton_3.setBounds(740, 57, 128, 23);
        frame.getContentPane().add(btnNewButton_3);
        
        
        
    }
        
        

    public void showWindow()
	{
		frame.setVisible(true);
	}
}
