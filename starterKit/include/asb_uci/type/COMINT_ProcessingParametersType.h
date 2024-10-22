/** @file COMINT_ProcessingParametersType.h
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

#ifndef ASB_UCI_TYPE_COMINT_PROCESSINGPARAMETERSTYPE_H
#define ASB_UCI_TYPE_COMINT_PROCESSINGPARAMETERSTYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/type/DurationType.h"
#include "../../../include/asb_uci/type/FrequencyType.h"
#include "../../../include/asb_uci/type/ProcessingParametersPET.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/COMINT_ProcessingParametersType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class FrequencyRangeType;

/** This is a polymorphic extension which allows for the extension of the base ProcessingParametersType. */
class COMINT_ProcessingParametersType : public virtual uci::type::COMINT_ProcessingParametersType, public virtual ProcessingParametersPET {
public:
  /** The constructor */
  COMINT_ProcessingParametersType();

  /** The copy constructor
    *
    * @param rhs The COMINT_ProcessingParametersType to copy from
    */
  COMINT_ProcessingParametersType(const COMINT_ProcessingParametersType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The COMINT_ProcessingParametersType to move from
    */
  COMINT_ProcessingParametersType(COMINT_ProcessingParametersType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The COMINT_ProcessingParametersType to copy from
    * @return The COMINT_ProcessingParametersType that was assigned
    */
  COMINT_ProcessingParametersType& operator=(const COMINT_ProcessingParametersType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The COMINT_ProcessingParametersType to move from
    * @return The COMINT_ProcessingParametersType that was assigned
    */
  COMINT_ProcessingParametersType& operator=(COMINT_ProcessingParametersType&& rhs) = delete;

  /** The destructor */
  ~COMINT_ProcessingParametersType() override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::COMINT_ProcessingParametersType whose contents are to be used to set this
    *      uci::type::COMINT_ProcessingParametersType's contents.
    */
  void copy(const uci::type::COMINT_ProcessingParametersType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::COMINT_ProcessingParametersType whose contents are to be used to set this
    *      uci::type::COMINT_ProcessingParametersType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::COMINT_ProcessingParametersType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::FrequencyTypeValue getCenterFrequency() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::COMINT_ProcessingParametersType& setCenterFrequency(uci::type::FrequencyTypeValue value) override;

  /** Returns whether this optional field CenterFrequencyis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasCenterFrequency() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::COMINT_ProcessingParametersType& clearCenterFrequency() noexcept override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::FrequencyRangeType& getCollectionBandwidth_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::FrequencyRangeType& getCollectionBandwidth() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::FrequencyRangeType& getCollectionBandwidth() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::COMINT_ProcessingParametersType& setCollectionBandwidth(const uci::type::FrequencyRangeType& accessor) override;

  /** Returns whether this optional field CollectionBandwidthis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasCollectionBandwidth() const noexcept override;

  /** Enables the optional field such that getCollectionBandwidth will return the optional field and not throw an exception
    * when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::FrequencyRangeType& enableCollectionBandwidth(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::COMINT_ProcessingParametersType& clearCollectionBandwidth() noexcept override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::FrequencyRangeType& getSignalBandwidth_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::FrequencyRangeType& getSignalBandwidth() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::FrequencyRangeType& getSignalBandwidth() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::COMINT_ProcessingParametersType& setSignalBandwidth(const uci::type::FrequencyRangeType& accessor) override;

  /** Returns whether this optional field SignalBandwidthis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasSignalBandwidth() const noexcept override;

  /** Enables the optional field such that getSignalBandwidth will return the optional field and not throw an exception
    * when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::FrequencyRangeType& enableSignalBandwidth(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::COMINT_ProcessingParametersType& clearSignalBandwidth() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::DurationTypeValue getMaxLOB_TimeOffset() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::COMINT_ProcessingParametersType& setMaxLOB_TimeOffset(uci::type::DurationTypeValue value) override;

  /** Returns whether this optional field MaxLOB_TimeOffsetis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasMaxLOB_TimeOffset() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::COMINT_ProcessingParametersType& clearMaxLOB_TimeOffset() noexcept override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<COMINT_ProcessingParametersType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::COMINT_ProcessingParametersType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::COMINT_ProcessingParametersType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  boost::optional<FrequencyTypeValue> centerFrequency_Accessor;
  std::unique_ptr<FrequencyRangeType> collectionBandwidth_Accessor;
  std::unique_ptr<FrequencyRangeType> signalBandwidth_Accessor;
  boost::optional<DurationTypeValue> maxLOB_TimeOffset_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_COMINT_PROCESSINGPARAMETERSTYPE_H
