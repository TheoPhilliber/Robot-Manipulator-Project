import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/theo/arduinobot_ws/src/install/arduinobot_py_examples'
