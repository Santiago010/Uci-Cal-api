/** @file MTI_OpZoneFilterAreaType.h
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

#ifndef ASB_UCI_TYPE_MTI_OPZONEFILTERAREATYPE_H
#define ASB_UCI_TYPE_MTI_OPZONEFILTERAREATYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/base/BoundedList.h"
#include "../../../include/asb_uci/base/IntAccessor.h"
#include "../../../include/asb_uci/type/OpZoneFilterAreaPET.h"
#include "../../../include/asb_xs/type/simpleXmlSchemaPrimitives.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/MTI_OpZoneFilterAreaType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/** This element represents a filtered area for raw Moving Target Indicator (MTI) measurements. This type extends the
  * base OpZoneFilterAreaPET to provide generic MTI parameters. Specialized MTI will have an extended type for additional
  * parameters.
  */
class MTI_OpZoneFilterAreaType : public virtual uci::type::MTI_OpZoneFilterAreaType, public virtual OpZoneFilterAreaPET {
public:
  /** Filter on the specific Job Identifier. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH] */
  using Job = asb_uci::base::BoundedList<uci::base::IntAccessor, uci::base::accessorType::intAccessor, asb_uci::base::IntAccessor>;

  /** The constructor */
  MTI_OpZoneFilterAreaType();

  /** The copy constructor
    *
    * @param rhs The MTI_OpZoneFilterAreaType to copy from
    */
  MTI_OpZoneFilterAreaType(const MTI_OpZoneFilterAreaType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The MTI_OpZoneFilterAreaType to move from
    */
  MTI_OpZoneFilterAreaType(MTI_OpZoneFilterAreaType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The MTI_OpZoneFilterAreaType to copy from
    * @return The MTI_OpZoneFilterAreaType that was assigned
    */
  MTI_OpZoneFilterAreaType& operator=(const MTI_OpZoneFilterAreaType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The MTI_OpZoneFilterAreaType to move from
    * @return The MTI_OpZoneFilterAreaType that was assigned
    */
  MTI_OpZoneFilterAreaType& operator=(MTI_OpZoneFilterAreaType&& rhs) = delete;

  /** The destructor */
  ~MTI_OpZoneFilterAreaType() override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::MTI_OpZoneFilterAreaType whose contents are to be used to set this
    *      uci::type::MTI_OpZoneFilterAreaType's contents.
    */
  void copy(const uci::type::MTI_OpZoneFilterAreaType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::MTI_OpZoneFilterAreaType whose contents are to be used to set this
    *      uci::type::MTI_OpZoneFilterAreaType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::MTI_OpZoneFilterAreaType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  xs::Int getMinimumTargetCountInDwell() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::MTI_OpZoneFilterAreaType& setMinimumTargetCountInDwell(xs::Int value) override;

  /** Returns whether this optional field MinimumTargetCountInDwellis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasMinimumTargetCountInDwell() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::MTI_OpZoneFilterAreaType& clearMinimumTargetCountInDwell() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  xs::Int getMaximumTargetCountInDwell() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::MTI_OpZoneFilterAreaType& setMaximumTargetCountInDwell(xs::Int value) override;

  /** Returns whether this optional field MaximumTargetCountInDwellis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasMaximumTargetCountInDwell() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::MTI_OpZoneFilterAreaType& clearMaximumTargetCountInDwell() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  xs::Double getMinimumSNR() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::MTI_OpZoneFilterAreaType& setMinimumSNR(xs::Double value) override;

  /** Returns whether this optional field MinimumSNRis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasMinimumSNR() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::MTI_OpZoneFilterAreaType& clearMinimumSNR() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  xs::Double getMaximumSNR() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::MTI_OpZoneFilterAreaType& setMaximumSNR(xs::Double value) override;

  /** Returns whether this optional field MaximumSNRis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasMaximumSNR() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::MTI_OpZoneFilterAreaType& clearMaximumSNR() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  xs::Double getMinimumRCS() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::MTI_OpZoneFilterAreaType& setMinimumRCS(xs::Double value) override;

  /** Returns whether this optional field MinimumRCSis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasMinimumRCS() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::MTI_OpZoneFilterAreaType& clearMinimumRCS() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  xs::Double getMaximumRCS() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::MTI_OpZoneFilterAreaType& setMaximumRCS(xs::Double value) override;

  /** Returns whether this optional field MaximumRCSis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasMaximumRCS() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::MTI_OpZoneFilterAreaType& clearMaximumRCS() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  xs::Double getMinimumRadialVelocity() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::MTI_OpZoneFilterAreaType& setMinimumRadialVelocity(xs::Double value) override;

  /** Returns whether this optional field MinimumRadialVelocityis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasMinimumRadialVelocity() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::MTI_OpZoneFilterAreaType& clearMinimumRadialVelocity() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  xs::Double getMaximumRadialVelocity() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::MTI_OpZoneFilterAreaType& setMaximumRadialVelocity(xs::Double value) override;

  /** Returns whether this optional field MaximumRadialVelocityis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasMaximumRadialVelocity() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::MTI_OpZoneFilterAreaType& clearMaximumRadialVelocity() noexcept override;

  /** Returns the accessor to the Job field contained in this message fragment
    *
    * @return The const reference to the accessor to the Job field.
    */
  const uci::type::MTI_OpZoneFilterAreaType::Job& getJob() const override;

  /** Returns the accessor to the Job field contained in this message fragment
    *
    * @return The reference to the accessor to the Job field.
    */
  uci::type::MTI_OpZoneFilterAreaType::Job& getJob() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::MTI_OpZoneFilterAreaType& setJob(const uci::type::MTI_OpZoneFilterAreaType::Job& accessor) override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<MTI_OpZoneFilterAreaType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::MTI_OpZoneFilterAreaType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::MTI_OpZoneFilterAreaType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  boost::optional<asb_xs::Int> minimumTargetCountInDwell_Accessor;
  boost::optional<asb_xs::Int> maximumTargetCountInDwell_Accessor;
  boost::optional<asb_xs::Double> minimumSNR_Accessor;
  boost::optional<asb_xs::Double> maximumSNR_Accessor;
  boost::optional<asb_xs::Double> minimumRCS_Accessor;
  boost::optional<asb_xs::Double> maximumRCS_Accessor;
  boost::optional<asb_xs::Double> minimumRadialVelocity_Accessor;
  boost::optional<asb_xs::Double> maximumRadialVelocity_Accessor;
  std::unique_ptr<Job> job_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_MTI_OPZONEFILTERAREATYPE_H
