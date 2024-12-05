orar_data = {
    'Luni': ['Istorie', 'Religie', 'Romana', 'Desen', 'Engleza', 'Educatie fizica'],  
    'Marti': ['Matematica', 'Matematica', 'Romana', 'Franceza', 'Muzica', 'Educatie sociala', 'Fizica'],  
    'Miercuri': ['Educatie fizica', 'Romana', 'Dirigentie', 'Fizica', 'Engleza', 'TIC'],  
    'Joi': ['Romana', 'Geografie', 'Biologie', 'Biologie', 'Chimie', 'Franceza'],  
    'Vineri': ['Matematica', 'Matematica', 'Optional', 'Chimie', 'Latina', 'Ed. tehnologica'],  
}

def cautare_in_orar(subiect):
    gasit = {}
    for zi, materii in orar_data.items():
        if subiect in materii:
            gasit[zi] = materii.count(subiect)
    return gasit

# Solicităm utilizatorului să introducă materia
print("Lista materiilor disponibile:")
for zi, materii in orar_data.items():
    print(f"{zi}: {', '.join(materii)}")

subiect = input("\nIntroduceți materia de căutat: ").strip()

# Căutăm materia în orar
rezultate = cautare_in_orar(subiect)

# Afișăm rezultatele
if rezultate:
    print(f"\nRezultate pentru materia '{subiect}':")
    for zi, count in rezultate.items():
        print(f"- {zi}: {count} oră/ore")
else:
    print(f"\nMateria '{subiect}' nu a fost găsită în orar.")
