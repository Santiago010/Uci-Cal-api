/** @file ResourceAllocationPeriodRF_Type.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:14 PM
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

#ifndef ASB_UCI_TYPE_RESOURCEALLOCATIONPERIODRF_TYPE_H
#define ASB_UCI_TYPE_RESOURCEALLOCATIONPERIODRF_TYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/type/DurationType.h"
#include "../../../include/asb_uci/type/PercentType.h"
#include "../../../include/asb_uci/type/RF_TypeEnum.h"
#include "../../../include/asb_xs/type/simpleXmlSchemaPrimitives.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ResourceAllocationPeriodRF_Type.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/** See annotations in child elements and messages/elements that use this type for details. */
class ResourceAllocationPeriodRF_Type : public virtual uci::type::ResourceAllocationPeriodRF_Type {
public:
  /** The constructor */
  ResourceAllocationPeriodRF_Type();

  /** The copy constructor
    *
    * @param rhs The ResourceAllocationPeriodRF_Type to copy from
    */
  ResourceAllocationPeriodRF_Type(const ResourceAllocationPeriodRF_Type& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The ResourceAllocationPeriodRF_Type to move from
    */
  ResourceAllocationPeriodRF_Type(ResourceAllocationPeriodRF_Type&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The ResourceAllocationPeriodRF_Type to copy from
    * @return The ResourceAllocationPeriodRF_Type that was assigned
    */
  ResourceAllocationPeriodRF_Type& operator=(const ResourceAllocationPeriodRF_Type& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The ResourceAllocationPeriodRF_Type to move from
    * @return The ResourceAllocationPeriodRF_Type that was assigned
    */
  ResourceAllocationPeriodRF_Type& operator=(ResourceAllocationPeriodRF_Type&& rhs) = delete;

  /** The destructor */
  virtual ~ResourceAllocationPeriodRF_Type();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::ResourceAllocationPeriodRF_Type whose contents are to be used to set this
    *      uci::type::ResourceAllocationPeriodRF_Type's contents.
    */
  void copy(const uci::type::ResourceAllocationPeriodRF_Type& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::ResourceAllocationPeriodRF_Type whose contents are to be used to set this
    *      uci::type::ResourceAllocationPeriodRF_Type's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::ResourceAllocationPeriodRF_Type& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the contents of the message's AccessPeriodIndex field
    *
    * @return The contents of the AccessPeriodIndex field
    */
  xs::UnsignedInt getAccessPeriodIndex() const override;

  /** Sets the contents of the message's AccessPeriodIndex field
    *
    * @param value The new value to set the AccessPeriodIndex field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::ResourceAllocationPeriodRF_Type& setAccessPeriodIndex(xs::UnsignedInt value) override;

  /** Returns the contents of the message's PercentAccessLimit field
    *
    * @return The contents of the PercentAccessLimit field
    */
  uci::type::PercentTypeValue getPercentAccessLimit() const override;

  /** Sets the contents of the message's PercentAccessLimit field
    *
    * @param value The new value to set the PercentAccessLimit field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::ResourceAllocationPeriodRF_Type& setPercentAccessLimit(uci::type::PercentTypeValue value) override;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::RF_TypeEnum& getAccessPeriodRF_Mode_() const;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::RF_TypeEnum& getAccessPeriodRF_Mode() const override;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::RF_TypeEnum& getAccessPeriodRF_Mode() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::ResourceAllocationPeriodRF_Type& setAccessPeriodRF_Mode(const uci::type::RF_TypeEnum& accessor) override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param value The accessor to use to set the contents of the message fragment that this accessor provides access to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::ResourceAllocationPeriodRF_Type& setAccessPeriodRF_Mode(uci::type::RF_TypeEnum::EnumerationItem value) override;

  /** Returns whether this optional field AccessPeriodRF_Modeis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasAccessPeriodRF_Mode() const noexcept override;

  /** Enables the optional field such that getAccessPeriodRF_Mode will return the optional field and not throw an exception
    * when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::RF_TypeEnum& enableAccessPeriodRF_Mode(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::ResourceAllocationPeriodRF_Type& clearAccessPeriodRF_Mode() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::PercentTypeValue getPeriodPercentAccessExpected() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::ResourceAllocationPeriodRF_Type& setPeriodPercentAccessExpected(uci::type::PercentTypeValue value) override;

  /** Returns whether this optional field PeriodPercentAccessExpectedis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasPeriodPercentAccessExpected() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::ResourceAllocationPeriodRF_Type& clearPeriodPercentAccessExpected() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::DurationTypeValue getPeriodMaxAccessDuration() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::ResourceAllocationPeriodRF_Type& setPeriodMaxAccessDuration(uci::type::DurationTypeValue value) override;

  /** Returns whether this optional field PeriodMaxAccessDurationis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasPeriodMaxAccessDuration() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::ResourceAllocationPeriodRF_Type& clearPeriodMaxAccessDuration() noexcept override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<ResourceAllocationPeriodRF_Type> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::ResourceAllocationPeriodRF_Type& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::ResourceAllocationPeriodRF_Type& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  asb_xs::UnsignedInt accessPeriodIndex_Accessor{0};
  PercentTypeValue percentAccessLimit_Accessor{0.0};
  std::unique_ptr<RF_TypeEnum> accessPeriodRF_Mode_Accessor;
  boost::optional<PercentTypeValue> periodPercentAccessExpected_Accessor;
  boost::optional<DurationTypeValue> periodMaxAccessDuration_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_RESOURCEALLOCATIONPERIODRF_TYPE_H
