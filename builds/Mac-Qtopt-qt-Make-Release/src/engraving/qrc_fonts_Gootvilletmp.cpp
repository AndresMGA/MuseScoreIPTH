/****************************************************************************
** Resource object code
**
** Created by: The Resource Compiler for Qt version 6.7.0
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

  // /Users/andresgarcia/MuseScore/fonts/gootville/metadata.json
  
  
    // /Users/andresgarcia/MuseScore/fonts/gootville/GootvilleText.otf
  
  
    // /Users/andresgarcia/MuseScore/fonts/gootville/Gootville.otf
  
  
  
static const unsigned char qt_resource_data[91877] = { 'Q', 'R', 'C', '_', 'D', 'A', 'T', 'A' };

static const unsigned char qt_resource_name[] = {
  // fonts
  0x0,0x5,
  0x0,0x6d,0x65,0xb3,
  0x0,0x66,
  0x0,0x6f,0x0,0x6e,0x0,0x74,0x0,0x73,
    // gootville
  0x0,0x9,
  0x6,0xbc,0x5f,0xe5,
  0x0,0x67,
  0x0,0x6f,0x0,0x6f,0x0,0x74,0x0,0x76,0x0,0x69,0x0,0x6c,0x0,0x6c,0x0,0x65,
    // metadata.json
  0x0,0xd,
  0xd,0xd1,0xee,0x9e,
  0x0,0x6d,
  0x0,0x65,0x0,0x74,0x0,0x61,0x0,0x64,0x0,0x61,0x0,0x74,0x0,0x61,0x0,0x2e,0x0,0x6a,0x0,0x73,0x0,0x6f,0x0,0x6e,
    // GootvilleText.otf
  0x0,0x11,
  0x5,0xc8,0x99,0x6,
  0x0,0x47,
  0x0,0x6f,0x0,0x6f,0x0,0x74,0x0,0x76,0x0,0x69,0x0,0x6c,0x0,0x6c,0x0,0x65,0x0,0x54,0x0,0x65,0x0,0x78,0x0,0x74,0x0,0x2e,0x0,0x6f,0x0,0x74,0x0,0x66,
  
    // Gootville.otf
  0x0,0xd,
  0xf,0xed,0x2f,0x86,
  0x0,0x47,
  0x0,0x6f,0x0,0x6f,0x0,0x74,0x0,0x76,0x0,0x69,0x0,0x6c,0x0,0x6c,0x0,0x65,0x0,0x2e,0x0,0x6f,0x0,0x74,0x0,0x66,
  
};

static const unsigned char qt_resource_struct[] = {
  // :
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/fonts
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x2,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/fonts/gootville
  0x0,0x0,0x0,0x10,0x0,0x2,0x0,0x0,0x0,0x3,0x0,0x0,0x0,0x3,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/fonts/gootville/GootvilleText.otf
  0x0,0x0,0x0,0x48,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x27,0x6d,
0x0,0x0,0x1,0x90,0x34,0xb6,0x93,0xfd,
  // :/fonts/gootville/metadata.json
  0x0,0x0,0x0,0x28,0x0,0x4,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,
0x0,0x0,0x1,0x90,0x34,0xb6,0x93,0xfd,
  // :/fonts/gootville/Gootville.otf
  0x0,0x0,0x0,0x70,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0xca,0x25,
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
static inline unsigned char qResourceFeatureZstd()
{
    extern const unsigned char qt_resourceFeatureZstd;
    return qt_resourceFeatureZstd;
}
#else
unsigned char qResourceFeatureZstd();
#endif

#ifdef QT_NAMESPACE
}
#endif

int QT_RCC_MANGLE_NAMESPACE(qInitResources_fonts_Gootville)();
int QT_RCC_MANGLE_NAMESPACE(qInitResources_fonts_Gootville)()
{
    int version = 3;
    QT_RCC_PREPEND_NAMESPACE(qRegisterResourceData)
        (version, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_fonts_Gootville)();
int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_fonts_Gootville)()
{
    int version = 3;
    version += QT_RCC_PREPEND_NAMESPACE(qResourceFeatureZstd());
    QT_RCC_PREPEND_NAMESPACE(qUnregisterResourceData)
       (version, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

#ifdef __clang__
#   pragma clang diagnostic push
#   pragma clang diagnostic ignored "-Wexit-time-destructors"
#endif

namespace {
   struct initializer {
       initializer() { QT_RCC_MANGLE_NAMESPACE(qInitResources_fonts_Gootville)(); }
       ~initializer() { QT_RCC_MANGLE_NAMESPACE(qCleanupResources_fonts_Gootville)(); }
   } dummy;
}

#ifdef __clang__
#   pragma clang diagnostic pop
#endif
