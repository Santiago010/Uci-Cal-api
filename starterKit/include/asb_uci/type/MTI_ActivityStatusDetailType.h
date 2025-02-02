/** @file MTI_ActivityStatusDetailType.h
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

#ifndef ASB_UCI_TYPE_MTI_ACTIVITYSTATUSDETAILTYPE_H
#define ASB_UCI_TYPE_MTI_ACTIVITYSTATUSDETAILTYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/base/BoundedList.h"
#include "../../../include/asb_uci/type/DecibelType.h"
#include "../../../include/asb_uci/type/DurationType.h"
#include "../../../include/asb_uci/type/MTI_ActivityStatusBaseType.h"
#include "../../../include/asb_xs/type/simpleXmlSchemaPrimitives.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/MTI_ActivityStatusDetailType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class AreaChoiceType;
class EstimatedPerformanceType;

/** Collection metrics used for describing the progress of an activity (sensor collection) being performed by a MTI
  * sensor.
  */
class MTI_ActivityStatusDetailType : public virtual uci::type::MTI_ActivityStatusDetailType, public virtual MTI_ActivityStatusBaseType {
public:
  /** Estimated performance of the activity. The multiplicity is limited to N-1 options where UNKNOWN is an environment
    * type that has no value, thus removed from list of available options. [Occurrences: Minimum: 0; Maximum: 5]
    */
  using EstimatedPerformance = asb_uci::base::BoundedList<uci::type::EstimatedPerformanceType, uci::type::accessorType::estimatedPerformanceType, asb_uci::type::EstimatedPerformanceType>;

  /** The constructor */
  MTI_ActivityStatusDetailType();

  /** The copy constructor
    *
    * @param rhs The MTI_ActivityStatusDetailType to copy from
    */
  MTI_ActivityStatusDetailType(const MTI_ActivityStatusDetailType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The MTI_ActivityStatusDetailType to move from
    */
  MTI_ActivityStatusDetailType(MTI_ActivityStatusDetailType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The MTI_ActivityStatusDetailType to copy from
    * @return The MTI_ActivityStatusDetailType that was assigned
    */
  MTI_ActivityStatusDetailType& operator=(const MTI_ActivityStatusDetailType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The MTI_ActivityStatusDetailType to move from
    * @return The MTI_ActivityStatusDetailType that was assigned
    */
  MTI_ActivityStatusDetailType& operator=(MTI_ActivityStatusDetailType&& rhs) = delete;

  /** The destructor */
  ~MTI_ActivityStatusDetailType() override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::MTI_ActivityStatusDetailType whose contents are to be used to set this
    *      uci::type::MTI_ActivityStatusDetailType's contents.
    */
  void copy(const uci::type::MTI_ActivityStatusDetailType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::MTI_ActivityStatusDetailType whose contents are to be used to set this
    *      uci::type::MTI_ActivityStatusDetailType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::MTI_ActivityStatusDetailType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::DecibelTypeValue getEstimatedERP() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::MTI_ActivityStatusDetailType& setEstimatedERP(uci::type::DecibelTypeValue value) override;

  /** Returns whether this optional field EstimatedERPis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasEstimatedERP() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::MTI_ActivityStatusDetailType& clearEstimatedERP() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  xs::UnsignedInt getProductsProduced() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::MTI_ActivityStatusDetailType& setProductsProduced(xs::UnsignedInt value) override;

  /** Returns whether this optional field ProductsProducedis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasProductsProduced() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::MTI_ActivityStatusDetailType& clearProductsProduced() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  xs::UnsignedInt getHitsReported() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::MTI_ActivityStatusDetailType& setHitsReported(xs::UnsignedInt value) override;

  /** Returns whether this optional field HitsReportedis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasHitsReported() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::MTI_ActivityStatusDetailType& clearHitsReported() noexcept override;

  /** Returns the accessor to the EstimatedPerformance field contained in this message fragment
    *
    * @return The const reference to the accessor to the EstimatedPerformance field.
    */
  const uci::type::MTI_ActivityStatusDetailType::EstimatedPerformance& getEstimatedPerformance() const override;

  /** Returns the accessor to the EstimatedPerformance field contained in this message fragment
    *
    * @return The reference to the accessor to the EstimatedPerformance field.
    */
  uci::type::MTI_ActivityStatusDetailType::EstimatedPerformance& getEstimatedPerformance() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::MTI_ActivityStatusDetailType& setEstimatedPerformance(const uci::type::MTI_ActivityStatusDetailType::EstimatedPerformance& accessor) override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::AreaChoiceType& getTargetAreaScanned_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::AreaChoiceType& getTargetAreaScanned() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::AreaChoiceType& getTargetAreaScanned() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::MTI_ActivityStatusDetailType& setTargetAreaScanned(const uci::type::AreaChoiceType& accessor) override;

  /** Returns whether this optional field TargetAreaScannedis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasTargetAreaScanned() const noexcept override;

  /** Enables the optional field such that getTargetAreaScanned will return the optional field and not throw an exception
    * when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::AreaChoiceType& enableTargetAreaScanned(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::MTI_ActivityStatusDetailType& clearTargetAreaScanned() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::DurationTypeValue getTimeToService() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::MTI_ActivityStatusDetailType& setTimeToService(uci::type::DurationTypeValue value) override;

  /** Returns whether this optional field TimeToServiceis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasTimeToService() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::MTI_ActivityStatusDetailType& clearTimeToService() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::DurationTypeValue getAverageTimeToService() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::MTI_ActivityStatusDetailType& setAverageTimeToService(uci::type::DurationTypeValue value) override;

  /** Returns whether this optional field AverageTimeToServiceis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasAverageTimeToService() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::MTI_ActivityStatusDetailType& clearAverageTimeToService() noexcept override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<MTI_ActivityStatusDetailType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::MTI_ActivityStatusDetailType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::MTI_ActivityStatusDetailType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  boost::optional<DecibelTypeValue> estimatedERP_Accessor;
  boost::optional<asb_xs::UnsignedInt> productsProduced_Accessor;
  boost::optional<asb_xs::UnsignedInt> hitsReported_Accessor;
  std::unique_ptr<EstimatedPerformance> estimatedPerformance_Accessor;
  std::unique_ptr<AreaChoiceType> targetAreaScanned_Accessor;
  boost::optional<DurationTypeValue> timeToService_Accessor;
  boost::optional<DurationTypeValue> averageTimeToService_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_MTI_ACTIVITYSTATUSDETAILTYPE_H
