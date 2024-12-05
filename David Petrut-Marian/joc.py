from tkinter import *
from tkinter import messagebox
import random
 
afisaj = Tk()
afisaj.title("Piatra Hartie Foarfeca")
 
# regulile jocului
reguli = (
    "Regulile jocului sunt :\n"
    " Piatra vs Hartie -> Hartie\n"
    " Piatra vs Foarfeca -> Piatra\n"
    " Foarfeca vs Hartie -> Foarfeca\n"
)
 
label_reguli_joc = Label(afisaj, text=reguli, fg="blue", font=("Arial", 12))
label_reguli_joc.pack(side="top")
 
# regulile determinarea câștigătorului
reguli_joc = {
    "Piatra": {"Hartie": "pierde", "Foarfeca": "castiga"},
    "Hartie": {"Foarfeca": "pierde", "Piatra": "castiga"},
    "Foarfeca": {"Piatra": "pierde", "Hartie": "castiga"},
}
 

scor_utilizator = 0
scor_calculator = 0
 
# funcți8a jocului
def joc(alegere_utilizator):
    global scor_utilizator, scor_calculator 
    optiuni_de_joc = list(reguli_joc.keys())
    alegere_calculator = random.choice(optiuni_de_joc)
 
    mesaj = f"Calculatorul a ales {alegere_calculator}\n"
 
    if alegere_calculator == alegere_utilizator:
        mesaj += "Egalitate"
        messagebox.showinfo("Egalitate", mesaj)
    else:
        rezultat = reguli_joc[alegere_utilizator][alegere_calculator]
        if rezultat == "castiga":
            scor_utilizator += 1  # crește scorul utilizator
            mesaj += "Ai câștigat!"
            messagebox.showinfo("Ai câștigat", mesaj)
        else:
            scor_calculator += 1  # crește scorul calculatorului
            mesaj += "Ai pierdut!"
            messagebox.showinfo("Ai pierdut", mesaj)
 
    # actualizare scoruri
    label_scor["text"] = f"Scor Utilizator: {scor_utilizator} | Scor Calculator: {scor_calculator}"
 
    # cine castiga jocu
    if scor_utilizator == 3:
        messagebox.showinfo("Victorie!", "Felicitări! Ai câștigat jocul!")
        reset_joc()
    elif scor_calculator == 3:
        messagebox.showinfo("Infrângere!", "Calculatorul a câștigat jocul!")
        reset_joc()
 
#restartare joc
def reset_joc():
    global scor_utilizator, scor_calculator
    scor_utilizator = 0
    scor_calculator = 0
    label_scor["text"] = f"Scor Utilizator: {scor_utilizator} | Scor Calculator: {scor_calculator}"
 
#buton
button_piatra = Button(afisaj, text="Piatra", command=lambda: joc("Piatra"))
button_piatra.pack(side="left")
 
button_hartie = Button(afisaj, text="Hartie", command=lambda: joc("Hartie"))
button_hartie.pack(side="left")
 
button_foarfeca = Button(afisaj, text="Foarfeca", command=lambda: joc("Foarfeca"))
button_foarfeca.pack(side="left")
 
#scor
label_scor = Label(afisaj, text="Scor Utilizator: 0 | Scor Calculator: 0", fg="red",font=("Arial", 12))
label_scor.pack(side="bottom")

afisaj. mainloop()