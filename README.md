based on ![](./resources/official_armmbed_example_badge.png)
<br>
### **Vorlagenprojekt VorlageGSOE (basierend auf Blinky-Projekt)**


Blinky ist Teil der [Arm Mbed OS Official Examples](https://os.mbed.com/code/) und ist das [Startbeispiel für ARM MBED OS6](https://os.mbed.com/docs/mbed-os/v6.16/introduction/index.html). Es enthält eine Anwendung die eine LED auf [Mbed boards](https://os.mbed.com/platforms/) blinken lässt. 
Das offizielle Blinky-Projekt wurde hier überarbeitet, um einen Schnelleinstieg zum **STM32-Nucleo64-L152RE** mit BaseShield GSOE zu ermöglichen.

**Vorlagenprojekt aus Github clonen ...**
[Vorlagenprojekt GSOE](https://github.com/lumppi/vorlageGSOE.git) #LINK: https://github.com/lumppi/vorlageGSOE.git

***
**A: ARM KEIL STUDIO: REGISTRIEREN  (siehe pdf-Anleitung Moodle/Tausch)**

1.	Link in Browser (Firefox, Chrome) öffnen [ARM-KEIL-STUDIO-CLOUD](https://studio.keil.arm.com).
2.	Sign up wählen, gültige email eingeben und Verification Code anfordern.
3.	Verification Code aus email kopieren & eingeben.
4.	Details eingeben (Name, … + Passwort) und Create betätigen.

***
**B: ARM KEIL STUDIO: MBED-BEISPIELPROJEKT HOLEN & TESTEN** 

1.	Per File Menü Neues MBED Beispiel-Projekt „mbed-os-example-blinky“ erstellen.
2.	Projekt markieren und mit Kontextmenü Set Active Project setzen. Danach kann das Projekt per Kontextmenü Rename z.B. in „Vorlage“ umbenannt werden. Um das Projekt zu komplettieren muss noch die Target Hardware „Nucleo-L152RE  ausgewählt werden. Spätestens jetzt sollte der STM32 angeschlossen werden. Dieser erscheint als logisches Laufwerk (z.B. F: oder G:) im Explorer. Außerdem sollte die Projektlibrary mbed-os auf die aktuellste Version (momentan 6.16) aktualisiert werden.
3.	Anschließend lässt sich das Projekt mit dem Hammerbutton compilieren. Die fertige ausführbare Datei .bin Datei wird per Browser heruntergeladen und muss in das STM32 Laufwerk gespeichert werden. Dann blinkt die grüne user-LED. 

***
**C: ARM KEIL STUDIO: GSOE VORLAGEN-PROJEKT HOLEN & VORBEREITEN** 

1.	Per File Menü **Clone** Neues Vorlagen-Projekt aus Github Clonen.
    [Vorlagenprojekt GSOE](https://github.com/lumppi/vorlageGSOE.git) LINK: https://github.com/lumppi/vorlageGSOE.git
2.	Per Kontext Menü **Rename** Projekt umbenennen, z.B. in myPro oder test1. Im Projekt integriert sind bereits verschiedene Bibliotheken, u.a. zur Verwendung des LCD des Baseshields. Standardgemäß mit #if1 aktiviert ist das Programm VorlageBit.cpp. Dieses kann per Klick angezeigt werden.
3.	Projekt per Hammerbutton **compilieren** und an STM32 herunterladen.


***
**D: ARM KEIL STUDIO: GSOE VORLAGEN-PROJEKT BEARBEITEN**

 **Programm wechseln (im gleichen Projekt)**

 1. VorlageBit.cpp per **#if 0** deaktivieren.
 2. VorlageByte.cpp per **#if 1** aktivieren.
 3. Projekt per Hammerbutton **compilieren** und an STM32 herunterladen.<br> 

**Neues Programm erstellen (im gleichen Projekt)**

 1. Letztes Programm per **#if 0** deaktivieren.
 2. Programm markieren und per Kontext Menü **Duplicate** Programm duplizieren.
 3. per Kontext Menü **Rename** z.B. in newprog.cpp umbenennen. 
 4. newprog.cpp per #if1 aktivieren und bearbeiten.
 5.	Projekt per Hammerbutton **compilieren** und an STM32 herunterladen.

**Neues Projekt aus vorlageGSOE erstellen** 

1. Per File Menü **Clone** Neues Vorlagen-Projekt aus Github Clonen. 
2. Per Kontext Menü **Rename** Projekt umbenennen, z.B. in myProx oder testx. Standardgemäß mit **#if 1** aktiviert ist das Programm VorlageBit.cpp. 
3. Programm markieren und per Kontext Menü **Duplicate** Programm duplizieren.
4. per Kontext Menü **Rename** z.B. in newprog.cpp umbenennen. 
5. newprog.cpp per **#if 1** aktivieren und bearbeiten.
6. Projekt per Hammerbutton **compilieren** und an STM32 herunterladen.

***

**ACHTUNG:**

- Es darf pro Projekt immer nur genau 1 Programm mit **#if 1** aktiviert sein.
- Es ist ratsam die Programme im gleichen Projekt nach einem bestimmten Schema zu benennen, z.B. **kapX_Benennung.cpp**.
- Projektcompilierung dauert deutlich **länger** als nur Programmcompilierung.

**Ein neues Projekt lohnt nur …**

- Wenn das vorige Projekt defekt ist.
- Wenn das aktuelle Projekt geschützt werden soll, weil z.B. zusätzliche Bibliotheken benötigt werden, die das Projekt ändern.
- ein Projekt/Bibliothek Update erfolgen soll.
- das Projekt z.B. über github veröffentlicht werden soll. 


***

**Troubleshooting**
 
 - [documentation](https://os.mbed.com/docs/latest/tutorials/debugging.html) 
 ***
**Related Links**

* [Mbed OS Stats API](https://os.mbed.com/docs/latest/apis/mbed-statistics.html).
* [Mbed OS Configuration](https://os.mbed.com/docs/latest/reference/configuration.html).
* [Mbed OS Serial Communication](https://os.mbed.com/docs/latest/tutorials/serial-communication.html).
* [Mbed OS bare metal](https://os.mbed.com/docs/mbed-os/latest/reference/mbed-os-bare-metal.html).
* [Mbed boards](https://os.mbed.com/platforms/).

***
**License and contributions [DISCLAIMER]**
The software is provided under Apache-2.0 license. Contributions to this project are accepted under the same license. Please see contributing.md for more info.
This project contains code from other projects. The original license text is included in those source files. They must comply with our license guide.
