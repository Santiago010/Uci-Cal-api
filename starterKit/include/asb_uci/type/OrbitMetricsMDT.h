/** @file OrbitMetricsMDT.h
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

#ifndef ASB_UCI_TYPE_ORBITMETRICSMDT_H
#define ASB_UCI_TYPE_ORBITMETRICSMDT_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/base/BoundedList.h"
#include "../../../include/asb_uci/type/ActivityPlanPartsEnum.h"
#include "../../../include/asb_uci/type/OrbitPlanPartsEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OrbitMetricsMDT.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class OrbitActivityMetricsType;
class OrbitActivityPlanID_Type;
class OrbitManeuverSegmentMetricsType;
class OrbitManeuverSequenceMetricsType;
class OrbitMetricsID_Type;
class OrbitPlanID_Type;
class SatelliteEnduranceType;

/** See annotations in child elements and messages/elements that use this type for details. */
class OrbitMetricsMDT : public virtual uci::type::OrbitMetricsMDT {
public:
  /** Indicates which part or parts of the OrbitPlan indicated by the sibling OrbitPlanID were included in the metrics
    * analysis summarized in this message. If omitted, all parts were analyzed. List size for this element is based on
    * "Select All That Apply" condition. [Occurrences: Minimum: 0; Maximum: 6]
    */
  using OrbitParts = asb_uci::base::BoundedList<uci::type::OrbitPlanPartsEnum, uci::type::accessorType::orbitPlanPartsEnum, asb_uci::type::OrbitPlanPartsEnum>;

  /** Indicates an OrbitActivityPlan whose metrics are given by the sibling elements. [Occurrences: Minimum: 0; Maximum:
    * MAX_LENGTH]
    */
  using OrbitActivityPlanID = asb_uci::base::BoundedList<uci::type::OrbitActivityPlanID_Type, uci::type::accessorType::orbitActivityPlanID_Type, asb_uci::type::OrbitActivityPlanID_Type>;

  /** Indicates which part or parts of the OrbitActivityPlan indicated by the sibling OrbitActivityPlanID were included in
    * the metrics analysis summarized in this message. If omitted, all parts were analyzed. List size for this element is
    * based on "Select All That Apply" condition. [Occurrences: Minimum: 0; Maximum: 9]
    */
  using ActivityParts = asb_uci::base::BoundedList<uci::type::ActivityPlanPartsEnum, uci::type::accessorType::activityPlanPartsEnum, asb_uci::type::ActivityPlanPartsEnum>;

  /** Indicates summary metrics for all the Segments of a single Orbit Sequence of the OrbitPlan referenced by the sibling
    * OrbitPlanID. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH]
    */
  using SequenceMetrics = asb_uci::base::BoundedList<uci::type::OrbitManeuverSequenceMetricsType, uci::type::accessorType::orbitManeuverSequenceMetricsType, asb_uci::type::OrbitManeuverSequenceMetricsType>;

  /** Indicates summary metrics for a single Orbit Segment of the OrbitPlan referenced by the sibling OrbitPlanID.
    * [Occurrences: Minimum: 0; Maximum: MAX_LENGTH]
    */
  using SegmentMetrics = asb_uci::base::BoundedList<uci::type::OrbitManeuverSegmentMetricsType, uci::type::accessorType::orbitManeuverSegmentMetricsType, asb_uci::type::OrbitManeuverSegmentMetricsType>;

  /** The constructor */
  OrbitMetricsMDT();

  /** The copy constructor
    *
    * @param rhs The OrbitMetricsMDT to copy from
    */
  OrbitMetricsMDT(const OrbitMetricsMDT& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The OrbitMetricsMDT to move from
    */
  OrbitMetricsMDT(OrbitMetricsMDT&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The OrbitMetricsMDT to copy from
    * @return The OrbitMetricsMDT that was assigned
    */
  OrbitMetricsMDT& operator=(const OrbitMetricsMDT& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The OrbitMetricsMDT to move from
    * @return The OrbitMetricsMDT that was assigned
    */
  OrbitMetricsMDT& operator=(OrbitMetricsMDT&& rhs) = delete;

  /** The destructor */
  virtual ~OrbitMetricsMDT();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::OrbitMetricsMDT whose contents are to be used to set this uci::type::OrbitMetricsMDT's
    *      contents.
    */
  void copy(const uci::type::OrbitMetricsMDT& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::OrbitMetricsMDT whose contents are to be used to set this uci::type::OrbitMetricsMDT's
    *      contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::OrbitMetricsMDT& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the accessor to the MetricsID field contained in this message fragment
    *
    * @return The const reference to the accessor to the MetricsID field.
    */
  const uci::type::OrbitMetricsID_Type& getMetricsID() const override;

  /** Returns the accessor to the MetricsID field contained in this message fragment
    *
    * @return The reference to the accessor to the MetricsID field.
    */
  uci::type::OrbitMetricsID_Type& getMetricsID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::OrbitMetricsMDT& setMetricsID(const uci::type::OrbitMetricsID_Type& accessor) override;

  /** Returns the accessor to the OrbitPlanID field contained in this message fragment
    *
    * @return The const reference to the accessor to the OrbitPlanID field.
    */
  const uci::type::OrbitPlanID_Type& getOrbitPlanID() const override;

  /** Returns the accessor to the OrbitPlanID field contained in this message fragment
    *
    * @return The reference to the accessor to the OrbitPlanID field.
    */
  uci::type::OrbitPlanID_Type& getOrbitPlanID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::OrbitMetricsMDT& setOrbitPlanID(const uci::type::OrbitPlanID_Type& accessor) override;

  /** Returns the accessor to the OrbitParts field contained in this message fragment
    *
    * @return The const reference to the accessor to the OrbitParts field.
    */
  const uci::type::OrbitMetricsMDT::OrbitParts& getOrbitParts() const override;

  /** Returns the accessor to the OrbitParts field contained in this message fragment
    *
    * @return The reference to the accessor to the OrbitParts field.
    */
  uci::type::OrbitMetricsMDT::OrbitParts& getOrbitParts() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::OrbitMetricsMDT& setOrbitParts(const uci::type::OrbitMetricsMDT::OrbitParts& accessor) override;

  /** Returns the accessor to the OrbitActivityPlanID field contained in this message fragment
    *
    * @return The const reference to the accessor to the OrbitActivityPlanID field.
    */
  const uci::type::OrbitMetricsMDT::OrbitActivityPlanID& getOrbitActivityPlanID() const override;

  /** Returns the accessor to the OrbitActivityPlanID field contained in this message fragment
    *
    * @return The reference to the accessor to the OrbitActivityPlanID field.
    */
  uci::type::OrbitMetricsMDT::OrbitActivityPlanID& getOrbitActivityPlanID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::OrbitMetricsMDT& setOrbitActivityPlanID(const uci::type::OrbitMetricsMDT::OrbitActivityPlanID& accessor) override;

  /** Returns the accessor to the ActivityParts field contained in this message fragment
    *
    * @return The const reference to the accessor to the ActivityParts field.
    */
  const uci::type::OrbitMetricsMDT::ActivityParts& getActivityParts() const override;

  /** Returns the accessor to the ActivityParts field contained in this message fragment
    *
    * @return The reference to the accessor to the ActivityParts field.
    */
  uci::type::OrbitMetricsMDT::ActivityParts& getActivityParts() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::OrbitMetricsMDT& setActivityParts(const uci::type::OrbitMetricsMDT::ActivityParts& accessor) override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::SatelliteEnduranceType& getOrbitMetrics_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::SatelliteEnduranceType& getOrbitMetrics() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::SatelliteEnduranceType& getOrbitMetrics() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::OrbitMetricsMDT& setOrbitMetrics(const uci::type::SatelliteEnduranceType& accessor) override;

  /** Returns whether this optional field OrbitMetricsis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasOrbitMetrics() const noexcept override;

  /** Enables the optional field such that getOrbitMetrics will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::SatelliteEnduranceType& enableOrbitMetrics(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::OrbitMetricsMDT& clearOrbitMetrics() noexcept override;

  /** Returns the accessor to the SequenceMetrics field contained in this message fragment
    *
    * @return The const reference to the accessor to the SequenceMetrics field.
    */
  const uci::type::OrbitMetricsMDT::SequenceMetrics& getSequenceMetrics() const override;

  /** Returns the accessor to the SequenceMetrics field contained in this message fragment
    *
    * @return The reference to the accessor to the SequenceMetrics field.
    */
  uci::type::OrbitMetricsMDT::SequenceMetrics& getSequenceMetrics() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::OrbitMetricsMDT& setSequenceMetrics(const uci::type::OrbitMetricsMDT::SequenceMetrics& accessor) override;

  /** Returns the accessor to the SegmentMetrics field contained in this message fragment
    *
    * @return The const reference to the accessor to the SegmentMetrics field.
    */
  const uci::type::OrbitMetricsMDT::SegmentMetrics& getSegmentMetrics() const override;

  /** Returns the accessor to the SegmentMetrics field contained in this message fragment
    *
    * @return The reference to the accessor to the SegmentMetrics field.
    */
  uci::type::OrbitMetricsMDT::SegmentMetrics& getSegmentMetrics() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::OrbitMetricsMDT& setSegmentMetrics(const uci::type::OrbitMetricsMDT::SegmentMetrics& accessor) override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::OrbitActivityMetricsType& getOrbitActivityMetrics_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::OrbitActivityMetricsType& getOrbitActivityMetrics() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::OrbitActivityMetricsType& getOrbitActivityMetrics() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::OrbitMetricsMDT& setOrbitActivityMetrics(const uci::type::OrbitActivityMetricsType& accessor) override;

  /** Returns whether this optional field OrbitActivityMetricsis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasOrbitActivityMetrics() const noexcept override;

  /** Enables the optional field such that getOrbitActivityMetrics will return the optional field and not throw an
    * exception when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::OrbitActivityMetricsType& enableOrbitActivityMetrics(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::OrbitMetricsMDT& clearOrbitActivityMetrics() noexcept override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<OrbitMetricsMDT> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::OrbitMetricsMDT& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::OrbitMetricsMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<OrbitMetricsID_Type> metricsID_Accessor;
  std::unique_ptr<OrbitPlanID_Type> orbitPlanID_Accessor;
  std::unique_ptr<OrbitParts> orbitParts_Accessor;
  std::unique_ptr<OrbitActivityPlanID> orbitActivityPlanID_Accessor;
  std::unique_ptr<ActivityParts> activityParts_Accessor;
  std::unique_ptr<SatelliteEnduranceType> orbitMetrics_Accessor;
  std::unique_ptr<SequenceMetrics> sequenceMetrics_Accessor;
  std::unique_ptr<SegmentMetrics> segmentMetrics_Accessor;
  std::unique_ptr<OrbitActivityMetricsType> orbitActivityMetrics_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_ORBITMETRICSMDT_H
