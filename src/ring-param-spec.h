/*
 * ring-param-spec.h - Common param specs for object properties
 *
 * Copyright (C) 2007-2010 Nokia Corporation
 *   @author Pekka Pessi <first.surname@nokia.com>
 *
 * This work is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This work is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this work; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 */

#ifndef __RING_PARAM_SPEC_H__
#define __RING_PARAM_SPEC_H__

#include <glib-object.h>

G_BEGIN_DECLS

GParamSpec *ring_param_spec_imsi (guint flags);
GParamSpec *ring_param_spec_sms_valid(void);
GParamSpec *ring_param_spec_smsc(void);
GParamSpec *ring_param_spec_sms_reduced_charset(void);

GParamSpec *ring_param_spec_connection(void);

GParamSpec *ring_param_spec_interfaces(void);

GParamSpec *ring_param_spec_handle_id(guint flags);

GParamSpec *ring_param_spec_initiator(guint flags);
GParamSpec *ring_param_spec_initiator_id(guint flags);

GParamSpec *ring_param_spec_requested(guint flags);

GParamSpec *ring_param_spec_type_specific_capability_flags(guint flags,
  guint default_value);

GParamSpec *ring_param_spec_anon_modes(void);

GParamSpec *ring_param_spec_service (char const *name, guint flags);

GParamSpec *ring_param_spec_sms_service (guint flags);

G_END_DECLS

#endif /* #ifndef __RING_PARAM_SPEC_H__*/
