TEMPLATE = app
CONFIG += console c++11
QT = core qml


SOURCES += \
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
    dategetter.cpp \
    main.cpp \
    ../Lists/allergylist.cpp \
    ../Lists/appointmentlist.cpp \
    ../Lists/diagnoseslist.cpp \
    ../Lists/emergencycontactlist.cpp \
    ../Lists/healthcareproviderlist.cpp \
    ../Lists/insurancelist.cpp \
    ../Lists/medicationlist.cpp \
    ../Lists/surgerylist.cpp \
    ../Lists/symptomlist.cpp \
    ../Lists/vaccinationlist.cpp

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
    dategetter.h \
    ../Lists/allergylist.h \
    ../Lists/appointmentlist.h \
    ../Lists/diagnoseslist.h \
    ../Lists/emergencycontactlist.h \
    ../Lists/healthcareproviderlist.h \
    ../Lists/insurancelist.h \
    ../Lists/medicationlist.h \
    ../Lists/surgerylist.h \
    ../Lists/symptomlist.h \
    ../Lists/vaccinationlist.h
