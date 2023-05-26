# Projet Relations Auteurs-co-auteurs

### Principe du projet
Ce projet vise à donner le plus court chemin auteur-co-auteur entre 2 chercheurs ayant écrit des articles présent dans la base de donnée dblp.

Par exemple Bernd Walter a écrit un article avec Rudi Studer, et Rudi Studer a écrit un article avec Hans Uszkoreit.
Bernd Walter n'a pas écrit d'article avec Hans Uszkoreit.
Le chemin auteur-co-auteur le plus court entre Bernd Walter et Hans Uszkoreit est donc Bernd Walter -> Rudi Studer -> Hans Uszkoreit.

(plus d'info dans la documentation, voir suite du readme)

### Documentation
- Compiler avec "make doc" dans la racine du projet (dossier main)

### Compilation
- Se placer dans la racine, executer la commande "make main"

### Execution
- Executer le fichier "main" dans le dossier bin, avec les options prévues.

Par exemple, "bin/main -h" affichera toutes les options.
L'option principale est "-p" est s'utilise de la façon suivante: "bin/main -p "auteur1,auteur2"
(remplacer auteur1 et auteur2 par des noms d'auteurs, par exemple bin/main -p "Erich Gehlen,Gregor Meyer")


### Clean up des executables et des .o
- executer "make clean" depuis la racine

### Pour plus de détails sur la base de donnée utilisée
-   https://dblp.org/faq/16154937.html

