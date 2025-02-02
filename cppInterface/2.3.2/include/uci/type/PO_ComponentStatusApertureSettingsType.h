/** @file PO_ComponentStatusApertureSettingsType.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:07 PM
 *
 * <pre>
 * Unclassified               U N C L A S S I F I E D               Unclassified
 *
 * DISTRIBUTION STATEMENT D: Distribution authorized to Department of Defense
 *    and U.S. DoD contractors only, Critical Technology, Export Controlled,
 *    26 January 2023. Other requests for this document shall be referred to
 *    AFLCMC/XA (OAMO), Wright-Patterson AFB OH 45433.
 *
 * DESTRUCTION NOTICE: Destroy by any method that will prevent disclosure of
 *    contents or reconstruction of the document.
 *
 * WARNING - This document contains technical data whose export is restricted
 *    by the Arms Export Control Act (Section 2751 of Title 22, United States
 *    Code) or the Export Control Reform Act of 2018 (Chapter 58 Sections
 *    4801-4852 of Title 50, United States Code). Violations of these export
 *    laws are subject to severe criminal penalties. Disseminate in accordance
 *    with provisions of DoD Directive 5230.25 and DoD Instruction 2040.02.
 *
 * Controlled by: USAF
 * Controlled by: AFLCMC/XA (OAMO)
 * CUI Category(ies): CTI, EXPT
 * Distribution Statement D
 * POC: Wayne Artuso, 937-713-5124
 *
 * CUI//SP-CTI/SP-EXPT
 * </pre>
 *
 */

#ifndef UCI_TYPE_PO_COMPONENTSTATUSAPERTURESETTINGSTYPE_H
#define UCI_TYPE_PO_COMPONENTSTATUSAPERTURESETTINGSTYPE_H

#include "../base/Accessor.h"
#include "../base/FloatAccessor.h"
#include "../base/export.h"
#include "ComponentControlsStatusType.h"
#include "EmptyType.h"
#include "PO_ApertureID_Type.h"

/** The namespace in which all UCI data types are declared */
namespace uci {

/** The namespace in which all base data types are declared */
namespace base {

class AbstractServiceBusConnection;

} // namespace base
} // namespace uci

/** The namespace in which all UCI data types are declared */
namespace uci {

/** The namespace in which all generated data types are declared */
namespace type {

/** See annotations in child elements and messages/elements that use this type for details. */
class PO_ComponentStatusApertureSettingsType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new PO_ComponentStatusApertureSettingsType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed PO_ComponentStatusApertureSettingsType.
    */
  static UCI_EXPORT PO_ComponentStatusApertureSettingsType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new PO_ComponentStatusApertureSettingsType initializing the data accessed by the new
    * PO_ComponentStatusApertureSettingsType using the data accessed by the specified
    * PO_ComponentStatusApertureSettingsType (cloning).
    *
    * @param accessor The PO_ComponentStatusApertureSettingsType that provides access to the data that is to be used to
    *      initialize the data accessed by the new created PO_ComponentStatusApertureSettingsType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed PO_ComponentStatusApertureSettingsType.
    */
  static UCI_EXPORT PO_ComponentStatusApertureSettingsType& create(const PO_ComponentStatusApertureSettingsType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified PO_ComponentStatusApertureSettingsType. Use of the specified accessor after it has
    * been destroyed will result in undefined behavior.
    *
    * @param accessor The PO_ComponentStatusApertureSettingsType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(PO_ComponentStatusApertureSettingsType& accessor);

  /** Returns this accessor's type constant, i.e. pO_ComponentStatusApertureSettingsType.
    *
    * @return This accessor's type constant, i.e. pO_ComponentStatusApertureSettingsType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::pO_ComponentStatusApertureSettingsType;
  }

  /** Returns the version that was initialized from the uci:version attribute of PO_ComponentStatusApertureSettingsType.
    *
    * @return The version that was initialized from the uci:version attribute of PO_ComponentStatusApertureSettingsType.
    */
  static std::string getUCITypeVersion() {
    return "000.000.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const PO_ComponentStatusApertureSettingsType& accessor) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by ApertureID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by ApertureID.
    */
  virtual const uci::type::PO_ApertureID_Type& getApertureID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by ApertureID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by ApertureID.
    */
  virtual uci::type::PO_ApertureID_Type& getApertureID() = 0;

  /** Sets the complex content identified by ApertureID to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by ApertureID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_ComponentStatusApertureSettingsType& setApertureID(const uci::type::PO_ApertureID_Type& value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * ApertureControlsStatus.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      ApertureControlsStatus.
    */
  virtual const uci::type::ComponentControlsStatusType& getApertureControlsStatus() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by ApertureControlsStatus.
    *
    * @return A reference to the accessor that provides access to the complex content identified by ApertureControlsStatus.
    */
  virtual uci::type::ComponentControlsStatusType& getApertureControlsStatus() = 0;

  /** Sets the complex content identified by ApertureControlsStatus to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by ApertureControlsStatus.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_ComponentStatusApertureSettingsType& setApertureControlsStatus(const uci::type::ComponentControlsStatusType& value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by F_StopSetting.
    *
    * @return The value of the simple primitive data type identified by F_StopSetting.
    */
  virtual xs::Float getF_StopSetting() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by F_StopSetting.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_ComponentStatusApertureSettingsType& setF_StopSetting(xs::Float value) = 0;

  /** Returns whether the Element identified by F_StopSetting exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by F_StopSetting is enabled or not.
    */
  virtual bool hasF_StopSetting() const = 0;

  /** Clears (disabled) the Element identified by F_StopSetting.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_ComponentStatusApertureSettingsType& clearF_StopSetting() = 0;

  /** Returns a const reference to the accessor that provides access to the string identified by Reset.
    *
    * @return A const reference to the accessor that provides access to the string identified by Reset.
    */
  virtual const uci::type::EmptyType& getReset() const = 0;

  /** Returns a reference to the accessor that provides access to the string identified by Reset.
    *
    * @return A reference to the accessor that provides access to the string identified by Reset.
    */
  virtual uci::type::EmptyType& getReset() = 0;

  /** Sets the string identified by Reset to the contents of the string accessed by the specified accessor.
    *
    * @param value The accessor that provides access to the string whose contents are to be used to set the contents of the
    *      string identified by Reset.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_ComponentStatusApertureSettingsType& setReset(const uci::type::EmptyType& value) = 0;

  /** Sets the string identified by Reset to the contents of the string that is accessed by the specified accessor.
    *
    * @param value The string used to set the string data type.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_ComponentStatusApertureSettingsType& setReset(const std::string& value) = 0;

  /** Sets the string identified by Reset to the contents of the string that is accessed by the specified accessor.
    *
    * @param value The string used to set the string data type.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_ComponentStatusApertureSettingsType& setReset(const char* value) = 0;

  /** Returns whether the Element identified by Reset exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by Reset is enabled or not.
    */
  virtual bool hasReset() const = 0;

  /** Enables the Element identified by Reset.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the string identified by Reset.
    */
  virtual uci::type::EmptyType& enableReset(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by Reset.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_ComponentStatusApertureSettingsType& clearReset() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  PO_ComponentStatusApertureSettingsType() {
  }

  /** The destructor [only available to derived classes]. */
  ~PO_ComponentStatusApertureSettingsType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The PO_ComponentStatusApertureSettingsType to copy from.
    */
  PO_ComponentStatusApertureSettingsType(const PO_ComponentStatusApertureSettingsType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this PO_ComponentStatusApertureSettingsType to the contents of the
    * PO_ComponentStatusApertureSettingsType on the right hand side (rhs) of the assignment operator [only available to
    * derived classes].
    *
    * @param rhs The PO_ComponentStatusApertureSettingsType on the right hand side (rhs) of the assignment operator whose
    *      contents are used to set the contents of this PO_ComponentStatusApertureSettingsType.
    * @return A reference to this PO_ComponentStatusApertureSettingsType.
    */
  PO_ComponentStatusApertureSettingsType& operator=(const PO_ComponentStatusApertureSettingsType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_PO_COMPONENTSTATUSAPERTURESETTINGSTYPE_H

