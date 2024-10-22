/** @file IPv6_ConnectionType.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:13 PM
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

#ifndef ASB_UCI_TYPE_IPV6_CONNECTIONTYPE_H
#define ASB_UCI_TYPE_IPV6_CONNECTIONTYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/type/IPv6_AddressType.h"
#include "../../../include/asb_xs/type/simpleXmlSchemaPrimitives.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/IPv6_ConnectionType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/** IPv6 connection endpoint details. */
class IPv6_ConnectionType : public virtual uci::type::IPv6_ConnectionType {
public:
  /** The constructor */
  IPv6_ConnectionType();

  /** The copy constructor
    *
    * @param rhs The IPv6_ConnectionType to copy from
    */
  IPv6_ConnectionType(const IPv6_ConnectionType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The IPv6_ConnectionType to move from
    */
  IPv6_ConnectionType(IPv6_ConnectionType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The IPv6_ConnectionType to copy from
    * @return The IPv6_ConnectionType that was assigned
    */
  IPv6_ConnectionType& operator=(const IPv6_ConnectionType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The IPv6_ConnectionType to move from
    * @return The IPv6_ConnectionType that was assigned
    */
  IPv6_ConnectionType& operator=(IPv6_ConnectionType&& rhs) = delete;

  /** The destructor */
  virtual ~IPv6_ConnectionType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::IPv6_ConnectionType whose contents are to be used to set this
    *      uci::type::IPv6_ConnectionType's contents.
    */
  void copy(const uci::type::IPv6_ConnectionType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::IPv6_ConnectionType whose contents are to be used to set this
    *      uci::type::IPv6_ConnectionType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::IPv6_ConnectionType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::IPv6_AddressType& getIPv6_Address_() const;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  const uci::type::IPv6_AddressType& getIPv6_Address() const override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::IPv6_AddressType& getIPv6_Address() override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::IPv6_ConnectionType& setIPv6_Address(const uci::type::IPv6_AddressType& value) override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::IPv6_ConnectionType& setIPv6_Address(const std::string& value) override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::IPv6_ConnectionType& setIPv6_Address(const char* value) override;

  /** Returns whether this optional field iPv6_Address_is available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasIPv6_Address() const noexcept override;

  /** Enables the optional field such that getIPv6_Address will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The value of the optional field
    */
  uci::type::IPv6_AddressType& enableIPv6_Address(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::IPv6_ConnectionType& clearIPv6_Address() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  xs::Int getIPv6_CIDR_Mask() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::IPv6_ConnectionType& setIPv6_CIDR_Mask(xs::Int value) override;

  /** Returns whether this optional field IPv6_CIDR_Maskis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasIPv6_CIDR_Mask() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::IPv6_ConnectionType& clearIPv6_CIDR_Mask() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  xs::Int getIPv6_ProtocolHeader() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::IPv6_ConnectionType& setIPv6_ProtocolHeader(xs::Int value) override;

  /** Returns whether this optional field IPv6_ProtocolHeaderis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasIPv6_ProtocolHeader() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::IPv6_ConnectionType& clearIPv6_ProtocolHeader() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  xs::Int getIPv6_PortRangeStart() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::IPv6_ConnectionType& setIPv6_PortRangeStart(xs::Int value) override;

  /** Returns whether this optional field IPv6_PortRangeStartis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasIPv6_PortRangeStart() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::IPv6_ConnectionType& clearIPv6_PortRangeStart() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  xs::Int getIPv6_PortRangeEnd() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::IPv6_ConnectionType& setIPv6_PortRangeEnd(xs::Int value) override;

  /** Returns whether this optional field IPv6_PortRangeEndis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasIPv6_PortRangeEnd() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::IPv6_ConnectionType& clearIPv6_PortRangeEnd() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  xs::Int getIPv6_DS_Field() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::IPv6_ConnectionType& setIPv6_DS_Field(xs::Int value) override;

  /** Returns whether this optional field IPv6_DS_Fieldis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasIPv6_DS_Field() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::IPv6_ConnectionType& clearIPv6_DS_Field() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  xs::Int getIPv6_MTU_Size() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::IPv6_ConnectionType& setIPv6_MTU_Size(xs::Int value) override;

  /** Returns whether this optional field IPv6_MTU_Sizeis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasIPv6_MTU_Size() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::IPv6_ConnectionType& clearIPv6_MTU_Size() noexcept override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<IPv6_ConnectionType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::IPv6_ConnectionType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

  /** 
    *
    * @param accessor .
    * @param propTree .
    * @param nodeName .
    * @param createNode .
    * @param addTypeAttribute .
    * @param checkIfDerivation .
    * @param topLevel .
    * @return .
    */
  static std::string serialize(const uci::type::IPv6_ConnectionType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<IPv6_AddressType> iPv6_Address_Accessor;
  boost::optional<asb_xs::Int> iPv6_CIDR_Mask_Accessor;
  boost::optional<asb_xs::Int> iPv6_ProtocolHeader_Accessor;
  boost::optional<asb_xs::Int> iPv6_PortRangeStart_Accessor;
  boost::optional<asb_xs::Int> iPv6_PortRangeEnd_Accessor;
  boost::optional<asb_xs::Int> iPv6_DS_Field_Accessor;
  boost::optional<asb_xs::Int> iPv6_MTU_Size_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_IPV6_CONNECTIONTYPE_H
