/****************************************************************************
** Resource object code
**
** Created by: The Resource Compiler for Qt version 5.15.13
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

  // /Users/andresgarcia/MuseScore/fonts/fonts_figuredbass.xml
  
  
    // /Users/andresgarcia/MuseScore/fonts/fonts_tablature.xml
  
  
  
static const unsigned char qt_resource_data[2875] = { 'Q', 'R', 'C', '_', 'D', 'A', 'T', 'A' };

static const unsigned char qt_resource_name[] = {
  // fonts
  0x0,0x5,
  0x0,0x6d,0x65,0xb3,
  0x0,0x66,
  0x0,0x6f,0x0,0x6e,0x0,0x74,0x0,0x73,
    // fonts_figuredbass.xml
  0x0,0x15,
  0x3,0xd5,0x32,0xfc,
  0x0,0x66,
  0x0,0x6f,0x0,0x6e,0x0,0x74,0x0,0x73,0x0,0x5f,0x0,0x66,0x0,0x69,0x0,0x67,0x0,0x75,0x0,0x72,0x0,0x65,0x0,0x64,0x0,0x62,0x0,0x61,0x0,0x73,0x0,0x73,
  0x0,0x2e,0x0,0x78,0x0,0x6d,0x0,0x6c,
    // fonts_tablature.xml
  0x0,0x13,
  0xd,0xe4,0xe8,0x9c,
  0x0,0x66,
  0x0,0x6f,0x0,0x6e,0x0,0x74,0x0,0x73,0x0,0x5f,0x0,0x74,0x0,0x61,0x0,0x62,0x0,0x6c,0x0,0x61,0x0,0x74,0x0,0x75,0x0,0x72,0x0,0x65,0x0,0x2e,0x0,0x78,
  0x0,0x6d,0x0,0x6c,
  
};

static const unsigned char qt_resource_struct[] = {
  // :
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/fonts
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/fonts/fonts_figuredbass.xml
  0x0,0x0,0x0,0x10,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,
0x0,0x0,0x1,0x90,0x34,0xb6,0x93,0xfa,
  // :/fonts/fonts_tablature.xml
  0x0,0x0,0x0,0x40,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x2,0x95,
0x0,0x0,0x1,0x90,0x34,0xb6,0x93,0xfb,

};

#ifdef QT_NAMESPACE
#  define QT_RCC_PREPEND_NAMESPACE(name) ::QT_NAMESPACE::name
#  define QT_RCC_MANGLE_NAMESPACE0(x) x
#  define QT_RCC_MANGLE_NAMESPACE1(a, b) a##_##b
#  define QT_RCC_MANGLE_NAMESPACE2(a, b) QT_RCC_MANGLE_NAMESPACE1(a,b)
#  define QT_RCC_MANGLE_NAMESPACE(name) QT_RCC_MANGLE_NAMESPACE2( \
        QT_RCC_MANGLE_NAMESPACE0(name), QT_RCC_MANGLE_NAMESPACE0(QT_NAMESPACE))
#else
#   define QT_RCC_PREPEND_NAMESPACE(name) name
#   define QT_RCC_MANGLE_NAMESPACE(name) name
#endif

#ifdef QT_NAMESPACE
namespace QT_NAMESPACE {
#endif

bool qRegisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);
bool qUnregisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);

#if defined(__ELF__) || defined(__APPLE__)
static inline unsigned char qResourceFeatureZlib()
{
    extern const unsigned char qt_resourceFeatureZlib;
    return qt_resourceFeatureZlib;
}
#else
unsigned char qResourceFeatureZlib();
#endif

#ifdef QT_NAMESPACE
}
#endif

int QT_RCC_MANGLE_NAMESPACE(qInitResources_fonts_Tabulature)();
int QT_RCC_MANGLE_NAMESPACE(qInitResources_fonts_Tabulature)()
{
    int version = 3;
    QT_RCC_PREPEND_NAMESPACE(qRegisterResourceData)
        (version, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_fonts_Tabulature)();
int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_fonts_Tabulature)()
{
    int version = 3;
    version += QT_RCC_PREPEND_NAMESPACE(qResourceFeatureZlib());
    QT_RCC_PREPEND_NAMESPACE(qUnregisterResourceData)
       (version, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

namespace {
   struct initializer {
       initializer() { QT_RCC_MANGLE_NAMESPACE(qInitResources_fonts_Tabulature)(); }
       ~initializer() { QT_RCC_MANGLE_NAMESPACE(qCleanupResources_fonts_Tabulature)(); }
   } dummy;
}
