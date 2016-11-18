/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
*/

#ifndef QML_ZDIR_PATCH_H
#define QML_ZDIR_PATCH_H

#include <QtQml>

#include <czmq.h>
#include "qml_czmq_plugin.h"


class QmlZdirPatch : public QObject
{
    Q_OBJECT
    Q_PROPERTY(bool isNULL READ isNULL)
    
public:
    zdir_patch_t *self;
    
    QmlZdirPatch() { self = NULL; }
    bool isNULL() { return self == NULL; }
    
    static QObject* qmlAttachedProperties(QObject* object); // defined in QmlZdirPatch.cpp
    
public slots:
    //  Create copy of a patch. If the patch is null, or memory was exhausted,
    //  returns null.                                                         
    QmlZdirPatch *dup ();

    //  Return patch file directory path
    const QString path ();

    //  Return patch file item
    QmlZfile *file ();

    //  Return operation
    int op ();

    //  Return patch virtual file path
    const QString vpath ();

    //  Calculate hash digest for file (create only)
    void digestSet ();

    //  Return hash digest for patch file
    const QString digest ();
};

class QmlZdirPatchAttached : public QObject
{
    Q_OBJECT
    QObject* m_attached;
    
public:
    QmlZdirPatchAttached (QObject* attached) {
        Q_UNUSED (attached);
    };
    
public slots:
    //  Self test of this class.
    void test (bool verbose);

    //  Create new patch
    QmlZdirPatch *construct (const QString &path, QmlZfile *file, int op, const QString &alias);

    //  Destroy a patch
    void destruct (QmlZdirPatch *qmlSelf);
};


QML_DECLARE_TYPEINFO(QmlZdirPatch, QML_HAS_ATTACHED_PROPERTIES)

#endif
/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
*/
