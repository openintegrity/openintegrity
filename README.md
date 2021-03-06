Open Integrity Index
====================

*** UPDATE: This software and the methodological framework that supports it, are currently under heavy redesign. You can join the discussion on the gitter chat room.*** 

[![Gitter](https://badges.gitter.im/Join%20Chat.svg)](https://gitter.im/openintegrity/openintegrity?utm_source=badge&utm_medium=badge&utm_campaign=pr-badge)

# About OII 1.0

*** This software is currently under development and considered in beta ***

This repository contains a [Drupal](https://www.drupal.org/) [feature](https://www.drupal.org/project/features) for the [Open Integrity Index](https://openintegrity.org). There are other software components required to deploy the Open Integrity Index website:
 - [Drush Make repository](https://github.com/iilab/openintegritymake) - a make file to deploy drupal core and modules
 - This Repo: [Feature](https://github.com/iilab/openintegrity) - Open Integrity configuration in code.
 - [Badge repository](https://github.com/iilab/openintegritybadge) - code for the embeddable badge
 - [Theme](https://github.com/iilab/openintegritytheme) - drupal theme
 - [Open Intention](https://github.com/iilab/openintention) - taxonomy to help identify tools based on user intentions

# Contributing to this project

Anyone and everyone is welcome to contribute. 

 - [Bug reports](https://github.com/iilab/openintegrity/issues?q=is%3Aissue+label%3Abug+)
 - [Feature requests](https://github.com/iilab/openintegrity/issues?q=is%3Aopen+is%3Aissue+label%3Afeature)
 - [Wiki](https://wiki.openintegrity.org)

## Requirements
  - Drupal 7
  - drush

Consult the [Open Integrity Make repository README file](https://github.com/iilab/openintegritymake/blob/master/README.md)

## Updating a feature

* Do configuration changes through the UI or CLI.
* On development platform 
  * drush fu openintegrity
  * git commit -am "Changed this and that. fixes #00"
  * git push
* On staging/production
  * cd sites/all/modules/openintegrity
  * git pull
  * drush fr openintegrity

# Contributors

 - [@file-citas](https://github.com/file-citas)
 - [@jmatsushita](https://github.com/jmatsushita)
 - [@ioerror](https://github.com/ioerror) 
 - [@collina](https://github.com/collina)
 - [@dymaxion](https://twitter.com/Dymaxion)

# License - GPL v3

Open Integrity Index - Copyright (C) 2014 iilab and other contributors

This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 

[See the GNU General Public License for more details.](https://github.com/iilab/openintegrity/blob/master/LICENSE.txt)
