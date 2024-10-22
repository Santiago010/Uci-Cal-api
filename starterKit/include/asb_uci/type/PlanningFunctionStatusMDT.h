/** @file PlanningFunctionStatusMDT.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:14 PM
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

#ifndef ASB_UCI_TYPE_PLANNINGFUNCTIONSTATUSMDT_H
#define ASB_UCI_TYPE_PLANNINGFUNCTIONSTATUSMDT_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/base/BoundedList.h"
#include "../../../include/asb_xs/type/simpleXmlSchemaPrimitives.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PlanningFunctionStatusMDT.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class ContingencyPathAutonomyType;
class MissionPlanningAutonomySettingType;
class PlanActivationAutonomyType;
class PlanningInterfaceType;
class SystemID_Type;

/** See the annotation in the associated message for an overall description of the message and this type. */
class PlanningFunctionStatusMDT : public virtual uci::type::PlanningFunctionStatusMDT {
public:
  /** Indicates a currently enabled planning interface of the System. If multiple instances of this element are given, each
    * should be of a different type of *Plan as enumerated by the child PlanType element. [Occurrences: Minimum: 0;
    * Maximum: 10]
    */
  using PlanningInterface = asb_uci::base::BoundedList<uci::type::PlanningInterfaceType, uci::type::accessorType::planningInterfaceType, asb_uci::type::PlanningInterfaceType>;

  /** Indicates currently enabled autonomous mission planning capabilities of the System. [Occurrences: Minimum: 0;
    * Maximum: MAX_LENGTH]
    */
  using MissionPlanningAutonomy = asb_uci::base::BoundedList<uci::type::MissionPlanningAutonomySettingType, uci::type::accessorType::missionPlanningAutonomySettingType, asb_uci::type::MissionPlanningAutonomySettingType>;

  /** Indicates current route planning settings for the autonomous generation of contingency paths along the primary path.
    * If multiple instances are given, each must be of a different path type as indicated by the child element.
    * [Occurrences: Minimum: 0; Maximum: 12]
    */
  using RoutePlanningContingencyPath = asb_uci::base::BoundedList<uci::type::ContingencyPathAutonomyType, uci::type::accessorType::contingencyPathAutonomyType, asb_uci::type::ContingencyPathAutonomyType>;

  /** The constructor */
  PlanningFunctionStatusMDT();

  /** The copy constructor
    *
    * @param rhs The PlanningFunctionStatusMDT to copy from
    */
  PlanningFunctionStatusMDT(const PlanningFunctionStatusMDT& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The PlanningFunctionStatusMDT to move from
    */
  PlanningFunctionStatusMDT(PlanningFunctionStatusMDT&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The PlanningFunctionStatusMDT to copy from
    * @return The PlanningFunctionStatusMDT that was assigned
    */
  PlanningFunctionStatusMDT& operator=(const PlanningFunctionStatusMDT& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The PlanningFunctionStatusMDT to move from
    * @return The PlanningFunctionStatusMDT that was assigned
    */
  PlanningFunctionStatusMDT& operator=(PlanningFunctionStatusMDT&& rhs) = delete;

  /** The destructor */
  virtual ~PlanningFunctionStatusMDT();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::PlanningFunctionStatusMDT whose contents are to be used to set this
    *      uci::type::PlanningFunctionStatusMDT's contents.
    */
  void copy(const uci::type::PlanningFunctionStatusMDT& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::PlanningFunctionStatusMDT whose contents are to be used to set this
    *      uci::type::PlanningFunctionStatusMDT's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::PlanningFunctionStatusMDT& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the accessor to the SystemID field contained in this message fragment
    *
    * @return The const reference to the accessor to the SystemID field.
    */
  const uci::type::SystemID_Type& getSystemID() const override;

  /** Returns the accessor to the SystemID field contained in this message fragment
    *
    * @return The reference to the accessor to the SystemID field.
    */
  uci::type::SystemID_Type& getSystemID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::PlanningFunctionStatusMDT& setSystemID(const uci::type::SystemID_Type& accessor) override;

  /** Returns the contents of the message's TransitionDroppedToFailed field
    *
    * @return The contents of the TransitionDroppedToFailed field
    */
  xs::Boolean getTransitionDroppedToFailed() const override;

  /** Sets the contents of the message's TransitionDroppedToFailed field
    *
    * @param value The new value to set the TransitionDroppedToFailed field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::PlanningFunctionStatusMDT& setTransitionDroppedToFailed(xs::Boolean value) override;

  /** Returns the accessor to the PlanningInterface field contained in this message fragment
    *
    * @return The const reference to the accessor to the PlanningInterface field.
    */
  const uci::type::PlanningFunctionStatusMDT::PlanningInterface& getPlanningInterface() const override;

  /** Returns the accessor to the PlanningInterface field contained in this message fragment
    *
    * @return The reference to the accessor to the PlanningInterface field.
    */
  uci::type::PlanningFunctionStatusMDT::PlanningInterface& getPlanningInterface() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::PlanningFunctionStatusMDT& setPlanningInterface(const uci::type::PlanningFunctionStatusMDT::PlanningInterface& accessor) override;

  /** Returns the accessor to the MissionPlanningAutonomy field contained in this message fragment
    *
    * @return The const reference to the accessor to the MissionPlanningAutonomy field.
    */
  const uci::type::PlanningFunctionStatusMDT::MissionPlanningAutonomy& getMissionPlanningAutonomy() const override;

  /** Returns the accessor to the MissionPlanningAutonomy field contained in this message fragment
    *
    * @return The reference to the accessor to the MissionPlanningAutonomy field.
    */
  uci::type::PlanningFunctionStatusMDT::MissionPlanningAutonomy& getMissionPlanningAutonomy() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::PlanningFunctionStatusMDT& setMissionPlanningAutonomy(const uci::type::PlanningFunctionStatusMDT::MissionPlanningAutonomy& accessor) override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::PlanActivationAutonomyType& getPlanActivationAutonomy_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::PlanActivationAutonomyType& getPlanActivationAutonomy() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::PlanActivationAutonomyType& getPlanActivationAutonomy() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::PlanningFunctionStatusMDT& setPlanActivationAutonomy(const uci::type::PlanActivationAutonomyType& accessor) override;

  /** Returns whether this optional field PlanActivationAutonomyis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasPlanActivationAutonomy() const noexcept override;

  /** Enables the optional field such that getPlanActivationAutonomy will return the optional field and not throw an
    * exception when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::PlanActivationAutonomyType& enablePlanActivationAutonomy(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::PlanningFunctionStatusMDT& clearPlanActivationAutonomy() noexcept override;

  /** Returns the accessor to the RoutePlanningContingencyPath field contained in this message fragment
    *
    * @return The const reference to the accessor to the RoutePlanningContingencyPath field.
    */
  const uci::type::PlanningFunctionStatusMDT::RoutePlanningContingencyPath& getRoutePlanningContingencyPath() const override;

  /** Returns the accessor to the RoutePlanningContingencyPath field contained in this message fragment
    *
    * @return The reference to the accessor to the RoutePlanningContingencyPath field.
    */
  uci::type::PlanningFunctionStatusMDT::RoutePlanningContingencyPath& getRoutePlanningContingencyPath() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::PlanningFunctionStatusMDT& setRoutePlanningContingencyPath(const uci::type::PlanningFunctionStatusMDT::RoutePlanningContingencyPath& accessor) override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<PlanningFunctionStatusMDT> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::PlanningFunctionStatusMDT& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::PlanningFunctionStatusMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<SystemID_Type> systemID_Accessor;
  asb_xs::Boolean transitionDroppedToFailed_Accessor{false};
  std::unique_ptr<PlanningInterface> planningInterface_Accessor;
  std::unique_ptr<MissionPlanningAutonomy> missionPlanningAutonomy_Accessor;
  std::unique_ptr<PlanActivationAutonomyType> planActivationAutonomy_Accessor;
  std::unique_ptr<RoutePlanningContingencyPath> routePlanningContingencyPath_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_PLANNINGFUNCTIONSTATUSMDT_H
