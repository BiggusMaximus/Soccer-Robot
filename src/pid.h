int SET_POINT = 320;
int THRESH = 35;

void moveCenter(int xp)
{
    if ((xp > SET_POINT))
    {
        Serial.println("kiri");
        putar_kanan(100);
    }
    else if (xp < SET_POINT)
    {
        Serial.println("kanan");
        putar_kiri(100);
    }
    else if ((xp < SET_POINT + THRESH) and (xp > SET_POINT - THRESH))
    {
        Serial.println("stop thresh");
        stop();
    }
}
