import unittest
from unittest.mock import patch, MagicMock
from assistant.core import process_command, speak, listen

class TestAssistantCore(unittest.TestCase):

    @patch('assistant.core.speak')
    @patch('assistant.core.webbrowser.open')
    def test_search_command(self, mock_web_open, mock_speak):
        process_command("search python")
        mock_speak.assert_called_with("Searching for python")
        mock_web_open.assert_called_with("https://www.google.com/search?q=python")

    @patch('assistant.core.speak')
    def test_time_command(self, mock_speak):
        process_command("what is the time")
        self.assertTrue(mock_speak.called)
        self.assertIn("The time is", mock_speak.call_args[0][0])

    @patch('assistant.core.speak')
    def test_unknown_command(self, mock_speak):
        process_command("do something random")
        mock_speak.assert_called_with("I can tell time, date, search Google, or open websites.")

if __name__ == '__main__':
    unittest.main()