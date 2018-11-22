//
// Created by z002fctv on 14.11.2018.
//

#ifndef IMGX_GUI_H
#define IMGX_GUI_H

#include "imgwindow.h"

class TestWindow : public ImgWindow {

public:
    explicit TestWindow(ImFontAtlas *fontAtlas = nullptr);
    ~TestWindow() final = default;

protected:
    void BuildInterface() override;
};


#endif //IMGX_GUI_H