# AgeOfDecay
**Welcome to Jam Garden's "AgeOfDecay" game project!**

This project is being developed for our first game jam of the year, with the theme Poison. The limitation for the jam is not yet announced. This is Jam Garden's second game jam using Unreal Engine 4.23.1. AgeOfDecay is just an arbitrary name and may not reflect the final title of the game.

## Getting Started
These instructions will help you set up the project on your local machine for development and testing purposes.

## Prerequisites
* Unreal Engine 4.23.1
* Visual Studio 2017
* Git
* Git LFS
Installation
Clone the repository:
bash
Copy code
git clone https://github.com/JamGarden/AgeOfDecay.git
Navigate to the project folder:
bash
Copy code
cd AgeOfDecay
Open the project in Unreal Engine by double-clicking the AgeOfDecay.uproject file.
Development Workflow
We use a simple Git workflow for development, incorporating Git LFS for large file storage. The main branch is master, and feature branches should be created for each new feature or bugfix.

## Create a new branch for your feature or bugfix:
bash
Copy code
git checkout -b feature/my-feature
Make changes and commit them. Remember to use Git LFS for tracking large files:
bash
Copy code
git lfs track "*.uasset"
git lfs track "*.umap"
git add .
git commit -m "Add my feature"
Push your changes to the remote repository:
bash
Copy code
git push -u origin feature/my-feature
Create a pull request on GitHub to merge your changes into the master branch.
## Team Members
Zach (Team Lead)
[Add team member names here]
## Acknowledgments
Unreal Engine 4.23.1
Visual Studio 2017
Git LFS
Jam Garden
[List any assets, plugins, or other resources used here]
We hope you enjoy the development process and are excited to see the final game! Good luck to all team members, and let's make a fantastic game jam project together!
