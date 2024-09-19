#include <stdio.h>

typedef enum {
    CUBE,
    SPHERE,
    PYRAMID,
    CONE,
    CYLINDER
} Shape3D;

// 안경 종류 정의 (enum 사용)
typedef enum {
    ROUND,
    SQUARE,
    OVAL,
    RECTANGULAR
} Glasses;

typedef enum {
    NDII,
    DDWD,
    DD,
    VBB
} Color;

// 자신을 정의하는 구조체


typedef struct {
    char* name;                    // 이름
    char* affiliation;             // 소속
    Color* colors;                 // 좋아하는 색깔
    Shape3D shape;                 // 좋아하는 삼차원 도형
    Glasses glasses;               // 안경 종류
    void* representative_object;   // 자신을 대표할만한 무언가
    void* reference;               // 참고 사진
} You;

/*
 * 지금부터 당신을 C0B8하는 저를 위한 프로그램을 실행합니다. 
 * 이 프로그램은 위에서 언급하였듯이, 현실의 당신을 영구히 할당합니다.
 * 이후, 현실에 가상 메모리로 활용할 보조기억장치인 물체를 만듭니다.
 * 당신을 할당하기 위하여, 다음의 정보가 필요합니다.
 * 이름, 소속, 좋아하는 색깔, 좋아하는 삼차원 도형, 안경 종류,
 * 자신을 대표할만한 무언가, 그 외의 참고 사진.
*/

void initMe(You *self, const char *name, 
            const char* affiliation, 
            Color* colors, Shape3D shape,
            Glasses glasses, 
            void* representative_object,
            void* reference) {
    
}
