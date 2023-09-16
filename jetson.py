import bluetooth

# Replace with your ESP32's Bluetooth address
esp32_mac_address = 'B4:8A:A:75:E7:EC'

# Establish a Bluetooth socket connection
sock = bluetooth.BluetoothSocket(bluetooth.RFCOMM)
port = 1  # SPP profile port number

try:
    sock.connect((esp32_mac_address, port))
    print("Connected to ESP32")

    data_to_send = "Hello, ESP32!"

    # Send data
    sock.send(data_to_send)

except bluetooth.btcommon.BluetoothError as err:
    print(f"Bluetooth error: {err}")
finally:
    sock.close()
