Open Integrity Index
====================

*** This software is currently under development and considered in beta ***

This repository contains a [Drupal](https://www.drupal.org/) [feature](https://www.drupal.org/project/features) for the [Open Integrity Index](https://openintegrity.org). There are other software components required to deploy the Open Integrity Index website:
 - [Drush Make repository](https://github.com/iilab/openintegritymake)
 - [Open Integrity Badge repository](https://github.com/iilab/openintegritybadge)
 - [Open Integrity Theme](https://github.com/iilab/openintegritytheme)

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
