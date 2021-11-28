# TP2-informatiqueTP 2
Flux, manipulation de chaînes de caractères
Exercice 1 : afficher la table ASCII 7 bits
1. Écrivez un programme nommé exo1.c permettant d’afficher les 128 caractères de la table ASCII
7 bits.
1. Les caractères doivent être organisé en un tableau de 17 lignes et 9 colonnes. La première
ligne contient les noms de colonne (le chiffre de poids faible du code ASCII en notation
hexadécimale) et la première colonne contient les noms de ligne. (le chiffre de poids fort du
code ASCII en hexadécimal). Les 128 autres cases doivent contenir les symboles
correspondants aux codes.
2. On utilisera la fonction isprint de la bibliothèque standard ctype pour déterminer si un
caractère est imprimable ou non. S’il ne l’est pas, le remplacer par un espace.
3. On utilisera les symboles +, - et | pour dessiner les traits du tableau.

Exercice 2 : afficher le contenu d’un fichier texte

1. Écrivez un programme nommé exo2.c affichant le contenu d’un fichier texte dans le terminal
1. Le programme doit prendre exactement un paramètre (le nom du fichier à afficher) en
entrée. S’il n’y a pas exactement un paramètre passé au programme, un message rappelant à
l’utilisateur la syntaxe attendue doit être affiché.
1. Créez un fichier messages.h contenant les différents messages utilisés dans vos
programmes (utilisez des #define). Ce fichier pourra être réutilisé dans la suite des
travaux pratiques.
2. Si le fichier ne peut pas être ouvert, le programme doit afficher un message d’erreur.
3. Si le fichier existe, son contenu doit être lu (ouverture en lecture seule) et affiché dans le
terminal.
2. Créez un fichier makefile contenant une recette exo2 permettant de produire l’exécutable exo2.
Testez votre programme.
3. Modifiez ce programme pour qu’il accepte un nombre quelconque de paramètres
1. Le programme doit, pour chaque fichier, afficher un en-tête rappelant le nom du fichier
traité avant d’en afficher sont contenu ou un message d’erreur si le fichier n’existe pas.
2. Optionnel : complétez ce programme pour qu’une pause soit faite à la fin de l’affichage du
contenu de chaque fichier (sauf le dernier). Le programme doit attendre un appui sur la
touche Entrée avant d’afficher le contenu du fichier suivant.

Exercice 3 : mettre un texte en majuscule

1. Écrivez un programme nommé exo3.c capable de convertir un fichier texte en majuscules
1. Le programme doit prendre exactement un paramètre (le nom du fichier à convertir) en
entrée. S’il n’y a pas exactement un paramètre passé au programme, un message rappelant à
l’utilisateur la syntaxe attendue doit être affiché.
2. Si le fichier ne peut pas être ouvert, le programme doit afficher un message d’erreur.
3. Pour réaliser la conversion en majuscule, on testera la valeur de chaque caractère ASCII lu
pour détecter s’il s’agit d’une lettre en minuscule ou non (cf table ASCII 7bits). Si le
caractère est une lettre minuscule, on ajustera le code ASCII pour transformer cette lettre en
majuscule.
4. Le texte en majuscules doit être enregistré dans un nouveau fichier portant le nom du fichier
source auquel on ajoutera l’extension .maj (exemple : unTexte.txt → unTexte.txt.maj).
1. Pour cela, on écrira une fonction void addExt(char *ext, char
*nomFichierSource, char *nomFichierDest) dont le prototype seraintégré à un fichier ext_mngt.h et la définition à un fichier ext_mngt.c. On adaptera le
makefile de manière à permettre la compilation séparée des fichiers .c (option -c de gcc)
puis l’édition de liens finale.
2. Optionnel : écrivez une fonction void addPreExt(char *ext, char
*nomFichierSource, char *nomFichierDest) permettant d’insérer
l’extension .maj avant l’extension originale (exemple : unTexte.txt → unTexte.maj.txt).
Si le nom du fichier source contient plusieurs extensions, ajouter l’extension .maj avant
la dernière extension (exemple : unTexte.v2.txt → unTexte.v2.maj.txt). Si le nom du
fichier source ne contient pas d’extension, ajouter l’extension .maj à la fin (exemple
unTexte → unTexte.maj).
2. Complétez votre fichier makefile avec une recette exo3 permettant de produire l’exécutable
exo3. On adaptera le makefile de manière à permettre la compilation séparée des fichiers .c
(option -c de gcc) suivi de l’édition de liens finale.
3. Testez votre programme. Que se passe-t-il avec les caractères accentués (à, é, ö, etc …) ?
4. 
Exercice 4 : codage étendu UTF-8

1. Écrivez un programme nommé exo4.c permettant d’afficher n’importe quel caractère
UNICODE en le convertissant au format UTF-8.
1. Le programme ne prend aucun paramètre en entrée. Lorsque le programme est lancé,
l’utilisateur est invité à entrer le code hexadécimal d’un caractère Unicode. Le programme
affiche en réponse ce caractère et quitte.
2. Utilisez la fonction scanf pour lire l’entrée standard (flux provenant du clavier).
3. Écrivez une fonction int unicode2UTF8(unsigned int unicode, unsigned
char *UTF8) permettant de générer une chaîne de caractères représentant le caractère
Unicode n° unicode au format UTF-8. Le résultat est stocké dans une chaîne de
caractères pointée par *UTF8). Créez les fichiers utf8.h et utf8.c pour le prototype et la
définition de cette fonction.
2. Complétez votre fichier makefile avec une recette exo3 permettant de produire l’exécutable
exo3. On adaptera le makefile de manière à permettre la compilation séparée des fichiers .c
(option -c de gcc) suivi de l’édition de liens finale.
3. Testez votre programme en essayant d’afficher quelques caractères non disponibles sur votre
clavier (chinois, arabe, grec, symboles graphiques, etc …).
4. Modifiez votre programme pour qu’il lise la suite de codes unicode contenus dans le(s)
fichier(s) passé(s) en argument(s) à votre programme et affiche les chaîne correspondante dans
le terminal.1. Si aucun fichier n’est spécifié, le programme demande à l’utilisateur d’entrer un code
unicode à afficher.
5. Testez votre programme avec le fichier test.unicode.hex fourni sur Moodle.

Exercice 5 : mettre un texte UTF-8 en majuscules

1. Écrivez un programme nommé exo5.c permettant, comme exo3, de mettre un texte en
majuscule.
1. Ce programme doit fonctionner exactement comme celui de l’exercice 3 sauf qu’il doit
reconnaître les caractères accentués latin (code 0xC0 → 0xFF).
2. Il faut pour cela écrire une fonction UTF82unicode réalisant la fonction inverse de
unicode2UTF8, c’est-à-dire renvoyer le code Unicode correspondant à un code UTF-8.
3. On écrira également une fonction permettant de lire les données issues du fichier source non
plus octet par octet mais code UTF-8 par code UTF-8.
