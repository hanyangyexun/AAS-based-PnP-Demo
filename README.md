# AAS-based-PnP-Demo


## Background ##
In the era of Industry 4.0, one of the key challenges is how to digitalize the industrial production. The Asset Administration Shell is designed to transform the asset from a physical world into a digital world.

Analogous to the “plug-and-play” concept for desktop computers, the vision of ‘Plug-and-Produce’ use case is to enable “plug-and-produce” capabilities for future production facilities.

Compared to today’s traditional production, ‘Plug-and-Produce’ makes a new production paradigm possible, that is, new field devices or production modules shall be integrated into production lines with minimal overhead, thus greatly increasing the production flexibility. 


## Introduction ##
This is the repository for Asset Administration Shell (AAS) based Plug-and-Produce demo system, co-developed by Nestfield Ltd and Hanyang University.

A video is under production to introduce the demo system.


This demo system was implemented in compliance with the Platform Industry 4.0 specification “Details of the Asset Administration Shell – Part 1 - The exchange of information between partners in the value chain of Industry 4.0 (Version 1.0 published in November 2018)”.

An enhanced version of this demo in compliance with the latest specification (Version 2.0.1 published in May 2020) is under development, where open source tools for example AASX Package Explorer will be used to implement the AAS.

## System Structure ##

This system has a three-layer architecture:
 
- Decision-making layer
	- This layer contains the PnP operation strategies for controlling the system running through a Web UI. 
- AAS layer
	- This layer implements the AAS for each asset (e.g., robots and turntable).
- Industry 4.0 (I4.0) Asset layer
	- This layer has three robots and one turntable, all equipped with Industry 4.0 communication interface (I4.0 Adaptor).

Software and hardware developed for each layer can be seen in the following figure in detail.

<br/>

<div align=center><img src="https://raw.githubusercontent.com/hanyangyexun/AAS-based-PnP-Demo/master/Demo%20system%20structure.png" width="60%" height="" /></div>

## Repo Structure ##

Source code for `Decision-making layer`, `AAS layer`, and `I4.0 Asset layer` is stored in `1. Cloud UI`. `2. AAS platform`. and `3. Field devices` separately. Please see the README file in each folder for further introduction.

In addition, `4. AAS-Android-APP` is the folder of an Android App demonstrating the AAS developed in this demo.

This is a screenshot of the running demo system:

<br/>

<div align=center><img src="https://raw.githubusercontent.com/hanyangyexun/AAS-based-PnP-Demo/master/demo%20screenshot.png" width="%" height="" /></div>