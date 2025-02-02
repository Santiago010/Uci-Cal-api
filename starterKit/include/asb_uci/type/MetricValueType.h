/** @file MetricValueType.h
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

#ifndef ASB_UCI_TYPE_METRICVALUETYPE_H
#define ASB_UCI_TYPE_METRICVALUETYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/type/NegotiableOptionsEnum.h"
#include "../../../include/asb_uci/type/UnitIntervalFloatType.h"
#include "../../../include/asb_uci/type/VisibleString256Type.h"
#include "../../../include/asb_xs/type/simpleXmlSchemaPrimitives.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/MetricValueType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class ForeignKeyType;

/** Value of the performance metric for this ID. ID and valid value ranges can be found in the service contract. */
class MetricValueType : public virtual uci::type::MetricValueType {
public:
  /** The constructor */
  MetricValueType();

  /** The copy constructor
    *
    * @param rhs The MetricValueType to copy from
    */
  MetricValueType(const MetricValueType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The MetricValueType to move from
    */
  MetricValueType(MetricValueType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The MetricValueType to copy from
    * @return The MetricValueType that was assigned
    */
  MetricValueType& operator=(const MetricValueType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The MetricValueType to move from
    * @return The MetricValueType that was assigned
    */
  MetricValueType& operator=(MetricValueType&& rhs) = delete;

  /** The destructor */
  virtual ~MetricValueType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::MetricValueType whose contents are to be used to set this uci::type::MetricValueType's
    *      contents.
    */
  void copy(const uci::type::MetricValueType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::MetricValueType whose contents are to be used to set this uci::type::MetricValueType's
    *      contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::MetricValueType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the accessor to the MetricIdentifier field contained in this message fragment
    *
    * @return The const reference to the accessor to the MetricIdentifier field.
    */
  const uci::type::ForeignKeyType& getMetricIdentifier() const override;

  /** Returns the accessor to the MetricIdentifier field contained in this message fragment
    *
    * @return The reference to the accessor to the MetricIdentifier field.
    */
  uci::type::ForeignKeyType& getMetricIdentifier() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::MetricValueType& setMetricIdentifier(const uci::type::ForeignKeyType& accessor) override;

  /** Enables the optional field such that getMetricIdentifier will return the optional field and not throw an exception
    * when invoked.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available for the element. The use of
    *      this parameter provides support for inheritable types. This parameter defaults to uci::base::accessorType::null
    *      that is used to indicate that the access methods associated with the element shall provide access to data of the
    *      type that was specified for that element in the OMS schema, i.e. the element's base type. If specified, this
    *      field must either be a type ID associated with the element's base type or a type ID associated with a type that
    *      is derived from the element's base type.
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ForeignKeyType& enableMetricIdentifier(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  asb_uci::type::VisibleString256Type& getDescriptionOfMetric_() const;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  const asb_uci::type::VisibleString256Type& getDescriptionOfMetric() const override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  asb_uci::type::VisibleString256Type& getDescriptionOfMetric() override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::MetricValueType& setDescriptionOfMetric(const asb_uci::type::VisibleString256Type& value) override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::MetricValueType& setDescriptionOfMetric(const std::string& value) override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::MetricValueType& setDescriptionOfMetric(const char* value) override;

  /** Returns whether this optional field descriptionOfMetric_is available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasDescriptionOfMetric() const noexcept override;

  /** Enables the optional field such that getDescriptionOfMetric will return the optional field and not throw an exception
    * when invoked.
    *
    * @param type The value to set the optional field to
    * @return The value of the optional field
    */
  asb_uci::type::VisibleString256Type& enableDescriptionOfMetric(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::MetricValueType& clearDescriptionOfMetric() noexcept override;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::NegotiableOptionsEnum& getNegotiableOptions_() const;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::NegotiableOptionsEnum& getNegotiableOptions() const override;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::NegotiableOptionsEnum& getNegotiableOptions() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::MetricValueType& setNegotiableOptions(const uci::type::NegotiableOptionsEnum& accessor) override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param value The accessor to use to set the contents of the message fragment that this accessor provides access to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::MetricValueType& setNegotiableOptions(uci::type::NegotiableOptionsEnum::EnumerationItem value) override;

  /** Returns whether this optional field NegotiableOptionsis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasNegotiableOptions() const noexcept override;

  /** Enables the optional field such that getNegotiableOptions will return the optional field and not throw an exception
    * when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::NegotiableOptionsEnum& enableNegotiableOptions(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::MetricValueType& clearNegotiableOptions() noexcept override;

  /** Returns the contents of the message's Weight field
    *
    * @return The contents of the Weight field
    */
  uci::type::UnitIntervalFloatTypeValue getWeight() const override;

  /** Sets the contents of the message's Weight field
    *
    * @param value The new value to set the Weight field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::MetricValueType& setWeight(uci::type::UnitIntervalFloatTypeValue value) override;

  /** Returns the contents of the message's Value field
    *
    * @return The contents of the Value field
    */
  xs::Float getValue() const override;

  /** Sets the contents of the message's Value field
    *
    * @param value The new value to set the Value field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::MetricValueType& setValue(xs::Float value) override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<MetricValueType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::MetricValueType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::MetricValueType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<ForeignKeyType> metricIdentifier_Accessor;
  std::unique_ptr<asb_uci::type::VisibleString256Type> descriptionOfMetric_Accessor;
  std::unique_ptr<NegotiableOptionsEnum> negotiableOptions_Accessor;
  UnitIntervalFloatTypeValue weight_Accessor{0.0};
  asb_xs::Float value_Accessor{0.0};

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_METRICVALUETYPE_H

