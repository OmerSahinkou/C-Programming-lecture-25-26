import speech_recognition as sr
import subprocess

def asistan_dinliyor():
    r = sr.Recognizer()

    with sr.Microphone() as source:
        print("Mikrofon aktif. Seni dinliyorum... (Kapatmak için terminalde Ctrl+C yapabilirsin)")
        r.adjust_for_ambient_noise(source)

        while True:
            try:
                audio = r.listen(source)
                metin = r.recognize_google(audio, language="tr-TR").lower()
                print(f"Duyulan: {metin}")

                # Tetikleyici cümle "burak kimdir" olarak güncellendi
                if "burak kimdir" in metin:
                    print("Hedef cümle ('burak kimdir') algılandı! Video açılıyor...")
                    
                    # Ubuntu için garantili link açma yöntemi
                    video_url = "https://www.youtube.com/watch?v=hY69fS8nmFc"
                    subprocess.run(["xdg-open", video_url])
                    
                    break 

            except sr.UnknownValueError:
                pass
            except sr.RequestError as e:
                print(f"Bağlantı hatası: {e}")

if __name__ == "__main__":
    asistan_dinliyor()
