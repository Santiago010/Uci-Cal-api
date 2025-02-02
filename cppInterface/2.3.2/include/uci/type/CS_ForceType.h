/** @file CS_ForceType.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:06 PM
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

#ifndef UCI_TYPE_CS_FORCETYPE_H
#define UCI_TYPE_CS_FORCETYPE_H

#include "../base/Accessor.h"
#include "../base/BooleanAccessor.h"
#include "../base/BoundedList.h"
#include "../base/export.h"
#include "CS_CapabilitiesType.h"
#include "CS_FreeFormatType.h"
#include "CS_ObscuraDataType.h"
#include "CS_PostureType.h"
#include "DistanceType.h"
#include "ForeignKeyType.h"
#include "VisibleString32Type.h"

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

/** This type represent a CounterSpace capability (Force). */
class CS_ForceType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new CS_ForceType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed CS_ForceType.
    */
  static UCI_EXPORT CS_ForceType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new CS_ForceType initializing the data accessed by the new CS_ForceType using the data
    * accessed by the specified CS_ForceType (cloning).
    *
    * @param accessor The CS_ForceType that provides access to the data that is to be used to initialize the data accessed
    *      by the new created CS_ForceType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed CS_ForceType.
    */
  static UCI_EXPORT CS_ForceType& create(const CS_ForceType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified CS_ForceType. Use of the specified accessor after it has been destroyed will
    * result in undefined behavior.
    *
    * @param accessor The CS_ForceType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(CS_ForceType& accessor);

  /** Returns this accessor's type constant, i.e. cS_ForceType.
    *
    * @return This accessor's type constant, i.e. cS_ForceType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::cS_ForceType;
  }

  /** Returns the version that was initialized from the uci:version attribute of CS_ForceType.
    *
    * @return The version that was initialized from the uci:version attribute of CS_ForceType.
    */
  static std::string getUCITypeVersion() {
    return "001.000.002.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const CS_ForceType& accessor) = 0;

  /** Indicates external (non-UCI) reference names for available CounterSpace capability's effects/tactics. [Occurrences:
    * Minimum: 0; Maximum: MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::ForeignKeyType, uci::type::accessorType::foreignKeyType> Tactics;

  /** Times related to attaining a posture level or maintaining a posture level. [Occurrences: Minimum: 0; Maximum: 5] */
  typedef uci::base::BoundedList<uci::type::CS_PostureType, uci::type::accessorType::cS_PostureType> Posture;

  /** CounterSpace sub-capabilities. These sub-capabilities are individual receive or transmit signal capabilities.
    * [Occurrences: Minimum: 0; Maximum: MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::CS_CapabilitiesType, uci::type::accessorType::cS_CapabilitiesType> ForceCapability;

  /** Returns a const reference to the accessor that provides access to the complex content identified by ForceName.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by ForceName.
    */
  virtual const uci::type::ForeignKeyType& getForceName() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by ForceName.
    *
    * @return A reference to the accessor that provides access to the complex content identified by ForceName.
    */
  virtual uci::type::ForeignKeyType& getForceName() = 0;

  /** Sets the complex content identified by ForceName to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by ForceName.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CS_ForceType& setForceName(const uci::type::ForeignKeyType& value) = 0;

  /** Returns whether the Element identified by ForceName exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by ForceName is enabled or not.
    */
  virtual bool hasForceName() const = 0;

  /** Enables the Element identified by ForceName.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by ForceName.
    */
  virtual uci::type::ForeignKeyType& enableForceName(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by ForceName.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CS_ForceType& clearForceName() = 0;

  /** Returns a const reference to the accessor that provides access to the string identified by LocationName.
    *
    * @return A const reference to the accessor that provides access to the string identified by LocationName.
    */
  virtual const uci::type::VisibleString32Type& getLocationName() const = 0;

  /** Returns a reference to the accessor that provides access to the string identified by LocationName.
    *
    * @return A reference to the accessor that provides access to the string identified by LocationName.
    */
  virtual uci::type::VisibleString32Type& getLocationName() = 0;

  /** Sets the string identified by LocationName to the contents of the string accessed by the specified accessor.
    *
    * @param value The accessor that provides access to the string whose contents are to be used to set the contents of the
    *      string identified by LocationName.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CS_ForceType& setLocationName(const uci::type::VisibleString32Type& value) = 0;

  /** Sets the string identified by LocationName to the contents of the string that is accessed by the specified accessor.
    *
    * @param value The string used to set the string data type.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CS_ForceType& setLocationName(const std::string& value) = 0;

  /** Sets the string identified by LocationName to the contents of the string that is accessed by the specified accessor.
    *
    * @param value The string used to set the string data type.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CS_ForceType& setLocationName(const char* value) = 0;

  /** Returns whether the Element identified by LocationName exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by LocationName is enabled or not.
    */
  virtual bool hasLocationName() const = 0;

  /** Enables the Element identified by LocationName.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the string identified by LocationName.
    */
  virtual uci::type::VisibleString32Type& enableLocationName(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by LocationName.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CS_ForceType& clearLocationName() = 0;

  /** Returns a const reference to the bounded list identified by Tactics.
    *
    * @return A const reference to the bounded list identified by Tactics.
    */
  virtual const uci::type::CS_ForceType::Tactics& getTactics() const = 0;

  /** Returns a reference to the bounded list identified by Tactics.
    *
    * @return A reference to the bounded list identified by Tactics.
    */
  virtual uci::type::CS_ForceType::Tactics& getTactics() = 0;

  /** Sets the bounded list identified by Tactics.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CS_ForceType& setTactics(const uci::type::CS_ForceType::Tactics& value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by Locked.
    *
    * @return The value of the simple primitive data type identified by Locked.
    */
  virtual xs::Boolean getLocked() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by Locked.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CS_ForceType& setLocked(xs::Boolean value) = 0;

  /** Returns whether the Element identified by Locked exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by Locked is enabled or not.
    */
  virtual bool hasLocked() const = 0;

  /** Clears (disabled) the Element identified by Locked.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CS_ForceType& clearLocked() = 0;

  /** Returns a const reference to the bounded list identified by Posture.
    *
    * @return A const reference to the bounded list identified by Posture.
    */
  virtual const uci::type::CS_ForceType::Posture& getPosture() const = 0;

  /** Returns a reference to the bounded list identified by Posture.
    *
    * @return A reference to the bounded list identified by Posture.
    */
  virtual uci::type::CS_ForceType::Posture& getPosture() = 0;

  /** Sets the bounded list identified by Posture.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CS_ForceType& setPosture(const uci::type::CS_ForceType::Posture& value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by Portable.
    *
    * @return The value of the simple primitive data type identified by Portable.
    */
  virtual xs::Boolean getPortable() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by Portable.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CS_ForceType& setPortable(xs::Boolean value) = 0;

  /** Returns whether the Element identified by Portable exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by Portable is enabled or not.
    */
  virtual bool hasPortable() const = 0;

  /** Clears (disabled) the Element identified by Portable.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CS_ForceType& clearPortable() = 0;

  /** Returns the value of the SimplePrimitive data type identified by PortableRadius.
    *
    * @return The value of the simple primitive data type identified by PortableRadius.
    */
  virtual uci::type::DistanceTypeValue getPortableRadius() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by PortableRadius.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CS_ForceType& setPortableRadius(uci::type::DistanceTypeValue value) = 0;

  /** Returns whether the Element identified by PortableRadius exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by PortableRadius is enabled or not.
    */
  virtual bool hasPortableRadius() const = 0;

  /** Clears (disabled) the Element identified by PortableRadius.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CS_ForceType& clearPortableRadius() = 0;

  /** Returns the value of the SimplePrimitive data type identified by UseForceObscura.
    *
    * @return The value of the simple primitive data type identified by UseForceObscura.
    */
  virtual xs::Boolean getUseForceObscura() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by UseForceObscura.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CS_ForceType& setUseForceObscura(xs::Boolean value) = 0;

  /** Returns whether the Element identified by UseForceObscura exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by UseForceObscura is enabled or not.
    */
  virtual bool hasUseForceObscura() const = 0;

  /** Clears (disabled) the Element identified by UseForceObscura.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CS_ForceType& clearUseForceObscura() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by FreeFormat.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by FreeFormat.
    */
  virtual const uci::type::CS_FreeFormatType& getFreeFormat() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by FreeFormat.
    *
    * @return A reference to the accessor that provides access to the complex content identified by FreeFormat.
    */
  virtual uci::type::CS_FreeFormatType& getFreeFormat() = 0;

  /** Sets the complex content identified by FreeFormat to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by FreeFormat.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CS_ForceType& setFreeFormat(const uci::type::CS_FreeFormatType& value) = 0;

  /** Returns whether the Element identified by FreeFormat exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by FreeFormat is enabled or not.
    */
  virtual bool hasFreeFormat() const = 0;

  /** Enables the Element identified by FreeFormat.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by FreeFormat.
    */
  virtual uci::type::CS_FreeFormatType& enableFreeFormat(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by FreeFormat.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CS_ForceType& clearFreeFormat() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by ObscuraData.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by ObscuraData.
    */
  virtual const uci::type::CS_ObscuraDataType& getObscuraData() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by ObscuraData.
    *
    * @return A reference to the accessor that provides access to the complex content identified by ObscuraData.
    */
  virtual uci::type::CS_ObscuraDataType& getObscuraData() = 0;

  /** Sets the complex content identified by ObscuraData to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by ObscuraData.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CS_ForceType& setObscuraData(const uci::type::CS_ObscuraDataType& value) = 0;

  /** Returns whether the Element identified by ObscuraData exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by ObscuraData is enabled or not.
    */
  virtual bool hasObscuraData() const = 0;

  /** Enables the Element identified by ObscuraData.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by ObscuraData.
    */
  virtual uci::type::CS_ObscuraDataType& enableObscuraData(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by ObscuraData.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CS_ForceType& clearObscuraData() = 0;

  /** Returns a const reference to the bounded list identified by ForceCapability.
    *
    * @return A const reference to the bounded list identified by ForceCapability.
    */
  virtual const uci::type::CS_ForceType::ForceCapability& getForceCapability() const = 0;

  /** Returns a reference to the bounded list identified by ForceCapability.
    *
    * @return A reference to the bounded list identified by ForceCapability.
    */
  virtual uci::type::CS_ForceType::ForceCapability& getForceCapability() = 0;

  /** Sets the bounded list identified by ForceCapability.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CS_ForceType& setForceCapability(const uci::type::CS_ForceType::ForceCapability& value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  CS_ForceType() {
  }

  /** The destructor [only available to derived classes]. */
  ~CS_ForceType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The CS_ForceType to copy from.
    */
  CS_ForceType(const CS_ForceType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this CS_ForceType to the contents of the CS_ForceType on the right hand
    * side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The CS_ForceType on the right hand side (rhs) of the assignment operator whose contents are used to set
    *      the contents of this CS_ForceType.
    * @return A reference to this CS_ForceType.
    */
  CS_ForceType& operator=(const CS_ForceType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_CS_FORCETYPE_H

