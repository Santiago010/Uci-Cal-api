/** @file CommLink16InitialEntryMessageType.h
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

#ifndef ASB_UCI_TYPE_COMMLINK16INITIALENTRYMESSAGETYPE_H
#define ASB_UCI_TYPE_COMMLINK16INITIALENTRYMESSAGETYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_xs/type/simpleXmlSchemaPrimitives.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CommLink16InitialEntryMessageType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/** Indicates which Time Slot Assignments, defined in the received initial entry messages, are to be used upon passing
  * all current validity checks.
  */
class CommLink16InitialEntryMessageType : public virtual uci::type::CommLink16InitialEntryMessageType {
public:
  /** The constructor */
  CommLink16InitialEntryMessageType();

  /** The copy constructor
    *
    * @param rhs The CommLink16InitialEntryMessageType to copy from
    */
  CommLink16InitialEntryMessageType(const CommLink16InitialEntryMessageType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The CommLink16InitialEntryMessageType to move from
    */
  CommLink16InitialEntryMessageType(CommLink16InitialEntryMessageType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The CommLink16InitialEntryMessageType to copy from
    * @return The CommLink16InitialEntryMessageType that was assigned
    */
  CommLink16InitialEntryMessageType& operator=(const CommLink16InitialEntryMessageType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The CommLink16InitialEntryMessageType to move from
    * @return The CommLink16InitialEntryMessageType that was assigned
    */
  CommLink16InitialEntryMessageType& operator=(CommLink16InitialEntryMessageType&& rhs) = delete;

  /** The destructor */
  virtual ~CommLink16InitialEntryMessageType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::CommLink16InitialEntryMessageType whose contents are to be used to set this
    *      uci::type::CommLink16InitialEntryMessageType's contents.
    */
  void copy(const uci::type::CommLink16InitialEntryMessageType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::CommLink16InitialEntryMessageType whose contents are to be used to set this
    *      uci::type::CommLink16InitialEntryMessageType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::CommLink16InitialEntryMessageType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  xs::Boolean getControlTimeSlotInhibit() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommLink16InitialEntryMessageType& setControlTimeSlotInhibit(xs::Boolean value) override;

  /** Returns whether this optional field ControlTimeSlotInhibitis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasControlTimeSlotInhibit() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommLink16InitialEntryMessageType& clearControlTimeSlotInhibit() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  xs::Boolean getPPLIA_TimeSlotInhibit() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommLink16InitialEntryMessageType& setPPLIA_TimeSlotInhibit(xs::Boolean value) override;

  /** Returns whether this optional field PPLIA_TimeSlotInhibitis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasPPLIA_TimeSlotInhibit() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommLink16InitialEntryMessageType& clearPPLIA_TimeSlotInhibit() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  xs::Boolean getPPLIB_TimeSlotInhibit() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommLink16InitialEntryMessageType& setPPLIB_TimeSlotInhibit(xs::Boolean value) override;

  /** Returns whether this optional field PPLIB_TimeSlotInhibitis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasPPLIB_TimeSlotInhibit() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommLink16InitialEntryMessageType& clearPPLIB_TimeSlotInhibit() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  xs::Boolean getRTTB_TimeSlotInhibit() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommLink16InitialEntryMessageType& setRTTB_TimeSlotInhibit(xs::Boolean value) override;

  /** Returns whether this optional field RTTB_TimeSlotInhibitis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasRTTB_TimeSlotInhibit() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommLink16InitialEntryMessageType& clearRTTB_TimeSlotInhibit() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  xs::Boolean getVoiceA_TimeSlotInhibit() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommLink16InitialEntryMessageType& setVoiceA_TimeSlotInhibit(xs::Boolean value) override;

  /** Returns whether this optional field VoiceA_TimeSlotInhibitis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasVoiceA_TimeSlotInhibit() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommLink16InitialEntryMessageType& clearVoiceA_TimeSlotInhibit() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  xs::Boolean getVoiceBTimeSlotInhibit() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommLink16InitialEntryMessageType& setVoiceBTimeSlotInhibit(xs::Boolean value) override;

  /** Returns whether this optional field VoiceBTimeSlotInhibitis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasVoiceBTimeSlotInhibit() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommLink16InitialEntryMessageType& clearVoiceBTimeSlotInhibit() noexcept override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<CommLink16InitialEntryMessageType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::CommLink16InitialEntryMessageType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::CommLink16InitialEntryMessageType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  boost::optional<asb_xs::Boolean> controlTimeSlotInhibit_Accessor;
  boost::optional<asb_xs::Boolean> pPLIA_TimeSlotInhibit_Accessor;
  boost::optional<asb_xs::Boolean> pPLIB_TimeSlotInhibit_Accessor;
  boost::optional<asb_xs::Boolean> rTTB_TimeSlotInhibit_Accessor;
  boost::optional<asb_xs::Boolean> voiceA_TimeSlotInhibit_Accessor;
  boost::optional<asb_xs::Boolean> voiceBTimeSlotInhibit_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_COMMLINK16INITIALENTRYMESSAGETYPE_H
