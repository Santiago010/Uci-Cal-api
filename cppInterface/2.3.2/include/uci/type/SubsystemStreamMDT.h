/** @file SubsystemStreamMDT.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:08 PM
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

#ifndef UCI_TYPE_SUBSYSTEMSTREAMMDT_H
#define UCI_TYPE_SUBSYSTEMSTREAMMDT_H

#include "../base/Accessor.h"
#include "../base/BoundedList.h"
#include "../base/UnsignedIntAccessor.h"
#include "../base/export.h"
#include "SubsystemID_Type.h"
#include "SubsystemSettingEnum.h"
#include "VisibleString1024Type.h"
#include "../../xs/type/binaryXmlSchemaPrimitives.h"

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
class SubsystemStreamMDT : public virtual uci::base::Accessor {
public:

  /** This method constructs a new SubsystemStreamMDT.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed SubsystemStreamMDT.
    */
  static UCI_EXPORT SubsystemStreamMDT& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new SubsystemStreamMDT initializing the data accessed by the new SubsystemStreamMDT using
    * the data accessed by the specified SubsystemStreamMDT (cloning).
    *
    * @param accessor The SubsystemStreamMDT that provides access to the data that is to be used to initialize the data
    *      accessed by the new created SubsystemStreamMDT.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed SubsystemStreamMDT.
    */
  static UCI_EXPORT SubsystemStreamMDT& create(const SubsystemStreamMDT& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified SubsystemStreamMDT. Use of the specified accessor after it has been destroyed will
    * result in undefined behavior.
    *
    * @param accessor The SubsystemStreamMDT that is to be destroyed.
    */
  static UCI_EXPORT void destroy(SubsystemStreamMDT& accessor);

  /** Returns this accessor's type constant, i.e. subsystemStreamMDT.
    *
    * @return This accessor's type constant, i.e. subsystemStreamMDT.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::subsystemStreamMDT;
  }

  /** Returns the version that was initialized from the uci:version attribute of SubsystemStreamMDT.
    *
    * @return The version that was initialized from the uci:version attribute of SubsystemStreamMDT.
    */
  static std::string getUCITypeVersion() {
    return "000.000.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const SubsystemStreamMDT& accessor) = 0;

  /** Indicates the free-form text data of the stream. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH] */
  typedef uci::base::BoundedList<uci::type::VisibleString1024Type, uci::type::accessorType::visibleString1024Type> SubsystemStreamString;

  /** Returns a const reference to the accessor that provides access to the complex content identified by SubsystemID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by SubsystemID.
    */
  virtual const uci::type::SubsystemID_Type& getSubsystemID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by SubsystemID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by SubsystemID.
    */
  virtual uci::type::SubsystemID_Type& getSubsystemID() = 0;

  /** Sets the complex content identified by SubsystemID to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by SubsystemID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SubsystemStreamMDT& setSubsystemID(const uci::type::SubsystemID_Type& value) = 0;

  /** Returns a const reference to the value of the enumeration identified by SubsystemSetting.
    *
    * @return A const reference to the value of the enumeration identified by SubsystemSetting.
    */
  virtual const uci::type::SubsystemSettingEnum& getSubsystemSetting() const = 0;

  /** Returns a reference to the value of the enumeration identified by SubsystemSetting.
    *
    * @return A reference to the value of the enumeration identified by SubsystemSetting.
    */
  virtual uci::type::SubsystemSettingEnum& getSubsystemSetting() = 0;

  /** Sets the value of the enumeration identified by SubsystemSetting.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SubsystemStreamMDT& setSubsystemSetting(const uci::type::SubsystemSettingEnum& value) = 0;

  /** Sets the value of the enumeration identified by SubsystemSetting.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SubsystemStreamMDT& setSubsystemSetting(uci::type::SubsystemSettingEnum::EnumerationItem value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by SubsystemSettingParameter.
    *
    * @return The value of the simple primitive data type identified by SubsystemSettingParameter.
    */
  virtual xs::UnsignedInt getSubsystemSettingParameter() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by SubsystemSettingParameter.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SubsystemStreamMDT& setSubsystemSettingParameter(xs::UnsignedInt value) = 0;

  /** Returns whether the Element identified by SubsystemSettingParameter exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by SubsystemSettingParameter is enabled or not.
    */
  virtual bool hasSubsystemSettingParameter() const = 0;

  /** Clears (disabled) the Element identified by SubsystemSettingParameter.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SubsystemStreamMDT& clearSubsystemSettingParameter() = 0;

  /** Returns a const reference to the bounded list identified by SubsystemStreamString.
    *
    * @return A const reference to the bounded list identified by SubsystemStreamString.
    */
  virtual const uci::type::SubsystemStreamMDT::SubsystemStreamString& getSubsystemStreamString() const = 0;

  /** Returns a reference to the bounded list identified by SubsystemStreamString.
    *
    * @return A reference to the bounded list identified by SubsystemStreamString.
    */
  virtual uci::type::SubsystemStreamMDT::SubsystemStreamString& getSubsystemStreamString() = 0;

  /** Sets the bounded list identified by SubsystemStreamString.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SubsystemStreamMDT& setSubsystemStreamString(const uci::type::SubsystemStreamMDT::SubsystemStreamString& value) = 0;

  /** Returns the accessor to the SubsystemStreamBinary field contained in this message fragment.
    *
    * @return The reference to the accessor to the SubsystemStreamBinary field.
    */
  virtual const xs::HexBinary& getSubsystemStreamBinary() const = 0;

  /** Returns the accessor to the SubsystemStreamBinary field contained in this message fragment.
    *
    * @return The reference to the accessor to the SubsystemStreamBinary field.
    */
  virtual xs::HexBinary& getSubsystemStreamBinary() = 0;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents.
    *
    * @param value The accessor to use to set the contents of the message fragment that this accessor provides access to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SubsystemStreamMDT& setSubsystemStreamBinary(const xs::HexBinary& value) = 0;

  /** Returns whether this optionalfield SubsystemStreamBinaryis available.
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  virtual bool hasSubsystemStreamBinary() const = 0;

  /** Enables the optional field such that getSubsystemStreamBinary will return the optional field and not throw an
    * exception when invoked.
    *
    * @return The reference to the accessor to the SubsystemStreamBinary field.
    */
  virtual xs::HexBinary& enableSubsystemStreamBinary() = 0;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SubsystemStreamMDT& clearSubsystemStreamBinary() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  SubsystemStreamMDT() {
  }

  /** The destructor [only available to derived classes]. */
  ~SubsystemStreamMDT() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The SubsystemStreamMDT to copy from.
    */
  SubsystemStreamMDT(const SubsystemStreamMDT& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this SubsystemStreamMDT to the contents of the SubsystemStreamMDT on
    * the right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The SubsystemStreamMDT on the right hand side (rhs) of the assignment operator whose contents are used to
    *      set the contents of this SubsystemStreamMDT.
    * @return A reference to this SubsystemStreamMDT.
    */
  SubsystemStreamMDT& operator=(const SubsystemStreamMDT& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_SUBSYSTEMSTREAMMDT_H

