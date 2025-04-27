import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Calculator implements ActionListener {
    JFrame frame;
    JTextField textField;
    JButton[] numberButtons = new JButton[10];
    JButton[] functionButtons = new JButton[8];
    JButton addButton, subButton, mulButton, divButton;
    JButton decButton, equButton, delButton, clrButton;
    JPanel panel;

    Font font = new Font("Arial", Font.BOLD, 20);
    double num1 = 0, num2 = 0, result = 0;
    char operator;
    boolean isNewCalculation = false;

    public Calculator() {
        frame = new JFrame("Calculator");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(400, 500);
        frame.setLayout(null);

        textField = new JTextField();
        textField.setBounds(30, 25, 330, 50);
        textField.setFont(font);
        textField.setEditable(false);
        frame.add(textField);

        addButton = new JButton("+");
        subButton = new JButton("-");
        mulButton = new JButton("*");
        divButton = new JButton("/");
        decButton = new JButton(".");
        equButton = new JButton("=");
        delButton = new JButton("←");
        clrButton = new JButton("C");

        functionButtons[0] = addButton;
        functionButtons[1] = subButton;
        functionButtons[2] = mulButton;
        functionButtons[3] = divButton;
        functionButtons[4] = decButton;
        functionButtons[5] = equButton;
        functionButtons[6] = delButton;
        functionButtons[7] = clrButton;

        for (JButton button : functionButtons) {
            button.addActionListener(this);
            button.setFont(font);
            button.setFocusable(false);
        }

        for (int i = 0; i < 10; i++) {
            numberButtons[i] = new JButton(String.valueOf(i));
            numberButtons[i].addActionListener(this);
            numberButtons[i].setFont(font);
            numberButtons[i].setFocusable(false);
        }

        panel = new JPanel();
        panel.setBounds(30, 100, 330, 300);
        panel.setLayout(new GridLayout(4, 4, 10, 10));

        panel.add(numberButtons[1]); panel.add(numberButtons[2]); panel.add(numberButtons[3]); panel.add(addButton);
        panel.add(numberButtons[4]); panel.add(numberButtons[5]); panel.add(numberButtons[6]); panel.add(subButton);
        panel.add(numberButtons[7]); panel.add(numberButtons[8]); panel.add(numberButtons[9]); panel.add(mulButton);
        panel.add(decButton); panel.add(numberButtons[0]); panel.add(equButton); panel.add(divButton);

        frame.add(panel);
        delButton.setBounds(30, 410, 160, 50);
        clrButton.setBounds(200, 410, 160, 50);
        
        frame.add(delButton);
        frame.add(clrButton);

        frame.setVisible(true);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == clrButton) {
            textField.setText("");
            isNewCalculation = false;
            return;
        }
        if (e.getSource() == delButton) {
            String text = textField.getText();
            textField.setText(text.length() > 0 ? text.substring(0, text.length() - 1) : "");
            return;
        }
        
        if (isNewCalculation && e.getSource() != equButton) {
            textField.setText("");
            isNewCalculation = false;
        }
        
        for (int i = 0; i < 10; i++) {
            if (e.getSource() == numberButtons[i]) {
                textField.setText(textField.getText() + i);
            }
        }
        if (e.getSource() == decButton) {
            textField.setText(textField.getText() + ".");
        }
        if (e.getSource() == addButton || e.getSource() == subButton || e.getSource() == mulButton || e.getSource() == divButton) {
            num1 = Double.parseDouble(textField.getText());
            operator = ((JButton) e.getSource()).getText().charAt(0);
            textField.setText(textField.getText() + " " + operator + " ");
        }
        if (e.getSource() == equButton) {
            String[] parts = textField.getText().split(" ");
            if (parts.length == 3) {
                num2 = Double.parseDouble(parts[2]);
                switch (operator) {
                    case '+': result = num1 + num2; break;
                    case '-': result = num1 - num2; break;
                    case '*': result = num1 * num2; break;
                    case '/': result = num1 / num2; break;
                }
                textField.setText(String.valueOf(result));
                num1 = result;
                isNewCalculation = false;
            }
        }
    }

    public static void main(String[] args) {
        new Calculator();
    }
}