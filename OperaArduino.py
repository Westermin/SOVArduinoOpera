import serial
ser = serial.Serial(port='/dev/ttyACM0', baudrate=9600)
answer = "Hello"
while answer != "Stop":
    answer = input("Let there be light?")
    answer = answer.lower()
    if "m" in answer:
        ser.write("marathon")
    if "b" in answer:
        ser.write("bright")
    if "u" in answer:
        ser.write("up")
    if "d" in answer:
        ser.write("down")
