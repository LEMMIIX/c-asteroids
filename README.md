# C-Asteroids

![SDL3 badge](https://img.shields.io/badge/SDL3-2.22-659bd3)
[![wiki badge](https://img.shields.io/badge/wiki-white?logo=data:image/svg+xml;base64,PHN2ZyByb2xlPSJpbWciIHZpZXdCb3g9IjAgMCAyNCAyNCIgeG1sbnM9Imh0dHA6Ly93d3cudzMub3JnLzIwMDAvc3ZnIj48dGl0bGU+V2lraXBlZGlhPC90aXRsZT48cGF0aCBkPSJNMTIuMDkgMTMuMTE5Yy0uOTM2IDEuOTMyLTIuMjE3IDQuNTQ4LTIuODUzIDUuNzI4LS42MTYgMS4wNzQtMS4xMjcuOTMxLTEuNTMyLjAyOS0xLjQwNi0zLjMyMS00LjI5My05LjE0NC01LjY1MS0xMi40MDktLjI1MS0uNjAxLS40NDEtLjk4Ny0uNjE5LTEuMTM5LS4xODEtLjE1LS41NTQtLjI0LTEuMTIyLS4yNzFDLjEwMyA1LjAzMyAwIDQuOTgyIDAgNC44OTh2LS40NTVsLjA1Mi0uMDQ1Yy45MjQtLjAwNSA1LjQwMSAwIDUuNDAxIDBsLjA1MS4wNDV2LjQzNGMwIC4xMTktLjA3NS4xNzYtLjIyNS4xNzZsLS41NjQuMDMxYy0uNDg1LjAyOS0uNzI3LjE2NC0uNzI3LjQzNiAwIC4xMzUuMDUzLjMzLjE2Ni42MDEgMS4wODIgMi42NDYgNC44MTggMTAuNTIxIDQuODE4IDEwLjUyMWwuMTM2LjA0NiAyLjQxMS00LjgxLS40ODItMS4wNjctMS42NTgtMy4yNjRzLS4zMTgtLjY1NC0uNDI4LS44NzJjLS43MjgtMS40NDMtLjcxMi0xLjUxOC0xLjQ0Ny0xLjYxNy0uMjA3LS4wMjMtLjMxMy0uMDUtLjMxMy0uMTQ5di0uNDY4bC4wNi0uMDQ1aDQuMjkybC4xMTMuMDM3di40NTFjMCAuMTA1LS4wNzYuMTUtLjIyNy4xNWwtLjMwOC4wNDdjLS43OTIuMDYxLS42NjEuMzgxLS4xMzYgMS40MjJsMS41ODIgMy4yNTIgMS43NTgtMy41MDRjLjI5My0uNjQuMjMzLS44MDEuMTExLS45NDctLjA3LS4wODQtLjMwNS0uMjItLjgxMi0uMjRsLS4yMDEtLjAyMWMtLjA1MiAwLS4wOTgtLjAxNS0uMTQ1LS4wNTEtLjA0NS0uMDMxLS4wNjctLjA3Ni0uMDY3LS4xMjl2LS40MjdsLjA2MS0uMDQ1YzEuMjQ3LS4wMDggNC4wNDMgMCA0LjA0MyAwbC4wNTkuMDQ1di40MzZjMCAuMTIxLS4wNTkuMTc4LS4xOTMuMTc4LS42NDYuMDMtLjc4Mi4wOTUtMS4wMjMuNDM5LS4xMi4xODYtLjM3NS41ODktLjY0NiAxLjAzOWwtMi4zMDEgNC4yNzMtLjA2NS4xMzUgMi43OTIgNS43MTIuMTcuMDQ4IDQuMzk2LTEwLjQzOGMuMTU0LS40MjIuMTI5LS43MjItLjA2NC0uODk1LS4xOTctLjE3Mi0uMzQ2LS4yNzMtLjg1Ny0uMjk1bC0uNDItLjAxNmMtLjA2MSAwLS4xMDUtLjAxNC0uMTUyLS4wNDUtLjA0My0uMDI5LS4wNzItLjA3NS0uMDcyLS4xMTl2LS40MzZsLjA1OS0uMDQ1aDQuOTYxbC4wNDEuMDQ1di40MzdjMCAuMTE5LS4wNzQuMTgtLjIwOS4xOC0uNjQ4LjAzLTEuMTI3LjE4LTEuNDQzLjQyMS0uMzE0LjI1NS0uNTU3LjYxNi0uNzM2IDEuMDY3IDAgMC00LjA0MyA5LjI1OC01LjQyNiAxMi4zMzktLjUyNSAxLjAwNy0xLjA1My45MTctMS41MDMtLjAzMS0uNTcxLTEuMTcxLTEuNzczLTMuNzg2LTIuNjQ2LTUuNzFsLjA1My0uMDM2eiIvPjwvc3ZnPg==)](https://github.com/LEMMIIX/c-asteroids/wiki) 

> *if you **c - asteroids**, shoot 'em*
<br><br>

<b>Check out [the wiki of this repo][wiki_link] if you are looking to learn from this project!</b>
<br><br>


Wiki completion:<br>
- [ ] code doc
- [ ] architecture doc


## Showcase 

### Version 9:

Changes:
* properly implement `map<key,value>` logic in [`c_map.h`](src/c_map.h) with dynamic map resizing

### Version 8:

![version8](resources/readme/ship_v8.gif)<br>
Changes:
* add score counter that adds points if hit enemy, or subtracts if missed enemy
* add small randomization to enemy direction

### Version 7:

![version7](resources/readme/ship_v7.gif)<br>
Changes:
* add pause and game-over menu which provides restart option

### Version 6:

![version6](resources/readme/ship_v6.gif)<br>
Changes:
* add enemies that can be shot

### Version 5:

![version5](resources/readme/ship_v5.gif)<br>
Changes:
* shoot projectiles in player facing direction

### Version 4:

![version4](resources/readme/ship_v4.gif)<br>
Changes:
* shoot variations of projectiles with mouse klick

### Version 3:

![version3](resources/readme/ship_v3.gif)<br>
Changes:
* fps counter
* vsync
* frame-independent movement using delta time
* window boundary check for movement

### Version 2:

![version2](resources/readme/ship_v2.gif)<br>
Changes:
* rotating while moving

### Version 1:

![version1](resources/readme/ship_v1.gif)<br>



[wiki_img]:
https://upload.wikimedia.org/wikipedia/commons/2/2c/Tango_style_Wikipedia_Icon.svg

[wiki_link]:
https://github.com/LEMMIIX/shooty-triangle/wiki
