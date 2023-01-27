

void read_serial()
{
    if (Serial.available() > 0)
    {
        String dataIncome = Serial.readStringUntil('\n');
        int commaIndex = dataIncome.indexOf(',');
        int secondCommaIndex = dataIncome.indexOf(',', commaIndex + 1);
        String firstValue = dataIncome.substring(0, commaIndex);
        String secondValue = dataIncome.substring(commaIndex + 1, secondCommaIndex);
        if (firstValue == "1")
        {
            moveCenter(secondValue.toInt());
        }
        else
        {
            Serial.println("ball not foudn");
            stop();
        }
    }
}