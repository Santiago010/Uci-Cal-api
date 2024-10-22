/** @file LobeType.h
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

#ifndef ASB_UCI_TYPE_LOBETYPE_H
#define ASB_UCI_TYPE_LOBETYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/type/DateTimeType.h"
#include "../../../include/asb_uci/type/DecibelType.h"
#include "../../../include/asb_uci/type/DurationType.h"
#include "../../../include/asb_xs/type/simpleXmlSchemaPrimitives.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/LobeType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/** See annotations in child elements and messages/elements that use this type for details. */
class LobeType : public virtual uci::type::LobeType {
public:
  /** The constructor */
  LobeType();

  /** The copy constructor
    *
    * @param rhs The LobeType to copy from
    */
  LobeType(const LobeType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The LobeType to move from
    */
  LobeType(LobeType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The LobeType to copy from
    * @return The LobeType that was assigned
    */
  LobeType& operator=(const LobeType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The LobeType to move from
    * @return The LobeType that was assigned
    */
  LobeType& operator=(LobeType&& rhs) = delete;

  /** The destructor */
  virtual ~LobeType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::LobeType whose contents are to be used to set this uci::type::LobeType's contents.
    */
  void copy(const uci::type::LobeType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::LobeType whose contents are to be used to set this uci::type::LobeType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::LobeType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::DecibelTypeValue getPeakAmplitude() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::LobeType& setPeakAmplitude(uci::type::DecibelTypeValue value) override;

  /** Returns whether this optional field PeakAmplitudeis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasPeakAmplitude() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::LobeType& clearPeakAmplitude() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::DateTimeTypeValue getPeakTime() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::LobeType& setPeakTime(uci::type::DateTimeTypeValue value) override;

  /** Returns whether this optional field PeakTimeis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasPeakTime() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::LobeType& clearPeakTime() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::DurationTypeValue getTimeInMainBeam() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::LobeType& setTimeInMainBeam(uci::type::DurationTypeValue value) override;

  /** Returns whether this optional field TimeInMainBeamis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasTimeInMainBeam() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::LobeType& clearTimeInMainBeam() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  xs::Boolean getGreatDepth() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::LobeType& setGreatDepth(xs::Boolean value) override;

  /** Returns whether this optional field GreatDepthis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasGreatDepth() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::LobeType& clearGreatDepth() noexcept override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<LobeType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::LobeType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::LobeType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  boost::optional<DecibelTypeValue> peakAmplitude_Accessor;
  boost::optional<DateTimeTypeValue> peakTime_Accessor;
  boost::optional<DurationTypeValue> timeInMainBeam_Accessor;
  boost::optional<asb_xs::Boolean> greatDepth_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_LOBETYPE_H
