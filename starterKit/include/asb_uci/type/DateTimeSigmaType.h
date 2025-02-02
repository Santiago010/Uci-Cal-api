/** @file DateTimeSigmaType.h
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

#ifndef ASB_UCI_TYPE_DATETIMESIGMATYPE_H
#define ASB_UCI_TYPE_DATETIMESIGMATYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/type/DateTimeType.h"
#include "../../../include/asb_uci/type/DurationType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DateTimeSigmaType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/** See annotations in child elements and messages/elements that use this type for details. */
class DateTimeSigmaType : public virtual uci::type::DateTimeSigmaType {
public:
  /** The constructor */
  DateTimeSigmaType();

  /** The copy constructor
    *
    * @param rhs The DateTimeSigmaType to copy from
    */
  DateTimeSigmaType(const DateTimeSigmaType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The DateTimeSigmaType to move from
    */
  DateTimeSigmaType(DateTimeSigmaType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The DateTimeSigmaType to copy from
    * @return The DateTimeSigmaType that was assigned
    */
  DateTimeSigmaType& operator=(const DateTimeSigmaType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The DateTimeSigmaType to move from
    * @return The DateTimeSigmaType that was assigned
    */
  DateTimeSigmaType& operator=(DateTimeSigmaType&& rhs) = delete;

  /** The destructor */
  virtual ~DateTimeSigmaType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::DateTimeSigmaType whose contents are to be used to set this
    *      uci::type::DateTimeSigmaType's contents.
    */
  void copy(const uci::type::DateTimeSigmaType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::DateTimeSigmaType whose contents are to be used to set this
    *      uci::type::DateTimeSigmaType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::DateTimeSigmaType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the contents of the message's DateTime field
    *
    * @return The contents of the DateTime field
    */
  uci::type::DateTimeTypeValue getDateTime() const override;

  /** Sets the contents of the message's DateTime field
    *
    * @param value The new value to set the DateTime field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::DateTimeSigmaType& setDateTime(uci::type::DateTimeTypeValue value) override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::DurationTypeValue getDateTimeSigma() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::DateTimeSigmaType& setDateTimeSigma(uci::type::DurationTypeValue value) override;

  /** Returns whether this optional field DateTimeSigmais available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasDateTimeSigma() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::DateTimeSigmaType& clearDateTimeSigma() noexcept override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<DateTimeSigmaType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::DateTimeSigmaType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::DateTimeSigmaType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  DateTimeTypeValue dateTime_Accessor{0};
  boost::optional<DurationTypeValue> dateTimeSigma_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_DATETIMESIGMATYPE_H
