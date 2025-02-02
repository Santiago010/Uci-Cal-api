/** @file CommMADL_CommWaveformActivityType.h
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

#ifndef ASB_UCI_TYPE_COMMMADL_COMMWAVEFORMACTIVITYTYPE_H
#define ASB_UCI_TYPE_COMMMADL_COMMWAVEFORMACTIVITYTYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/type/CommMADL_AircraftTypeEnum.h"
#include "../../../include/asb_uci/type/CommMADL_NetChangeStatusEnum.h"
#include "../../../include/asb_uci/type/CommWaveformActivityPET.h"
#include "../../../include/asb_uci/type/DayOfYearType.h"
#include "../../../include/asb_xs/type/simpleXmlSchemaPrimitives.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CommMADL_CommWaveformActivityType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class CommMADL_ControlType;
class CommMADL_LinkStatusListType;

/** This is a polymorphic extension which allows for the extension of the base CommWaveformActivityPET for communication
  * MADL parameters.
  */
class CommMADL_CommWaveformActivityType : public virtual uci::type::CommMADL_CommWaveformActivityType, public virtual CommWaveformActivityPET {
public:
  /** The constructor */
  CommMADL_CommWaveformActivityType();

  /** The copy constructor
    *
    * @param rhs The CommMADL_CommWaveformActivityType to copy from
    */
  CommMADL_CommWaveformActivityType(const CommMADL_CommWaveformActivityType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The CommMADL_CommWaveformActivityType to move from
    */
  CommMADL_CommWaveformActivityType(CommMADL_CommWaveformActivityType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The CommMADL_CommWaveformActivityType to copy from
    * @return The CommMADL_CommWaveformActivityType that was assigned
    */
  CommMADL_CommWaveformActivityType& operator=(const CommMADL_CommWaveformActivityType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The CommMADL_CommWaveformActivityType to move from
    * @return The CommMADL_CommWaveformActivityType that was assigned
    */
  CommMADL_CommWaveformActivityType& operator=(CommMADL_CommWaveformActivityType&& rhs) = delete;

  /** The destructor */
  ~CommMADL_CommWaveformActivityType() override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::CommMADL_CommWaveformActivityType whose contents are to be used to set this
    *      uci::type::CommMADL_CommWaveformActivityType's contents.
    */
  void copy(const uci::type::CommMADL_CommWaveformActivityType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::CommMADL_CommWaveformActivityType whose contents are to be used to set this
    *      uci::type::CommMADL_CommWaveformActivityType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::CommMADL_CommWaveformActivityType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the accessor to the SettingsStatus field contained in this message fragment
    *
    * @return The const reference to the accessor to the SettingsStatus field.
    */
  const uci::type::CommMADL_ControlType& getSettingsStatus() const override;

  /** Returns the accessor to the SettingsStatus field contained in this message fragment
    *
    * @return The reference to the accessor to the SettingsStatus field.
    */
  uci::type::CommMADL_ControlType& getSettingsStatus() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommMADL_CommWaveformActivityType& setSettingsStatus(const uci::type::CommMADL_ControlType& accessor) override;

  /** Returns the contents of the message's MADL_UniqueIdentifier field
    *
    * @return The contents of the MADL_UniqueIdentifier field
    */
  xs::UnsignedShort getMADL_UniqueIdentifier() const override;

  /** Sets the contents of the message's MADL_UniqueIdentifier field
    *
    * @param value The new value to set the MADL_UniqueIdentifier field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommMADL_CommWaveformActivityType& setMADL_UniqueIdentifier(xs::UnsignedShort value) override;

  /** Returns the contents of the message's AircraftType field
    *
    * @return The contents of the AircraftType field
    */
  const uci::type::CommMADL_AircraftTypeEnum& getAircraftType() const override;

  /** Returns the contents of the message's AircraftType field
    *
    * @return The contents of the AircraftType field
    */
  uci::type::CommMADL_AircraftTypeEnum& getAircraftType() override;

  /** Sets the contents of the message's AircraftType field
    *
    * @param accessor The accessor to use to set the AircraftType field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommMADL_CommWaveformActivityType& setAircraftType(const uci::type::CommMADL_AircraftTypeEnum& accessor) override;

  /** Sets the contents of the message's AircraftType field
    *
    * @param value The new value to set the AircraftType field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommMADL_CommWaveformActivityType& setAircraftType(uci::type::CommMADL_AircraftTypeEnum::EnumerationItem value) override;

  /** Returns the contents of the message's MADL_DayOfYearApplied field
    *
    * @return The contents of the MADL_DayOfYearApplied field
    */
  uci::type::DayOfYearTypeValue getMADL_DayOfYearApplied() const override;

  /** Sets the contents of the message's MADL_DayOfYearApplied field
    *
    * @param value The new value to set the MADL_DayOfYearApplied field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommMADL_CommWaveformActivityType& setMADL_DayOfYearApplied(uci::type::DayOfYearTypeValue value) override;

  /** Returns the contents of the message's VoiceCapable field
    *
    * @return The contents of the VoiceCapable field
    */
  xs::Boolean getVoiceCapable() const override;

  /** Sets the contents of the message's VoiceCapable field
    *
    * @param value The new value to set the VoiceCapable field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommMADL_CommWaveformActivityType& setVoiceCapable(xs::Boolean value) override;

  /** Returns the accessor to the LinkStatus field contained in this message fragment
    *
    * @return The const reference to the accessor to the LinkStatus field.
    */
  const uci::type::CommMADL_LinkStatusListType& getLinkStatus() const override;

  /** Returns the accessor to the LinkStatus field contained in this message fragment
    *
    * @return The reference to the accessor to the LinkStatus field.
    */
  uci::type::CommMADL_LinkStatusListType& getLinkStatus() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommMADL_CommWaveformActivityType& setLinkStatus(const uci::type::CommMADL_LinkStatusListType& accessor) override;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::CommMADL_NetChangeStatusEnum& getNetChangeStatus_() const;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::CommMADL_NetChangeStatusEnum& getNetChangeStatus() const override;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::CommMADL_NetChangeStatusEnum& getNetChangeStatus() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommMADL_CommWaveformActivityType& setNetChangeStatus(const uci::type::CommMADL_NetChangeStatusEnum& accessor) override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param value The accessor to use to set the contents of the message fragment that this accessor provides access to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommMADL_CommWaveformActivityType& setNetChangeStatus(uci::type::CommMADL_NetChangeStatusEnum::EnumerationItem value) override;

  /** Returns whether this optional field NetChangeStatusis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasNetChangeStatus() const noexcept override;

  /** Enables the optional field such that getNetChangeStatus will return the optional field and not throw an exception
    * when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::CommMADL_NetChangeStatusEnum& enableNetChangeStatus(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommMADL_CommWaveformActivityType& clearNetChangeStatus() noexcept override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<CommMADL_CommWaveformActivityType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::CommMADL_CommWaveformActivityType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::CommMADL_CommWaveformActivityType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<CommMADL_ControlType> settingsStatus_Accessor;
  asb_xs::UnsignedShort mADL_UniqueIdentifier_Accessor{0};
  std::unique_ptr<CommMADL_AircraftTypeEnum> aircraftType_Accessor;
  DayOfYearTypeValue mADL_DayOfYearApplied_Accessor{0};
  asb_xs::Boolean voiceCapable_Accessor{false};
  std::unique_ptr<CommMADL_LinkStatusListType> linkStatus_Accessor;
  std::unique_ptr<CommMADL_NetChangeStatusEnum> netChangeStatus_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_COMMMADL_COMMWAVEFORMACTIVITYTYPE_H
