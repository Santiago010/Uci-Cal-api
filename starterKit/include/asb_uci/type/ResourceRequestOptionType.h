/** @file ResourceRequestOptionType.h
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

#ifndef ASB_UCI_TYPE_RESOURCEREQUESTOPTIONTYPE_H
#define ASB_UCI_TYPE_RESOURCEREQUESTOPTIONTYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/base/BoundedList.h"
#include "../../../include/asb_xs/type/simpleXmlSchemaPrimitives.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ResourceRequestOptionType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class DateTimeRangeType;
class FrequencyRangeType;
class PerformanceMetricSetType;
class ResourceRequestType;

/** See annotations in child elements and messages/elements that use this type for details. */
class ResourceRequestOptionType : public virtual uci::type::ResourceRequestOptionType {
public:
  /** Each ResourceRequestOption contains up to two ResourceRequests, one for each RF_Mode if the operation has both
    * transmit and receive resources. Each ResourceRequest structure defines the RF_Mode applicable, the AccessPeriod
    * description of duty cycle and other utilization, the Select_Resources identification of the MFA and VA to be used in
    * the RF_Mode, and an optional MaxPercentInterruption. The two ResourceRequest fields are grouped together under each
    * ResourceRequestOption because a Service may provide multiple options on different arrays, and the grouping allows for
    * Tx/Rx to be allocated as a group rather than treated as logically independent requests and allocations. [Occurrences:
    * Minimum: 1; Maximum: MAX_LENGTH]
    */
  using ResourceRequest = asb_uci::base::BoundedList<uci::type::ResourceRequestType, uci::type::accessorType::resourceRequestType, asb_uci::type::ResourceRequestType>;

  /** Requested Frequency Range of the RF path for the activity to be performed. Optional if RequestState is CANCEL.
    * [Occurrences: Minimum: 0; Maximum: MAX_LENGTH]
    */
  using RequestedFrequencyRange = asb_uci::base::BoundedList<uci::type::FrequencyRangeType, uci::type::accessorType::frequencyRangeType, asb_uci::type::FrequencyRangeType>;

  /** The constructor */
  ResourceRequestOptionType();

  /** The copy constructor
    *
    * @param rhs The ResourceRequestOptionType to copy from
    */
  ResourceRequestOptionType(const ResourceRequestOptionType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The ResourceRequestOptionType to move from
    */
  ResourceRequestOptionType(ResourceRequestOptionType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The ResourceRequestOptionType to copy from
    * @return The ResourceRequestOptionType that was assigned
    */
  ResourceRequestOptionType& operator=(const ResourceRequestOptionType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The ResourceRequestOptionType to move from
    * @return The ResourceRequestOptionType that was assigned
    */
  ResourceRequestOptionType& operator=(ResourceRequestOptionType&& rhs) = delete;

  /** The destructor */
  virtual ~ResourceRequestOptionType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::ResourceRequestOptionType whose contents are to be used to set this
    *      uci::type::ResourceRequestOptionType's contents.
    */
  void copy(const uci::type::ResourceRequestOptionType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::ResourceRequestOptionType whose contents are to be used to set this
    *      uci::type::ResourceRequestOptionType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::ResourceRequestOptionType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the contents of the message's ResourceRequestOptionIndex field
    *
    * @return The contents of the ResourceRequestOptionIndex field
    */
  xs::UnsignedInt getResourceRequestOptionIndex() const override;

  /** Sets the contents of the message's ResourceRequestOptionIndex field
    *
    * @param value The new value to set the ResourceRequestOptionIndex field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::ResourceRequestOptionType& setResourceRequestOptionIndex(xs::UnsignedInt value) override;

  /** Returns the accessor to the ResourceRequest field contained in this message fragment
    *
    * @return The const reference to the accessor to the ResourceRequest field.
    */
  const uci::type::ResourceRequestOptionType::ResourceRequest& getResourceRequest() const override;

  /** Returns the accessor to the ResourceRequest field contained in this message fragment
    *
    * @return The reference to the accessor to the ResourceRequest field.
    */
  uci::type::ResourceRequestOptionType::ResourceRequest& getResourceRequest() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::ResourceRequestOptionType& setResourceRequest(const uci::type::ResourceRequestOptionType::ResourceRequest& accessor) override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::DateTimeRangeType& getDurationRange_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::DateTimeRangeType& getDurationRange() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::DateTimeRangeType& getDurationRange() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::ResourceRequestOptionType& setDurationRange(const uci::type::DateTimeRangeType& accessor) override;

  /** Returns whether this optional field DurationRangeis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasDurationRange() const noexcept override;

  /** Enables the optional field such that getDurationRange will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::DateTimeRangeType& enableDurationRange(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::ResourceRequestOptionType& clearDurationRange() noexcept override;

  /** Returns the accessor to the RequestedFrequencyRange field contained in this message fragment
    *
    * @return The const reference to the accessor to the RequestedFrequencyRange field.
    */
  const uci::type::ResourceRequestOptionType::RequestedFrequencyRange& getRequestedFrequencyRange() const override;

  /** Returns the accessor to the RequestedFrequencyRange field contained in this message fragment
    *
    * @return The reference to the accessor to the RequestedFrequencyRange field.
    */
  uci::type::ResourceRequestOptionType::RequestedFrequencyRange& getRequestedFrequencyRange() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::ResourceRequestOptionType& setRequestedFrequencyRange(const uci::type::ResourceRequestOptionType::RequestedFrequencyRange& accessor) override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  xs::UnsignedInt getMerit() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::ResourceRequestOptionType& setMerit(xs::UnsignedInt value) override;

  /** Returns whether this optional field Meritis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasMerit() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::ResourceRequestOptionType& clearMerit() noexcept override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::PerformanceMetricSetType& getPerformanceMetric_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::PerformanceMetricSetType& getPerformanceMetric() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::PerformanceMetricSetType& getPerformanceMetric() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::ResourceRequestOptionType& setPerformanceMetric(const uci::type::PerformanceMetricSetType& accessor) override;

  /** Returns whether this optional field PerformanceMetricis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasPerformanceMetric() const noexcept override;

  /** Enables the optional field such that getPerformanceMetric will return the optional field and not throw an exception
    * when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::PerformanceMetricSetType& enablePerformanceMetric(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::ResourceRequestOptionType& clearPerformanceMetric() noexcept override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<ResourceRequestOptionType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::ResourceRequestOptionType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::ResourceRequestOptionType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  asb_xs::UnsignedInt resourceRequestOptionIndex_Accessor{0};
  std::unique_ptr<ResourceRequest> resourceRequest_Accessor;
  std::unique_ptr<DateTimeRangeType> durationRange_Accessor;
  std::unique_ptr<RequestedFrequencyRange> requestedFrequencyRange_Accessor;
  boost::optional<asb_xs::UnsignedInt> merit_Accessor;
  std::unique_ptr<PerformanceMetricSetType> performanceMetric_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_RESOURCEREQUESTOPTIONTYPE_H
