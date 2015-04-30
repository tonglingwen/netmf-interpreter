//-----------------------------------------------------------------------------
//
//    ** DO NOT EDIT THIS FILE! **
//    This file was generated by a tool
//    re-running the tool will overwrite this file.
//
//-----------------------------------------------------------------------------


#ifndef _WINDOWS_DEVICES_NATIVE_H_
#define _WINDOWS_DEVICES_NATIVE_H_

#include <TinyCLR_Interop.h>
struct Library_windows_devices_native_Windows_Devices_Enumeration_DeviceInformation
{
    static const int FIELD_STATIC__s_I2cPrefix = 0;
    static const int FIELD_STATIC__s_SpiPrefix = 1;

    static const int FIELD__m_id = 1;
    static const int FIELD__m_isDefault = 2;


    //--//

};

struct Library_windows_devices_native_Windows_Devices_Gpio_GpioController
{
    static const int FIELD_STATIC__s_instance = 2;

    TINYCLR_NATIVE_DECLARE(get_PinCount___I4);

    //--//

};

struct Library_windows_devices_native_Windows_Devices_Gpio_GpioPin
{
    static const int FIELD__m_syncLock = 1;
    static const int FIELD__m_disposed = 2;
    static const int FIELD__m_pinNumber = 3;
    static const int FIELD__m_flags = 4;
    static const int FIELD__m_driveMode = 5;
    static const int FIELD__m_lastOutputValue = 6;
    static const int FIELD__m_debounceTimeout = 7;
    static const int FIELD__m_callbacks = 8;

    TINYCLR_NATIVE_DECLARE(get_DebounceTimeout___mscorlibSystemTimeSpan);
    TINYCLR_NATIVE_DECLARE(set_DebounceTimeout___VOID__mscorlibSystemTimeSpan);
    TINYCLR_NATIVE_DECLARE(Read___WindowsDevicesGpioGpioPinValue);
    TINYCLR_NATIVE_DECLARE(Write___VOID__WindowsDevicesGpioGpioPinValue);
    TINYCLR_NATIVE_DECLARE(Init___VOID__I4);
    TINYCLR_NATIVE_DECLARE(Dispose___VOID__BOOLEAN);
    TINYCLR_NATIVE_DECLARE(SetDriveModeInternal___VOID__WindowsDevicesGpioGpioPinDriveMode);

    //--//

};

struct Library_windows_devices_native_Windows_Devices_Gpio_GpioPinValueChangedEventArgs
{
    static const int FIELD__m_edge = 1;


    //--//

};

struct Library_windows_devices_native_Windows_Devices_I2c_I2cConnectionSettings
{
    static const int FIELD__m_slaveAddress = 1;
    static const int FIELD__m_busSpeed = 2;
    static const int FIELD__m_sharingMode = 3;
    static const int FIELD__m_addressingMode = 4;


    //--//

};

struct Library_windows_devices_native_Windows_Devices_I2c_I2cDevice
{
    static const int FIELD_STATIC__s_deviceLock = 3;
    static const int FIELD_STATIC__s_deviceRefs = 4;
    static const int FIELD_STATIC__s_device = 5;

    static const int FIELD__m_syncLock = 1;
    static const int FIELD__m_disposed = 2;
    static const int FIELD__m_configuration = 3;


    //--//

};

struct Library_windows_devices_native_Windows_Devices_I2c_I2cTransferResult
{
    static const int FIELD__Status = 1;
    static const int FIELD__BytesTransferred = 2;


    //--//

};



extern const CLR_RT_NativeAssemblyData g_CLR_AssemblyNative_Windows_Devices;

#endif  //_WINDOWS_DEVICES_NATIVE_H_
