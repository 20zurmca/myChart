TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle


SOURCES += \
        main.cpp \
    patient.cpp \
    healthevent.cpp \
    allergy.cpp \
    vaccine.cpp \
    surgery.cpp \
    symptom.cpp \
    sideeffect.cpp \
    medication.cpp \
    healthcareprovider.cpp \
    emergencycontact.cpp \
    diagnosis.cpp \
    insurance.cpp \
    appointment.cpp \
    dategetter.cpp

HEADERS += \
    patient.h \
    healthattribute.h \
    healthevent.h \
    allergy.h \
    vaccine.h \
    surgery.h \
    symptom.h \
    sideeffect.h \
    medication.h \
    healthcareprovider.h \
    emergencycontact.h \
    diagnosis.h \
    insurance.h \
    appointment.h \
    healthobservation.h \
    dategetter.h
