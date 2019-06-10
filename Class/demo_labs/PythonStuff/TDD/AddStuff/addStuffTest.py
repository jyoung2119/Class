import unittest
import addStuff

class addStuffTDD(unittest.TestCase):
    def test_Addition(self):
        result = addStuff.addition()
        expected = 24
        self.assertEqual(expected, result)

if __name__ == '__main__':
    unittest.main()