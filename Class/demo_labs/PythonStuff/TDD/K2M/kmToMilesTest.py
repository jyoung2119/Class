import unittest
import kmToMiles

class kmToMilesTDD(unittest.TestCase):
    def test_conversion(self):
        result = kmToMiles.conDist(10)
        expected = 6.2137
        self.assertAlmostEqual(expected, result, 4)

if __name__ == '__main__':
    unittest.main()