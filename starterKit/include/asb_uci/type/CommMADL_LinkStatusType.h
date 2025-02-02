/** @file CommMADL_LinkStatusType.h
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

#ifndef ASB_UCI_TYPE_COMMMADL_LINKSTATUSTYPE_H
#define ASB_UCI_TYPE_COMMMADL_LINKSTATUSTYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/base/BoundedList.h"
#include "../../../include/asb_uci/type/CommMADL_DataRateTypeEnum.h"
#include "../../../include/asb_uci/type/CommMADL_LinkStateEnum.h"
#include "../../../include/asb_uci/type/CommMADL_SearchTypeEnum.h"
#include "../../../include/asb_uci/type/CommMADL_TimeSlotOE_PhaseTypeEnum.h"
#include "../../../include/asb_uci/type/CommMADL_TimeSlotTxPhaseTypeEnum.h"
#include "../../../include/asb_uci/type/CommMADL_VoiceRxIndicatorTypeEnum.h"
#include "../../../include/asb_xs/type/simpleXmlSchemaPrimitives.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CommMADL_LinkStatusType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class CommMADL_PeerNodeDataType;
class CommMADL_TopologyEntryType;

/** See annotations in child elements and messages/elements that use this type for details. */
class CommMADL_LinkStatusType : public virtual uci::type::CommMADL_LinkStatusType {
public:
  /** If link connected, information on the network topology in this direction. This data is likely limited to verbose
    * Activity report. Size is based on allowed number of unique values for MemberNodeIdentifier. [Occurrences: Minimum: 0;
    * Maximum: 64]
    */
  using MemberTopology = asb_uci::base::BoundedList<uci::type::CommMADL_TopologyEntryType, uci::type::accessorType::commMADL_TopologyEntryType, asb_uci::type::CommMADL_TopologyEntryType>;

  /** The constructor */
  CommMADL_LinkStatusType();

  /** The copy constructor
    *
    * @param rhs The CommMADL_LinkStatusType to copy from
    */
  CommMADL_LinkStatusType(const CommMADL_LinkStatusType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The CommMADL_LinkStatusType to move from
    */
  CommMADL_LinkStatusType(CommMADL_LinkStatusType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The CommMADL_LinkStatusType to copy from
    * @return The CommMADL_LinkStatusType that was assigned
    */
  CommMADL_LinkStatusType& operator=(const CommMADL_LinkStatusType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The CommMADL_LinkStatusType to move from
    * @return The CommMADL_LinkStatusType that was assigned
    */
  CommMADL_LinkStatusType& operator=(CommMADL_LinkStatusType&& rhs) = delete;

  /** The destructor */
  virtual ~CommMADL_LinkStatusType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::CommMADL_LinkStatusType whose contents are to be used to set this
    *      uci::type::CommMADL_LinkStatusType's contents.
    */
  void copy(const uci::type::CommMADL_LinkStatusType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::CommMADL_LinkStatusType whose contents are to be used to set this
    *      uci::type::CommMADL_LinkStatusType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::CommMADL_LinkStatusType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the contents of the message's LinkState field
    *
    * @return The contents of the LinkState field
    */
  const uci::type::CommMADL_LinkStateEnum& getLinkState() const override;

  /** Returns the contents of the message's LinkState field
    *
    * @return The contents of the LinkState field
    */
  uci::type::CommMADL_LinkStateEnum& getLinkState() override;

  /** Sets the contents of the message's LinkState field
    *
    * @param accessor The accessor to use to set the LinkState field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommMADL_LinkStatusType& setLinkState(const uci::type::CommMADL_LinkStateEnum& accessor) override;

  /** Sets the contents of the message's LinkState field
    *
    * @param value The new value to set the LinkState field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommMADL_LinkStatusType& setLinkState(uci::type::CommMADL_LinkStateEnum::EnumerationItem value) override;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::CommMADL_DataRateTypeEnum& getReceivedDataRate_() const;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::CommMADL_DataRateTypeEnum& getReceivedDataRate() const override;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::CommMADL_DataRateTypeEnum& getReceivedDataRate() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommMADL_LinkStatusType& setReceivedDataRate(const uci::type::CommMADL_DataRateTypeEnum& accessor) override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param value The accessor to use to set the contents of the message fragment that this accessor provides access to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommMADL_LinkStatusType& setReceivedDataRate(uci::type::CommMADL_DataRateTypeEnum::EnumerationItem value) override;

  /** Returns whether this optional field ReceivedDataRateis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasReceivedDataRate() const noexcept override;

  /** Enables the optional field such that getReceivedDataRate will return the optional field and not throw an exception
    * when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::CommMADL_DataRateTypeEnum& enableReceivedDataRate(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommMADL_LinkStatusType& clearReceivedDataRate() noexcept override;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::CommMADL_DataRateTypeEnum& getActualTxDataRate_() const;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::CommMADL_DataRateTypeEnum& getActualTxDataRate() const override;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::CommMADL_DataRateTypeEnum& getActualTxDataRate() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommMADL_LinkStatusType& setActualTxDataRate(const uci::type::CommMADL_DataRateTypeEnum& accessor) override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param value The accessor to use to set the contents of the message fragment that this accessor provides access to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommMADL_LinkStatusType& setActualTxDataRate(uci::type::CommMADL_DataRateTypeEnum::EnumerationItem value) override;

  /** Returns whether this optional field ActualTxDataRateis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasActualTxDataRate() const noexcept override;

  /** Enables the optional field such that getActualTxDataRate will return the optional field and not throw an exception
    * when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::CommMADL_DataRateTypeEnum& enableActualTxDataRate(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommMADL_LinkStatusType& clearActualTxDataRate() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  xs::Boolean getHigherDataRateCapable() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommMADL_LinkStatusType& setHigherDataRateCapable(xs::Boolean value) override;

  /** Returns whether this optional field HigherDataRateCapableis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasHigherDataRateCapable() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommMADL_LinkStatusType& clearHigherDataRateCapable() noexcept override;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::CommMADL_VoiceRxIndicatorTypeEnum& getVoiceReceiptIndicator_() const;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::CommMADL_VoiceRxIndicatorTypeEnum& getVoiceReceiptIndicator() const override;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::CommMADL_VoiceRxIndicatorTypeEnum& getVoiceReceiptIndicator() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommMADL_LinkStatusType& setVoiceReceiptIndicator(const uci::type::CommMADL_VoiceRxIndicatorTypeEnum& accessor) override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param value The accessor to use to set the contents of the message fragment that this accessor provides access to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommMADL_LinkStatusType& setVoiceReceiptIndicator(uci::type::CommMADL_VoiceRxIndicatorTypeEnum::EnumerationItem value) override;

  /** Returns whether this optional field VoiceReceiptIndicatoris available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasVoiceReceiptIndicator() const noexcept override;

  /** Enables the optional field such that getVoiceReceiptIndicator will return the optional field and not throw an
    * exception when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::CommMADL_VoiceRxIndicatorTypeEnum& enableVoiceReceiptIndicator(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommMADL_LinkStatusType& clearVoiceReceiptIndicator() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  xs::UnsignedShort getVoiceSource() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommMADL_LinkStatusType& setVoiceSource(xs::UnsignedShort value) override;

  /** Returns whether this optional field VoiceSourceis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasVoiceSource() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommMADL_LinkStatusType& clearVoiceSource() noexcept override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::CommMADL_PeerNodeDataType& getPeerNodeData_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::CommMADL_PeerNodeDataType& getPeerNodeData() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::CommMADL_PeerNodeDataType& getPeerNodeData() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommMADL_LinkStatusType& setPeerNodeData(const uci::type::CommMADL_PeerNodeDataType& accessor) override;

  /** Returns whether this optional field PeerNodeDatais available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasPeerNodeData() const noexcept override;

  /** Enables the optional field such that getPeerNodeData will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::CommMADL_PeerNodeDataType& enablePeerNodeData(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommMADL_LinkStatusType& clearPeerNodeData() noexcept override;

  /** Returns the accessor to the MemberTopology field contained in this message fragment
    *
    * @return The const reference to the accessor to the MemberTopology field.
    */
  const uci::type::CommMADL_LinkStatusType::MemberTopology& getMemberTopology() const override;

  /** Returns the accessor to the MemberTopology field contained in this message fragment
    *
    * @return The reference to the accessor to the MemberTopology field.
    */
  uci::type::CommMADL_LinkStatusType::MemberTopology& getMemberTopology() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommMADL_LinkStatusType& setMemberTopology(const uci::type::CommMADL_LinkStatusType::MemberTopology& accessor) override;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::CommMADL_SearchTypeEnum& getSearchPattern_() const;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::CommMADL_SearchTypeEnum& getSearchPattern() const override;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::CommMADL_SearchTypeEnum& getSearchPattern() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommMADL_LinkStatusType& setSearchPattern(const uci::type::CommMADL_SearchTypeEnum& accessor) override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param value The accessor to use to set the contents of the message fragment that this accessor provides access to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommMADL_LinkStatusType& setSearchPattern(uci::type::CommMADL_SearchTypeEnum::EnumerationItem value) override;

  /** Returns whether this optional field SearchPatternis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasSearchPattern() const noexcept override;

  /** Enables the optional field such that getSearchPattern will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::CommMADL_SearchTypeEnum& enableSearchPattern(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommMADL_LinkStatusType& clearSearchPattern() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  xs::Boolean getSearchVector() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommMADL_LinkStatusType& setSearchVector(xs::Boolean value) override;

  /** Returns whether this optional field SearchVectoris available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasSearchVector() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommMADL_LinkStatusType& clearSearchVector() noexcept override;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::CommMADL_TimeSlotOE_PhaseTypeEnum& getEvenOddPhase_() const;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::CommMADL_TimeSlotOE_PhaseTypeEnum& getEvenOddPhase() const override;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::CommMADL_TimeSlotOE_PhaseTypeEnum& getEvenOddPhase() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommMADL_LinkStatusType& setEvenOddPhase(const uci::type::CommMADL_TimeSlotOE_PhaseTypeEnum& accessor) override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param value The accessor to use to set the contents of the message fragment that this accessor provides access to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommMADL_LinkStatusType& setEvenOddPhase(uci::type::CommMADL_TimeSlotOE_PhaseTypeEnum::EnumerationItem value) override;

  /** Returns whether this optional field EvenOddPhaseis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasEvenOddPhase() const noexcept override;

  /** Enables the optional field such that getEvenOddPhase will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::CommMADL_TimeSlotOE_PhaseTypeEnum& enableEvenOddPhase(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommMADL_LinkStatusType& clearEvenOddPhase() noexcept override;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::CommMADL_TimeSlotTxPhaseTypeEnum& getEarlyLatePhase_() const;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::CommMADL_TimeSlotTxPhaseTypeEnum& getEarlyLatePhase() const override;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::CommMADL_TimeSlotTxPhaseTypeEnum& getEarlyLatePhase() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommMADL_LinkStatusType& setEarlyLatePhase(const uci::type::CommMADL_TimeSlotTxPhaseTypeEnum& accessor) override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param value The accessor to use to set the contents of the message fragment that this accessor provides access to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommMADL_LinkStatusType& setEarlyLatePhase(uci::type::CommMADL_TimeSlotTxPhaseTypeEnum::EnumerationItem value) override;

  /** Returns whether this optional field EarlyLatePhaseis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasEarlyLatePhase() const noexcept override;

  /** Enables the optional field such that getEarlyLatePhase will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::CommMADL_TimeSlotTxPhaseTypeEnum& enableEarlyLatePhase(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommMADL_LinkStatusType& clearEarlyLatePhase() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  xs::UnsignedShort getHopOffset() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommMADL_LinkStatusType& setHopOffset(xs::UnsignedShort value) override;

  /** Returns whether this optional field HopOffsetis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasHopOffset() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommMADL_LinkStatusType& clearHopOffset() noexcept override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<CommMADL_LinkStatusType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::CommMADL_LinkStatusType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::CommMADL_LinkStatusType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<CommMADL_LinkStateEnum> linkState_Accessor;
  std::unique_ptr<CommMADL_DataRateTypeEnum> receivedDataRate_Accessor;
  std::unique_ptr<CommMADL_DataRateTypeEnum> actualTxDataRate_Accessor;
  boost::optional<asb_xs::Boolean> higherDataRateCapable_Accessor;
  std::unique_ptr<CommMADL_VoiceRxIndicatorTypeEnum> voiceReceiptIndicator_Accessor;
  boost::optional<asb_xs::UnsignedShort> voiceSource_Accessor;
  std::unique_ptr<CommMADL_PeerNodeDataType> peerNodeData_Accessor;
  std::unique_ptr<MemberTopology> memberTopology_Accessor;
  std::unique_ptr<CommMADL_SearchTypeEnum> searchPattern_Accessor;
  boost::optional<asb_xs::Boolean> searchVector_Accessor;
  std::unique_ptr<CommMADL_TimeSlotOE_PhaseTypeEnum> evenOddPhase_Accessor;
  std::unique_ptr<CommMADL_TimeSlotTxPhaseTypeEnum> earlyLatePhase_Accessor;
  boost::optional<asb_xs::UnsignedShort> hopOffset_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_COMMMADL_LINKSTATUSTYPE_H
