import unittest
from CalculatorFunctions import Calculator

class TddInPythonExample(unittest.TestCase):
 
    def test_calculator_add_method_returns_correct_result(self):
        calc = Calculator()
        result = calc.add(2,2)
        self.assertEqual(4, result)
    def test_calculateBMI_forLowerBoundary(self):
        #Capture the results of the function
        result = Calculator.calculateBMI(58,91,58)
        expected = 19
        #check for expected output
        self.assertEqual(expected, result)

if __name__ == '__main__':
    unittest.main()
