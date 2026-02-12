# Installation de GCC sur Windows (via MSYS2)

Ce guide reprend les etapes que tu as suivies pour installer GCC avec MSYS2.

## 1) Telecharger et installer MSYS2

1. Va sur https://www.msys2.org/
2. Telecharge l'installeur x86_64.
3. Installe MSYS2 dans le dossier par defaut (ex. C:\msys64).
4. Lance "MSYS2 MSYS" depuis le menu Demarrer.

## 2) Mettre a jour MSYS2

Dans la fenetre MSYS2, lance ces commandes :

```bash
pacman -Syu
```

- Si MSYS2 te demande de fermer la fenetre, ferme-la puis relance "MSYS2 MSYS".
- Relance ensuite la mise a jour si besoin :

```bash
pacman -Syu
```

## 3) Installer GCC (MinGW-w64)

Toujours dans MSYS2 :

```bash
pacman -S --needed mingw-w64-ucrt-x86_64-gcc
```

## 4) Ajouter GCC au PATH de Windows

Ajoute ce dossier au PATH systeme :

```
C:\msys64\ucrt64\bin
```

Puis ouvre un nouveau terminal Windows (PowerShell) et verifie :

```bash
gcc --version
```

## 5) Compiler un fichier C

Dans PowerShell, place-toi dans ton dossier et lance :

```bash
gcc main.c -o nomExecutable.exe
```

Puis execute :

```bash
.\nomExecutable.exe
```

## 6) Si besoin de reinstaller

Tu peux relancer l'installation du compilateur :

```bash
pacman -S --needed mingw-w64-ucrt-x86_64-gcc
```
