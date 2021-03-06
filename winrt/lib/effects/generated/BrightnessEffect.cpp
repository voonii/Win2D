// Copyright (c) Microsoft Corporation. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License"); you may
// not use these files except in compliance with the License. You may obtain
// a copy of the License at http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
// WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
// License for the specific language governing permissions and limitations
// under the License.

// This file was automatically generated. Please do not edit it manually.

#include "pch.h"
#include "BrightnessEffect.h"

namespace ABI { namespace Microsoft { namespace Graphics { namespace Canvas { namespace Effects
{
    BrightnessEffect::BrightnessEffect()
        : CanvasEffect(CLSID_D2D1Brightness, 2, 1, true)
    {
        // Set default values
        SetBoxedProperty<float[2]>(D2D1_BRIGHTNESS_PROP_WHITE_POINT, Numerics::Vector2{ 1.0f, 1.0f });
        SetBoxedProperty<float[2]>(D2D1_BRIGHTNESS_PROP_BLACK_POINT, Numerics::Vector2{ 0.0f, 0.0f });
    }

    IMPLEMENT_EFFECT_PROPERTY_WITH_VALIDATION(BrightnessEffect,
        WhitePoint,
        float[2],
        Numerics::Vector2,
        D2D1_BRIGHTNESS_PROP_WHITE_POINT,
        (value.X >= 0.0f) && (value.Y >= 0.0f) && (value.X <= 1.0f) && (value.Y <= 1.0f))

    IMPLEMENT_EFFECT_PROPERTY_WITH_VALIDATION(BrightnessEffect,
        BlackPoint,
        float[2],
        Numerics::Vector2,
        D2D1_BRIGHTNESS_PROP_BLACK_POINT,
        (value.X >= 0.0f) && (value.Y >= 0.0f) && (value.X <= 1.0f) && (value.Y <= 1.0f))

    IMPLEMENT_EFFECT_SOURCE_PROPERTY(BrightnessEffect,
        Source,
        0)

    IMPLEMENT_EFFECT_PROPERTY_MAPPING(BrightnessEffect,
        { L"WhitePoint", D2D1_BRIGHTNESS_PROP_WHITE_POINT, GRAPHICS_EFFECT_PROPERTY_MAPPING_DIRECT },
        { L"BlackPoint", D2D1_BRIGHTNESS_PROP_BLACK_POINT, GRAPHICS_EFFECT_PROPERTY_MAPPING_DIRECT })

    ActivatableClass(BrightnessEffect);
}}}}}
