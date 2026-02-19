# Programmation embarquée sur STM32F103 avec Keil µVision

Bienvenue dans ce projet dédié à la programmation de systèmes embarqués sur microcontrôleur. Vous trouverez ici les ressources, les exercices et les tutoriels pour apprendre à développer sur la carte NUCLEO-F103RB (STM32F103) en utilisant l'IDE µVision de Keil.

## Introduction

La programmation sur cible embarquée demande une compréhension fine du matériel et des contraintes spécifiques (taille, consommation, temps réel). Ce projet vous guide depuis les bases de l'architecture informatique jusqu'à la réalisation de programmes pour microcontrôleur, en passant par la prise en main des outils de développement.

## Matériel utilisé

### Microcontrôleur STM32F103

Le STM32F103 de STMicroelectronics est un microcontrôleur 32 bits basé sur un cœur ARM Cortex-M3. Il est très répandu dans l'industrie et constitue un excellent support pour l'apprentissage.

### Carte NUCLEO-F103RB

La carte d'évaluation NUCLEO-F103RB intègre le STM32F103 et propose :
- Une connectique compatible Arduino (pour ajouter facilement des shields)
- Un programmateur/débogueur ST-Link intégré
- Une alimentation et une communication via un simple câble USB

## Environnement de développement

J'ai utilisé l'IDE **µVision** de Keil (groupe ARM). Ce choix a été motivé par :

- **Installation facile et auto-suffisante** : l'IDE intègre un compilateur et tous les fichiers nécessaires.
- **Débogage intégré** : interface graphique très complète pour observer l'exécution pas à pas.
- **Simulateur embarqué** : permet de tester du code sans matériel réel (utile pour débuter).
- **Version d'évaluation gratuite** : limitée à 32 Ko de code, ce qui est largement suffisant pour l'apprentissage.

Si vous préférez une solution open source, vous pouvez explorer **GNU ARM Eclipse** (basé sur Eclipse et la chaîne GNU), mais cela nécessite une configuration plus avancée.

## Prérequis

- Un ordinateur sous Windows (l'IDE µVision est natif Windows)
- Le logiciel **µVision** téléchargé depuis le site de Keil (version MDK-ARM)
- Un câble USB micro-B (pour alimenter et programmer la carte)
- *(Optionnel)* La carte NUCLEO-F103RB pour exécuter le code sur le matériel réel

## Installation

1. Téléchargez et installez **MDK-ARM** (µVision) depuis [le site de Keil](https://www.keil.com/download/).
2. Si vous utilisez la carte Nucleo, installez le pilote ST-Link (généralement fourni avec l'IDE ou disponible sur le site de ST).
3. Clonez ce dépôt ou téléchargez les sources.


## Ressources complémentaires

- [Documentation officielle STM32F103](https://www.st.com/en/microcontrollers-microprocessors/stm32f103.html)
- [Keil µVision User's Guide](https://www.keil.com/support/man/docs/uv4/)
- [Forum de la communauté STM32](https://community.st.com/)