// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#pragma once

#include "NavigationViewItemBaseTemplateSettings.g.h"
#include "NavigationViewItemBaseTemplateSettings.properties.h"

class NavigationViewItemTemplateSettings :
	public winrt::implementation::NavigationViewItemBaseTemplateSettingsT<NavigationViewItemTemplateSettings>,
	public NavigationViewItemBaseTemplateSettingsProperties
{
};
