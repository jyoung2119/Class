import unittest
import triArea

class triAreaTDD(unittest.TestCase):
    def test_calculation(self):
        result = triArea.calculation(10, 5)
        expected = 25
        self.assertEqual(expected, result)

if __name__ == '__main__':
    unittest.main()