TEMPLATE = app
CONFIG += console c++11
QT = core qml


SOURCES += \
        main.cpp \
    healthcareproviderlist.cpp \
    symptomlist.cpp \
    diagnoseslist.cpp \
    appointmentlist.cpp \
    allergylist.cpp \
    medicationlist.cpp \
    vaccinationlist.cpp \
    insurancelist.cpp \
    surgerylist.cpp \
    emergencycontactlist.cpp \
    ../Components/allergy.cpp \
    ../Components/appointment.cpp \
    ../Components/diagnosis.cpp \
    ../Components/emergencycontact.cpp \
    ../Components/healcareprovider.cpp  \
    ../Components/insurance.cpp \
    ../Components/medication.cpp \
    ../Components/patient.cpp \
    ../Components/sideeffect.cpp \
    ../Components/surgery.cpp \
    ../Components/symptom.cpp \
    ../Components/vaccine.cpp


HEADERS += \
    healthcareproviderlist.h \
    symptomlist.h \
    diagnoseslist.h \
    appointmentlist.h \
    allergylist.h \
    medicationlist.h \
    vaccinationlist.h \
    insurancelist.h \
    surgerylist.h \
    emergencycontactlist.h \
    ../Components/allergy.h \
    ../Components/appointment.h \
    ../Components/diagnosis.h \
    ../Components/emergencycontact.h \
    ../Components/healcareprovider.h  \
    ../Components/insurance.h \
    ../Components/medication.h \
    ../Components/patient.h \
    ../Components/sideeffect.h \
    ../Components/surgery.h \
    ../Components/symptom.h \
    ../Components/vaccine.h
