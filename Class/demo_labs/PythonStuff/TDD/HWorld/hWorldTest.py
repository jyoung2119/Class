import unittest
import hWorld

class hWorldTDD(unittest.TestCase):

    def test_string(self):
        string = hWorld.main()
        expected = "Hello World"
        self.assertEqual(expected, string)

if __name__ == '__main__':
    unittest.main()  