// Copyright (C) 2023 The Qt Company Ltd.
// SPDX-License-Identifier: BSD-3-Clause

#include <QCoreApplication>
#include "lib1.h"
#include "lib2.h"

int main(int argc, char **argv)
{
    QCoreApplication app(argc, argv);
    auto obj1 = new MyObject1(&app);
    auto obj2 = new MyObject2(&app);
    qDebug() << QCoreApplication::translate("app1", "Hello from app1!")
             << obj1->greeting()
             << obj2->greeting();
    return app.exec();
}
