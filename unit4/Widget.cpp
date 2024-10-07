//
// Created by Marcus Zou on 2024-10-07.
//

#include "Widget.h"

void Widget::enable() {
    enabled = true;
}

void Widget::disable() {
    enabled = false;
}

bool Widget::isEnabled() const {
    return enabled;
}
