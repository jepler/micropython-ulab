#ifndef MICROPY_INCLUDED_ULAB_COMPAT_H
#define MICROPY_INCLUDED_ULAB_COMPAT_H
 
#pragma GCC diagnostic ignored "-Wshadow"

#define mp_obj_is_type(obj, type) MP_OBJ_IS_TYPE(obj, type)

#define MP_ROM_NONE (MP_ROM_PTR(&mp_const_none_obj))
#define MP_ROM_FALSE (mp_const_false) 
#define MP_ROM_TRUE (mp_const_true) 

#endif  //  MICROPY_INCLUDED_ULAB_COMPAT_H

