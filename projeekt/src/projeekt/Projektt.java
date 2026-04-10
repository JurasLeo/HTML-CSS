package projeekt;
import java.io.BufferedReader;
import java.io.FileReader;
import java.awt.EventQueue;
import java.io.FileWriter;
import java.io.IOException;
import javax.swing.JFrame;
import javax.swing.JTextField;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JButton;
import javax.swing.JTable;
import javax.swing.JRadioButton;
import javax.swing.ButtonGroup;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;
import javax.swing.table.DefaultTableModel;
import javax.swing.JScrollPane;
import javax.swing.JComboBox;
import java.awt.Window.Type;
import java.awt.Font;
import javax.swing.DefaultComboBoxModel;
import javax.swing.JPasswordField;
public class Projektt {
	
	public JFrame frame;
	private JTextField prezime;
	private JTextField ime;
	private final ButtonGroup buttonGroup = new ButtonGroup();
	private JTable table;
	private JTable table_1;
	private boolean prikazpodataka = false;
	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					Projektt window = new Projektt();
					window.frame.setVisible(true);
				} catch (Exception e) {
					e.printStackTrace();
				}
			}
		});
	}

	/**
	 * Create the application.
	 */
	public Projektt() {
		initialize();
	}

	/**
	 * Initialize the contents of the frame.
	 */
	private void initialize() {
		frame = new JFrame();
		frame.getContentPane().setFont(new Font("Snap ITC", Font.PLAIN, 11));
		frame.setBounds(100, 100, 618, 343);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.getContentPane().setLayout(null);
		
		prezime = new JTextField();
		prezime.setBounds(70, 36, 96, 20);
		frame.getContentPane().add(prezime);
		prezime.setColumns(10);
		
		JLabel lblNewLabel = new JLabel("Ime:");
		lblNewLabel.setBounds(10, 11, 49, 14);
		frame.getContentPane().add(lblNewLabel);
		
		JLabel lblNewLabel_1 = new JLabel("Prezime:");
		lblNewLabel_1.setBounds(10, 39, 75, 14);
		frame.getContentPane().add(lblNewLabel_1);
		
		ime = new JTextField();
		ime.setBounds(70, 8, 96, 20);
		frame.getContentPane().add(ime);
		ime.setColumns(10);
		
		JRadioButton REDOVAN = new JRadioButton("Redovan");
		buttonGroup.add(REDOVAN);
		REDOVAN.setBounds(244, 7, 111, 23);
		frame.getContentPane().add(REDOVAN);
		
		Object[] prviRed = {"IME", "PREZIME","KOLEGIJ","STATUS"}; 
		table = new JTable();
		
		JScrollPane scrollPane = new JScrollPane();
		scrollPane.setBounds(20, 69, 584, 203);
		frame.getContentPane().add(scrollPane);
		table_1 = new JTable(new DefaultTableModel(null, prviRed));
		scrollPane.setViewportView(table_1);
		
		JRadioButton muski = new JRadioButton("Izvanredan");
		buttonGroup.add(muski);
		muski.setBounds(357, 7, 111, 23);
		frame.getContentPane().add(muski);
		
		JComboBox comboBox = new JComboBox();
		comboBox.setModel(new DefaultComboBoxModel(new String[] {"", "INFORMATIKA", "PODUZETNIŠTVO", "PROMET"}));
		comboBox.setBounds(244, 37, 111, 18);
		frame.getContentPane().add(comboBox);
		
		JButton btnNewButton = new JButton("UNOS");
		btnNewButton.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
			
			
			String imeStudenta = ime.getText();
	        String prezimeStudenta = prezime.getText();
	        String status=REDOVAN.isSelected() ? "R" : "I";
	        String kolegij=comboBox.getSelectedItem().toString();
	        
	        
	        String unos=imeStudenta+"~"+prezimeStudenta+"~"+kolegij+"~"+status;
	        
	        if (imeStudenta.isEmpty() || prezimeStudenta.isEmpty() || kolegij.isEmpty() || status.isEmpty())
				JOptionPane.showMessageDialog(null, "Niste upisali sve podatke");
	        else if (!imeStudenta.matches("[a-zA-Z]+") || !prezimeStudenta.matches("[a-zA-Z]+")) {
	        	JOptionPane.showMessageDialog(null, "Ne unosite brojeve");
	        }
			else
			{
				
					try {
					FileWriter datoteka=new FileWriter("C:\\Users\\Leo\\OneDrive\\Desktop\\dat.txt",true);

		                datoteka.write(unos);
		                datoteka.write("\n");
		                datoteka.close();
		                JOptionPane.showMessageDialog(null, "Uspjesan unos u datoteku");

		             
		                
						
						
		                ime.setText("");
		                prezime.setText("");
			
		                String podaci[]= {imeStudenta,prezimeStudenta,kolegij,status};
		                DefaultTableModel tablicas = (DefaultTableModel)table_1.getModel();
		                tablicas.addRow(podaci);
					
				
				
				}catch(IOException e1){
					JOptionPane.showMessageDialog(null, "Greska kod unosa u datoteku");
					
				}
				
			
	        
				
	        
			}
			}
		});
		btnNewButton.setBounds(342, 283, 89, 23);
		frame.getContentPane().add(btnNewButton);
		
		
			
			
		
		
		
		JButton btnNewButton_1 = new JButton("PRIKAZ");
		btnNewButton_1.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				
				
				
				if (!prikazpodataka) {
		            String naziv = "C:\\Users\\Leo\\OneDrive\\Desktop\\dat.txt";
		            
		            try (BufferedReader reader = new BufferedReader(new FileReader(naziv))) {
		                String redak;
		                while ((redak = reader.readLine()) != null) {
		                    String[] podaci = redak.split("~");
		                    ((DefaultTableModel) table_1.getModel()).addRow(podaci);
		                }
		                 // Oznaćčujemo da je povlačenje podataka izvršeno
		                prikazpodataka = true;
		            } catch (Exception e2) {
		                JOptionPane.showMessageDialog(null, "Problem s dohvatom podataka");
		            }
		        } else {
		            JOptionPane.showMessageDialog(null, "Podaci su već povučeni iz datoteke");
		        }
				 
		    }
		});
		btnNewButton_1.setBounds(429, 283, 89, 23);
		frame.getContentPane().add(btnNewButton_1);
		
		JButton btnNewButton_2 = new JButton("BRISANJE");
		btnNewButton_2.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				
				
			}
		});
		btnNewButton_2.setBounds(515, 283, 89, 23);
		frame.getContentPane().add(btnNewButton_2);
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		

		
		
		
		
	}
}
