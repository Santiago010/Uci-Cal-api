/** @file IFF_ModeControlType.h
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

#ifndef ASB_UCI_TYPE_IFF_MODECONTROLTYPE_H
#define ASB_UCI_TYPE_IFF_MODECONTROLTYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/base/BoundedList.h"
#include "../../../include/asb_xs/type/simpleXmlSchemaPrimitives.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/IFF_ModeControlType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class IFF_SimultaneousSelectionType;

/** See annotations in child elements and messages/elements that use this type for details. */
class IFF_ModeControlType : public virtual uci::type::IFF_ModeControlType {
public:
  /** List of IFF Modes to be operated in sequence. Modes in the list can be requested to be simultaneous if supported by
    * the Capablity. Some modes may not be able to operate in sequence with other modes, for example Mode 5, Format 3
    * should not be selected with any other mode. [Occurrences: Minimum: 1; Maximum: MAX_LENGTH]
    */
  using SequentialModeControl = asb_uci::base::BoundedList<uci::type::IFF_SimultaneousSelectionType, uci::type::accessorType::iFF_SimultaneousSelectionType, asb_uci::type::IFF_SimultaneousSelectionType>;

  /** The constructor */
  IFF_ModeControlType();

  /** The copy constructor
    *
    * @param rhs The IFF_ModeControlType to copy from
    */
  IFF_ModeControlType(const IFF_ModeControlType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The IFF_ModeControlType to move from
    */
  IFF_ModeControlType(IFF_ModeControlType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The IFF_ModeControlType to copy from
    * @return The IFF_ModeControlType that was assigned
    */
  IFF_ModeControlType& operator=(const IFF_ModeControlType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The IFF_ModeControlType to move from
    * @return The IFF_ModeControlType that was assigned
    */
  IFF_ModeControlType& operator=(IFF_ModeControlType&& rhs) = delete;

  /** The destructor */
  virtual ~IFF_ModeControlType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::IFF_ModeControlType whose contents are to be used to set this
    *      uci::type::IFF_ModeControlType's contents.
    */
  void copy(const uci::type::IFF_ModeControlType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::IFF_ModeControlType whose contents are to be used to set this
    *      uci::type::IFF_ModeControlType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::IFF_ModeControlType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the contents of the message's ContinuousRepetition field
    *
    * @return The contents of the ContinuousRepetition field
    */
  xs::Boolean getContinuousRepetition() const override;

  /** Sets the contents of the message's ContinuousRepetition field
    *
    * @param value The new value to set the ContinuousRepetition field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::IFF_ModeControlType& setContinuousRepetition(xs::Boolean value) override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  xs::Int getSequenceRevisitCount() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::IFF_ModeControlType& setSequenceRevisitCount(xs::Int value) override;

  /** Returns whether this optional field SequenceRevisitCountis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasSequenceRevisitCount() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::IFF_ModeControlType& clearSequenceRevisitCount() noexcept override;

  /** Returns the accessor to the SequentialModeControl field contained in this message fragment
    *
    * @return The const reference to the accessor to the SequentialModeControl field.
    */
  const uci::type::IFF_ModeControlType::SequentialModeControl& getSequentialModeControl() const override;

  /** Returns the accessor to the SequentialModeControl field contained in this message fragment
    *
    * @return The reference to the accessor to the SequentialModeControl field.
    */
  uci::type::IFF_ModeControlType::SequentialModeControl& getSequentialModeControl() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::IFF_ModeControlType& setSequentialModeControl(const uci::type::IFF_ModeControlType::SequentialModeControl& accessor) override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<IFF_ModeControlType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::IFF_ModeControlType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::IFF_ModeControlType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  asb_xs::Boolean continuousRepetition_Accessor{false};
  boost::optional<asb_xs::Int> sequenceRevisitCount_Accessor;
  std::unique_ptr<SequentialModeControl> sequentialModeControl_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_IFF_MODECONTROLTYPE_H
