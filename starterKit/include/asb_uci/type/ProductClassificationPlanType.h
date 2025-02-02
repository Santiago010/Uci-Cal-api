/** @file ProductClassificationPlanType.h
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

#ifndef ASB_UCI_TYPE_PRODUCTCLASSIFICATIONPLANTYPE_H
#define ASB_UCI_TYPE_PRODUCTCLASSIFICATIONPLANTYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/base/BoundedList.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ProductClassificationPlanType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class ClassificationConstrainedSubPlanType;
class SecurityInformationType;

/** This type represents the system classification plan for a type of product. */
class ProductClassificationPlanType : public virtual uci::type::ProductClassificationPlanType {
public:
  /** A constrained subplan specifies classifications that should be used instead of the default if the filters for those
    * classifications are satisfied. If the filters are satisfied in a way that determines multiple classifications could
    * be applied then the ConstrainedSubplan Rank can be used to determine which classification to apply. If subplans have
    * the same rank, the applicable subplan with the highest classification should be applied. [Occurrences: Minimum: 0;
    * Maximum: MAX_LENGTH]
    */
  using ConstrainedSubPlan = asb_uci::base::BoundedList<uci::type::ClassificationConstrainedSubPlanType, uci::type::accessorType::classificationConstrainedSubPlanType, asb_uci::type::ClassificationConstrainedSubPlanType>;

  /** The constructor */
  ProductClassificationPlanType();

  /** The copy constructor
    *
    * @param rhs The ProductClassificationPlanType to copy from
    */
  ProductClassificationPlanType(const ProductClassificationPlanType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The ProductClassificationPlanType to move from
    */
  ProductClassificationPlanType(ProductClassificationPlanType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The ProductClassificationPlanType to copy from
    * @return The ProductClassificationPlanType that was assigned
    */
  ProductClassificationPlanType& operator=(const ProductClassificationPlanType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The ProductClassificationPlanType to move from
    * @return The ProductClassificationPlanType that was assigned
    */
  ProductClassificationPlanType& operator=(ProductClassificationPlanType&& rhs) = delete;

  /** The destructor */
  virtual ~ProductClassificationPlanType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::ProductClassificationPlanType whose contents are to be used to set this
    *      uci::type::ProductClassificationPlanType's contents.
    */
  void copy(const uci::type::ProductClassificationPlanType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::ProductClassificationPlanType whose contents are to be used to set this
    *      uci::type::ProductClassificationPlanType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::ProductClassificationPlanType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the accessor to the DefaultSubPlan field contained in this message fragment
    *
    * @return The const reference to the accessor to the DefaultSubPlan field.
    */
  const uci::type::SecurityInformationType& getDefaultSubPlan() const override;

  /** Returns the accessor to the DefaultSubPlan field contained in this message fragment
    *
    * @return The reference to the accessor to the DefaultSubPlan field.
    */
  uci::type::SecurityInformationType& getDefaultSubPlan() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::ProductClassificationPlanType& setDefaultSubPlan(const uci::type::SecurityInformationType& accessor) override;

  /** Returns the accessor to the ConstrainedSubPlan field contained in this message fragment
    *
    * @return The const reference to the accessor to the ConstrainedSubPlan field.
    */
  const uci::type::ProductClassificationPlanType::ConstrainedSubPlan& getConstrainedSubPlan() const override;

  /** Returns the accessor to the ConstrainedSubPlan field contained in this message fragment
    *
    * @return The reference to the accessor to the ConstrainedSubPlan field.
    */
  uci::type::ProductClassificationPlanType::ConstrainedSubPlan& getConstrainedSubPlan() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::ProductClassificationPlanType& setConstrainedSubPlan(const uci::type::ProductClassificationPlanType::ConstrainedSubPlan& accessor) override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<ProductClassificationPlanType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::ProductClassificationPlanType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::ProductClassificationPlanType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<SecurityInformationType> defaultSubPlan_Accessor;
  std::unique_ptr<ConstrainedSubPlan> constrainedSubPlan_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_PRODUCTCLASSIFICATIONPLANTYPE_H
