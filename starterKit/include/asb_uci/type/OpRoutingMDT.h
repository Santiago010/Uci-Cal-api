/** @file OpRoutingMDT.h
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

#ifndef ASB_UCI_TYPE_OPROUTINGMDT_H
#define ASB_UCI_TYPE_OPROUTINGMDT_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/base/BoundedList.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OpRoutingMDT.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class MissionTraceabilityType;
class OpDescriptionType;
class OpRoutingID_Type;
class ScheduleType;
class SeparationParametersType;
class SpecificBlueSeparationType;
class SpecificRedSeparationType;
class SystemID_Type;
class ZoneType;

/** See annotations in child elements and messages/elements that use this type for details. */
class OpRoutingMDT : public virtual uci::type::OpRoutingMDT {
public:
  /** Defines parameters to use when deconflicting blue player routes or generating routes to ensure proper separation from
    * other blue players. These parameters apply at the vehicle type level. For example, these parameters would be used to
    * define how close a mission planned vehicle could get to an F-16. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH]
    */
  using SpecificBlueSeparation = asb_uci::base::BoundedList<uci::type::SpecificBlueSeparationType, uci::type::accessorType::specificBlueSeparationType, asb_uci::type::SpecificBlueSeparationType>;

  /** Defines parameters to use when deconflicting blue player routes or generating routes to ensure proper separation from
    * other red players. These parameters apply at the vehicle type level. For example, these parameters would be used to
    * define how close a mission planned vehicle could get to an F-16. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH]
    */
  using SpecificRedSeparation = asb_uci::base::BoundedList<uci::type::SpecificRedSeparationType, uci::type::accessorType::specificRedSeparationType, asb_uci::type::SpecificRedSeparationType>;

  /** One or more Systems to which the routing constraints apply. If omitted, the constraints apply to all Systems.
    * [Occurrences: Minimum: 0; Maximum: MAX_LENGTH]
    */
  using SystemID = asb_uci::base::BoundedList<uci::type::SystemID_Type, uci::type::accessorType::systemID_Type, asb_uci::type::SystemID_Type>;

  /** The constructor */
  OpRoutingMDT();

  /** The copy constructor
    *
    * @param rhs The OpRoutingMDT to copy from
    */
  OpRoutingMDT(const OpRoutingMDT& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The OpRoutingMDT to move from
    */
  OpRoutingMDT(OpRoutingMDT&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The OpRoutingMDT to copy from
    * @return The OpRoutingMDT that was assigned
    */
  OpRoutingMDT& operator=(const OpRoutingMDT& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The OpRoutingMDT to move from
    * @return The OpRoutingMDT that was assigned
    */
  OpRoutingMDT& operator=(OpRoutingMDT&& rhs) = delete;

  /** The destructor */
  virtual ~OpRoutingMDT();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::OpRoutingMDT whose contents are to be used to set this uci::type::OpRoutingMDT's
    *      contents.
    */
  void copy(const uci::type::OpRoutingMDT& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::OpRoutingMDT whose contents are to be used to set this uci::type::OpRoutingMDT's
    *      contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::OpRoutingMDT& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the accessor to the OpRoutingID field contained in this message fragment
    *
    * @return The const reference to the accessor to the OpRoutingID field.
    */
  const uci::type::OpRoutingID_Type& getOpRoutingID() const override;

  /** Returns the accessor to the OpRoutingID field contained in this message fragment
    *
    * @return The reference to the accessor to the OpRoutingID field.
    */
  uci::type::OpRoutingID_Type& getOpRoutingID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::OpRoutingMDT& setOpRoutingID(const uci::type::OpRoutingID_Type& accessor) override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::SeparationParametersType& getDefaultBlueSeparation_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::SeparationParametersType& getDefaultBlueSeparation() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::SeparationParametersType& getDefaultBlueSeparation() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::OpRoutingMDT& setDefaultBlueSeparation(const uci::type::SeparationParametersType& accessor) override;

  /** Returns whether this optional field DefaultBlueSeparationis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasDefaultBlueSeparation() const noexcept override;

  /** Enables the optional field such that getDefaultBlueSeparation will return the optional field and not throw an
    * exception when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::SeparationParametersType& enableDefaultBlueSeparation(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::OpRoutingMDT& clearDefaultBlueSeparation() noexcept override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::SeparationParametersType& getDefaultRedSeparation_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::SeparationParametersType& getDefaultRedSeparation() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::SeparationParametersType& getDefaultRedSeparation() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::OpRoutingMDT& setDefaultRedSeparation(const uci::type::SeparationParametersType& accessor) override;

  /** Returns whether this optional field DefaultRedSeparationis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasDefaultRedSeparation() const noexcept override;

  /** Enables the optional field such that getDefaultRedSeparation will return the optional field and not throw an
    * exception when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::SeparationParametersType& enableDefaultRedSeparation(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::OpRoutingMDT& clearDefaultRedSeparation() noexcept override;

  /** Returns the accessor to the SpecificBlueSeparation field contained in this message fragment
    *
    * @return The const reference to the accessor to the SpecificBlueSeparation field.
    */
  const uci::type::OpRoutingMDT::SpecificBlueSeparation& getSpecificBlueSeparation() const override;

  /** Returns the accessor to the SpecificBlueSeparation field contained in this message fragment
    *
    * @return The reference to the accessor to the SpecificBlueSeparation field.
    */
  uci::type::OpRoutingMDT::SpecificBlueSeparation& getSpecificBlueSeparation() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::OpRoutingMDT& setSpecificBlueSeparation(const uci::type::OpRoutingMDT::SpecificBlueSeparation& accessor) override;

  /** Returns the accessor to the SpecificRedSeparation field contained in this message fragment
    *
    * @return The const reference to the accessor to the SpecificRedSeparation field.
    */
  const uci::type::OpRoutingMDT::SpecificRedSeparation& getSpecificRedSeparation() const override;

  /** Returns the accessor to the SpecificRedSeparation field contained in this message fragment
    *
    * @return The reference to the accessor to the SpecificRedSeparation field.
    */
  uci::type::OpRoutingMDT::SpecificRedSeparation& getSpecificRedSeparation() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::OpRoutingMDT& setSpecificRedSeparation(const uci::type::OpRoutingMDT::SpecificRedSeparation& accessor) override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::OpDescriptionType& getOpDescription_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::OpDescriptionType& getOpDescription() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::OpDescriptionType& getOpDescription() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::OpRoutingMDT& setOpDescription(const uci::type::OpDescriptionType& accessor) override;

  /** Returns whether this optional field OpDescriptionis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasOpDescription() const noexcept override;

  /** Enables the optional field such that getOpDescription will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::OpDescriptionType& enableOpDescription(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::OpRoutingMDT& clearOpDescription() noexcept override;

  /** Returns the accessor to the SystemID field contained in this message fragment
    *
    * @return The const reference to the accessor to the SystemID field.
    */
  const uci::type::OpRoutingMDT::SystemID& getSystemID() const override;

  /** Returns the accessor to the SystemID field contained in this message fragment
    *
    * @return The reference to the accessor to the SystemID field.
    */
  uci::type::OpRoutingMDT::SystemID& getSystemID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::OpRoutingMDT& setSystemID(const uci::type::OpRoutingMDT::SystemID& accessor) override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ZoneType& getApplicableZone_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::ZoneType& getApplicableZone() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ZoneType& getApplicableZone() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::OpRoutingMDT& setApplicableZone(const uci::type::ZoneType& accessor) override;

  /** Returns whether this optional field ApplicableZoneis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasApplicableZone() const noexcept override;

  /** Enables the optional field such that getApplicableZone will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ZoneType& enableApplicableZone(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::OpRoutingMDT& clearApplicableZone() noexcept override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ScheduleType& getSchedule_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::ScheduleType& getSchedule() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ScheduleType& getSchedule() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::OpRoutingMDT& setSchedule(const uci::type::ScheduleType& accessor) override;

  /** Returns whether this optional field Scheduleis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasSchedule() const noexcept override;

  /** Enables the optional field such that getSchedule will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ScheduleType& enableSchedule(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::OpRoutingMDT& clearSchedule() noexcept override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::MissionTraceabilityType& getMissionTraceability_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::MissionTraceabilityType& getMissionTraceability() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::MissionTraceabilityType& getMissionTraceability() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::OpRoutingMDT& setMissionTraceability(const uci::type::MissionTraceabilityType& accessor) override;

  /** Returns whether this optional field MissionTraceabilityis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasMissionTraceability() const noexcept override;

  /** Enables the optional field such that getMissionTraceability will return the optional field and not throw an exception
    * when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::MissionTraceabilityType& enableMissionTraceability(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::OpRoutingMDT& clearMissionTraceability() noexcept override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<OpRoutingMDT> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::OpRoutingMDT& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::OpRoutingMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<OpRoutingID_Type> opRoutingID_Accessor;
  std::unique_ptr<SeparationParametersType> defaultBlueSeparation_Accessor;
  std::unique_ptr<SeparationParametersType> defaultRedSeparation_Accessor;
  std::unique_ptr<SpecificBlueSeparation> specificBlueSeparation_Accessor;
  std::unique_ptr<SpecificRedSeparation> specificRedSeparation_Accessor;
  std::unique_ptr<OpDescriptionType> opDescription_Accessor;
  std::unique_ptr<SystemID> systemID_Accessor;
  std::unique_ptr<ZoneType> applicableZone_Accessor;
  std::unique_ptr<ScheduleType> schedule_Accessor;
  std::unique_ptr<MissionTraceabilityType> missionTraceability_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_OPROUTINGMDT_H
