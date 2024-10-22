/** @file PO_ComponentFilterType.h
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

#ifndef ASB_UCI_TYPE_PO_COMPONENTFILTERTYPE_H
#define ASB_UCI_TYPE_PO_COMPONENTFILTERTYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/base/BoundedList.h"
#include "../../../include/asb_uci/type/PO_FilterEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PO_ComponentFilterType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class ComponentControllabilityA_Type;
class FrequencyRangeType;
class PO_FPA_ID_Type;
class PO_FilterID_Type;

/** See annotations in child elements and messages/elements that use this type for details. */
class PO_ComponentFilterType : public virtual uci::type::PO_ComponentFilterType {
public:
  /** Filters exist within the optical pathway that leads to one or more Focal Plane Arrays (FPAs). This field specifies
    * those FPAs that are associated with this filter, i.e. those FPAs that record light that passes through this filter.
    * [Occurrences: Minimum: 1; Maximum: MAX_LENGTH]
    */
  using FPA_ID = asb_uci::base::BoundedList<uci::type::PO_FPA_ID_Type, uci::type::accessorType::pO_FPA_ID_Type, asb_uci::type::PO_FPA_ID_Type>;

  /** This field is used to specify a frequency band the filter allows to pass through. If not specified, then it is
    * assumed that the filter does not pass through light of any frequency (this is true of filters of type "shutter"). The
    * frequency band is greater than 0.0. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH]
    */
  using BandpassFrequency = asb_uci::base::BoundedList<uci::type::FrequencyRangeType, uci::type::accessorType::frequencyRangeType, asb_uci::type::FrequencyRangeType>;

  /** The constructor */
  PO_ComponentFilterType();

  /** The copy constructor
    *
    * @param rhs The PO_ComponentFilterType to copy from
    */
  PO_ComponentFilterType(const PO_ComponentFilterType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The PO_ComponentFilterType to move from
    */
  PO_ComponentFilterType(PO_ComponentFilterType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The PO_ComponentFilterType to copy from
    * @return The PO_ComponentFilterType that was assigned
    */
  PO_ComponentFilterType& operator=(const PO_ComponentFilterType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The PO_ComponentFilterType to move from
    * @return The PO_ComponentFilterType that was assigned
    */
  PO_ComponentFilterType& operator=(PO_ComponentFilterType&& rhs) = delete;

  /** The destructor */
  virtual ~PO_ComponentFilterType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::PO_ComponentFilterType whose contents are to be used to set this
    *      uci::type::PO_ComponentFilterType's contents.
    */
  void copy(const uci::type::PO_ComponentFilterType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::PO_ComponentFilterType whose contents are to be used to set this
    *      uci::type::PO_ComponentFilterType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::PO_ComponentFilterType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the accessor to the FilterID field contained in this message fragment
    *
    * @return The const reference to the accessor to the FilterID field.
    */
  const uci::type::PO_FilterID_Type& getFilterID() const override;

  /** Returns the accessor to the FilterID field contained in this message fragment
    *
    * @return The reference to the accessor to the FilterID field.
    */
  uci::type::PO_FilterID_Type& getFilterID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::PO_ComponentFilterType& setFilterID(const uci::type::PO_FilterID_Type& accessor) override;

  /** Returns the accessor to the FPA_ID field contained in this message fragment
    *
    * @return The const reference to the accessor to the FPA_ID field.
    */
  const uci::type::PO_ComponentFilterType::FPA_ID& getFPA_ID() const override;

  /** Returns the accessor to the FPA_ID field contained in this message fragment
    *
    * @return The reference to the accessor to the FPA_ID field.
    */
  uci::type::PO_ComponentFilterType::FPA_ID& getFPA_ID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::PO_ComponentFilterType& setFPA_ID(const uci::type::PO_ComponentFilterType::FPA_ID& accessor) override;

  /** Returns the contents of the message's FilterType field
    *
    * @return The contents of the FilterType field
    */
  const uci::type::PO_FilterEnum& getFilterType() const override;

  /** Returns the contents of the message's FilterType field
    *
    * @return The contents of the FilterType field
    */
  uci::type::PO_FilterEnum& getFilterType() override;

  /** Sets the contents of the message's FilterType field
    *
    * @param accessor The accessor to use to set the FilterType field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::PO_ComponentFilterType& setFilterType(const uci::type::PO_FilterEnum& accessor) override;

  /** Sets the contents of the message's FilterType field
    *
    * @param value The new value to set the FilterType field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::PO_ComponentFilterType& setFilterType(uci::type::PO_FilterEnum::EnumerationItem value) override;

  /** Returns the accessor to the BandpassFrequency field contained in this message fragment
    *
    * @return The const reference to the accessor to the BandpassFrequency field.
    */
  const uci::type::PO_ComponentFilterType::BandpassFrequency& getBandpassFrequency() const override;

  /** Returns the accessor to the BandpassFrequency field contained in this message fragment
    *
    * @return The reference to the accessor to the BandpassFrequency field.
    */
  uci::type::PO_ComponentFilterType::BandpassFrequency& getBandpassFrequency() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::PO_ComponentFilterType& setBandpassFrequency(const uci::type::PO_ComponentFilterType::BandpassFrequency& accessor) override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ComponentControllabilityA_Type& getControllability_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::ComponentControllabilityA_Type& getControllability() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ComponentControllabilityA_Type& getControllability() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::PO_ComponentFilterType& setControllability(const uci::type::ComponentControllabilityA_Type& accessor) override;

  /** Returns whether this optional field Controllabilityis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasControllability() const noexcept override;

  /** Enables the optional field such that getControllability will return the optional field and not throw an exception
    * when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ComponentControllabilityA_Type& enableControllability(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::PO_ComponentFilterType& clearControllability() noexcept override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<PO_ComponentFilterType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::PO_ComponentFilterType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::PO_ComponentFilterType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<PO_FilterID_Type> filterID_Accessor;
  std::unique_ptr<FPA_ID> fPA_ID_Accessor;
  std::unique_ptr<PO_FilterEnum> filterType_Accessor;
  std::unique_ptr<BandpassFrequency> bandpassFrequency_Accessor;
  std::unique_ptr<ComponentControllabilityA_Type> controllability_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_PO_COMPONENTFILTERTYPE_H
