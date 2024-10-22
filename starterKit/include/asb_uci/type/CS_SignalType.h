/** @file CS_SignalType.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:12 PM
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

#ifndef ASB_UCI_TYPE_CS_SIGNALTYPE_H
#define ASB_UCI_TYPE_CS_SIGNALTYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/base/BoundedList.h"
#include "../../../include/asb_uci/type/PolarizationEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CS_SignalType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class ForeignKeyType;
class FrequencyRangeType;

/** This type represents an associated or reference signal for a CounterSpace engagement. */
class CS_SignalType : public virtual uci::type::CS_SignalType {
public:
  /** Additional signals IDs overserved within or associated with the tasked signal. [Occurrences: Minimum: 0; Maximum:
    * MAX_LENGTH]
    */
  using ExistingSignal = asb_uci::base::BoundedList<uci::type::ForeignKeyType, uci::type::accessorType::foreignKeyType, asb_uci::type::ForeignKeyType>;

  /** The constructor */
  CS_SignalType();

  /** The copy constructor
    *
    * @param rhs The CS_SignalType to copy from
    */
  CS_SignalType(const CS_SignalType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The CS_SignalType to move from
    */
  CS_SignalType(CS_SignalType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The CS_SignalType to copy from
    * @return The CS_SignalType that was assigned
    */
  CS_SignalType& operator=(const CS_SignalType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The CS_SignalType to move from
    * @return The CS_SignalType that was assigned
    */
  CS_SignalType& operator=(CS_SignalType&& rhs) = delete;

  /** The destructor */
  virtual ~CS_SignalType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::CS_SignalType whose contents are to be used to set this uci::type::CS_SignalType's
    *      contents.
    */
  void copy(const uci::type::CS_SignalType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::CS_SignalType whose contents are to be used to set this uci::type::CS_SignalType's
    *      contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::CS_SignalType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the accessor to the Signal field contained in this message fragment
    *
    * @return The const reference to the accessor to the Signal field.
    */
  const uci::type::ForeignKeyType& getSignal() const override;

  /** Returns the accessor to the Signal field contained in this message fragment
    *
    * @return The reference to the accessor to the Signal field.
    */
  uci::type::ForeignKeyType& getSignal() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::CS_SignalType& setSignal(const uci::type::ForeignKeyType& accessor) override;

  /** Enables the optional field such that getSignal will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available for the element. The use of
    *      this parameter provides support for inheritable types. This parameter defaults to uci::base::accessorType::null
    *      that is used to indicate that the access methods associated with the element shall provide access to data of the
    *      type that was specified for that element in the OMS schema, i.e. the element's base type. If specified, this
    *      field must either be a type ID associated with the element's base type or a type ID associated with a type that
    *      is derived from the element's base type.
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ForeignKeyType& enableSignal(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Returns the accessor to the UplinkFrequency field contained in this message fragment
    *
    * @return The const reference to the accessor to the UplinkFrequency field.
    */
  const uci::type::FrequencyRangeType& getUplinkFrequency() const override;

  /** Returns the accessor to the UplinkFrequency field contained in this message fragment
    *
    * @return The reference to the accessor to the UplinkFrequency field.
    */
  uci::type::FrequencyRangeType& getUplinkFrequency() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::CS_SignalType& setUplinkFrequency(const uci::type::FrequencyRangeType& accessor) override;

  /** Returns the contents of the message's UplinkPolarization field
    *
    * @return The contents of the UplinkPolarization field
    */
  const uci::type::PolarizationEnum& getUplinkPolarization() const override;

  /** Returns the contents of the message's UplinkPolarization field
    *
    * @return The contents of the UplinkPolarization field
    */
  uci::type::PolarizationEnum& getUplinkPolarization() override;

  /** Sets the contents of the message's UplinkPolarization field
    *
    * @param accessor The accessor to use to set the UplinkPolarization field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::CS_SignalType& setUplinkPolarization(const uci::type::PolarizationEnum& accessor) override;

  /** Sets the contents of the message's UplinkPolarization field
    *
    * @param value The new value to set the UplinkPolarization field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::CS_SignalType& setUplinkPolarization(uci::type::PolarizationEnum::EnumerationItem value) override;

  /** Returns the accessor to the DownlinkFrequency field contained in this message fragment
    *
    * @return The const reference to the accessor to the DownlinkFrequency field.
    */
  const uci::type::FrequencyRangeType& getDownlinkFrequency() const override;

  /** Returns the accessor to the DownlinkFrequency field contained in this message fragment
    *
    * @return The reference to the accessor to the DownlinkFrequency field.
    */
  uci::type::FrequencyRangeType& getDownlinkFrequency() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::CS_SignalType& setDownlinkFrequency(const uci::type::FrequencyRangeType& accessor) override;

  /** Returns the contents of the message's DownlinkPolarization field
    *
    * @return The contents of the DownlinkPolarization field
    */
  const uci::type::PolarizationEnum& getDownlinkPolarization() const override;

  /** Returns the contents of the message's DownlinkPolarization field
    *
    * @return The contents of the DownlinkPolarization field
    */
  uci::type::PolarizationEnum& getDownlinkPolarization() override;

  /** Sets the contents of the message's DownlinkPolarization field
    *
    * @param accessor The accessor to use to set the DownlinkPolarization field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::CS_SignalType& setDownlinkPolarization(const uci::type::PolarizationEnum& accessor) override;

  /** Sets the contents of the message's DownlinkPolarization field
    *
    * @param value The new value to set the DownlinkPolarization field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::CS_SignalType& setDownlinkPolarization(uci::type::PolarizationEnum::EnumerationItem value) override;

  /** Returns the accessor to the ExistingSignal field contained in this message fragment
    *
    * @return The const reference to the accessor to the ExistingSignal field.
    */
  const uci::type::CS_SignalType::ExistingSignal& getExistingSignal() const override;

  /** Returns the accessor to the ExistingSignal field contained in this message fragment
    *
    * @return The reference to the accessor to the ExistingSignal field.
    */
  uci::type::CS_SignalType::ExistingSignal& getExistingSignal() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::CS_SignalType& setExistingSignal(const uci::type::CS_SignalType::ExistingSignal& accessor) override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<CS_SignalType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::CS_SignalType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::CS_SignalType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<ForeignKeyType> signal_Accessor;
  std::unique_ptr<FrequencyRangeType> uplinkFrequency_Accessor;
  std::unique_ptr<PolarizationEnum> uplinkPolarization_Accessor;
  std::unique_ptr<FrequencyRangeType> downlinkFrequency_Accessor;
  std::unique_ptr<PolarizationEnum> downlinkPolarization_Accessor;
  std::unique_ptr<ExistingSignal> existingSignal_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_CS_SIGNALTYPE_H
