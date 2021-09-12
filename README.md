# UDScan
**UDScan or Unstructured Data Scan is an OCR System to convert Images, Streams and PDF to printed text..**

## Glossary
| Term      | Description |
| ----------- | ----------- |
| OCR(Optical Character Recognition      | It is a technology that recognizes text within a digital image. Target typewritten text, only Glyph or character at a time. |
| OWR(Optical word Reconition)           | Target typewritten text, only word at a time.|
| ICR(Intelligent Character Recognition) | Target typewritten printed script or cursive text one glyph or character at a time. Usually involves machine learning.|
| IWR(Intelligent Word Recognition)      | Target typewritten printed script or cursive text word at a time. This is especially useful for language where glyphs are not separated in cursive script |


## Problem solved by UScan
* UDScan is a framework used for digitizing printed text so that it can be electronically edited, searched, stored more compactly, displayed online and used in machine processes such as Machine learning, Text to Speech and Text Mining .

* Converts an unscanned image, pdf or video into text format 

## UDScan Architecture
![UDScan Architecture](https://github.com/prahalad12345/UDScan/blob/5d021c4028ca3f7413f08d91bc829f3da5fdb640/images/architecture.png)

## Ground level Data flow Diagram
![UDScan level0](https://github.com/prahalad12345/UDScan/blob/5d021c4028ca3f7413f08d91bc829f3da5fdb640/images/level0.png)

## Level 1 Data flow Diagram 
![UDScan Architecture](https://github.com/prahalad12345/UDScan/blob/5d021c4028ca3f7413f08d91bc829f3da5fdb640/images/level1.png)

## Prerequisites
Make sure you have installed all of the following prerequisites on your development machine:

* Git - [Download & Install Git](https://git-scm.com/downloads). OSX and Linux machines typically have this already installed.
* Python - [Download & Install Python3](https://www.geeksforgeeks.org/download-and-install-python-3-latest-version/) - Minimum requirement 3.8.x
* C++ -[Install g++ if on Windows.] (https://www3.cs.stonybrook.edu/~alee/g++/g++.html)


## 3rd Party Library Dependencies 
YaDV uses following 3rd party tools/libraries:

| 3rd Party      | Reference Link |
| ----------- | ----------- |
| OpenCV | https://opencv.org/|
| Megamimes | https://github.com/trumpowen/MegaMimes |
| Tesseract-OCR | https://github.com/tesseract-ocr/tesseract |
| katna | https://katna.readthedocs.io/en/latest/ |
| pdf2image | https://pypi.org/project/pdf2image/ |

## Installation
YaDV is based on streamlit and streamlit can also be installed in a virtual environment on Windows, Mac and Linux. 

```bash
C++ Installations:
1) OpenCV:
   Linux:https://docs.opencv.org/master/d7/d9f/tutorial_linux_install.html
   Windows:https://learnopencv.com/install-opencv-on-windows/
   Macos:https://learnopencv.com/install-opencv-4-on-macos/
   
2) Megamimes

3) Tesseract-OCR:
   https://tesseract-ocr.github.io/tessdoc/Compiling-–-GitInstallation.html
```


```bash
Python Installations:
pip install katna
pip install opencv-python
pip install pdf2image
```


