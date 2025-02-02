/** @file ProductDisseminationStatusType.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:07 PM
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

#ifndef UCI_TYPE_PRODUCTDISSEMINATIONSTATUSTYPE_H
#define UCI_TYPE_PRODUCTDISSEMINATIONSTATUSTYPE_H

#include "../base/Accessor.h"
#include "../base/export.h"
#include "DateTimeType.h"
#include "DisseminationProductType.h"
#include "DisseminationStatusEnum.h"
#include "PercentType.h"
#include "VisibleString256Type.h"

/** The namespace in which all UCI data types are declared */
namespace uci {

/** The namespace in which all base data types are declared */
namespace base {

class AbstractServiceBusConnection;

} // namespace base
} // namespace uci

/** The namespace in which all UCI data types are declared */
namespace uci {

/** The namespace in which all generated data types are declared */
namespace type {

/** See annotations in child elements and messages/elements that use this type for details. */
class ProductDisseminationStatusType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new ProductDisseminationStatusType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed ProductDisseminationStatusType.
    */
  static UCI_EXPORT ProductDisseminationStatusType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new ProductDisseminationStatusType initializing the data accessed by the new
    * ProductDisseminationStatusType using the data accessed by the specified ProductDisseminationStatusType (cloning).
    *
    * @param accessor The ProductDisseminationStatusType that provides access to the data that is to be used to initialize
    *      the data accessed by the new created ProductDisseminationStatusType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed ProductDisseminationStatusType.
    */
  static UCI_EXPORT ProductDisseminationStatusType& create(const ProductDisseminationStatusType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified ProductDisseminationStatusType. Use of the specified accessor after it has been
    * destroyed will result in undefined behavior.
    *
    * @param accessor The ProductDisseminationStatusType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(ProductDisseminationStatusType& accessor);

  /** Returns this accessor's type constant, i.e. productDisseminationStatusType.
    *
    * @return This accessor's type constant, i.e. productDisseminationStatusType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::productDisseminationStatusType;
  }

  /** Returns the version that was initialized from the uci:version attribute of ProductDisseminationStatusType.
    *
    * @return The version that was initialized from the uci:version attribute of ProductDisseminationStatusType.
    */
  static std::string getUCITypeVersion() {
    return "001.000.002.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const ProductDisseminationStatusType& accessor) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by Product.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by Product.
    */
  virtual const uci::type::DisseminationProductType& getProduct() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by Product.
    *
    * @return A reference to the accessor that provides access to the complex content identified by Product.
    */
  virtual uci::type::DisseminationProductType& getProduct() = 0;

  /** Sets the complex content identified by Product to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by Product.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ProductDisseminationStatusType& setProduct(const uci::type::DisseminationProductType& value) = 0;

  /** Returns a const reference to the value of the enumeration identified by ProductDisseminationState.
    *
    * @return A const reference to the value of the enumeration identified by ProductDisseminationState.
    */
  virtual const uci::type::DisseminationStatusEnum& getProductDisseminationState() const = 0;

  /** Returns a reference to the value of the enumeration identified by ProductDisseminationState.
    *
    * @return A reference to the value of the enumeration identified by ProductDisseminationState.
    */
  virtual uci::type::DisseminationStatusEnum& getProductDisseminationState() = 0;

  /** Sets the value of the enumeration identified by ProductDisseminationState.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ProductDisseminationStatusType& setProductDisseminationState(const uci::type::DisseminationStatusEnum& value) = 0;

  /** Sets the value of the enumeration identified by ProductDisseminationState.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ProductDisseminationStatusType& setProductDisseminationState(uci::type::DisseminationStatusEnum::EnumerationItem value) = 0;

  /** Returns a const reference to the accessor that provides access to the string identified by StatusDetails.
    *
    * @return A const reference to the accessor that provides access to the string identified by StatusDetails.
    */
  virtual const asb_uci::type::VisibleString256Type& getStatusDetails() const = 0;

  /** Returns a reference to the accessor that provides access to the string identified by StatusDetails.
    *
    * @return A reference to the accessor that provides access to the string identified by StatusDetails.
    */
  virtual asb_uci::type::VisibleString256Type& getStatusDetails() = 0;

  /** Sets the string identified by StatusDetails to the contents of the string accessed by the specified accessor.
    *
    * @param value The accessor that provides access to the string whose contents are to be used to set the contents of the
    *      string identified by StatusDetails.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ProductDisseminationStatusType& setStatusDetails(const asb_uci::type::VisibleString256Type& value) = 0;

  /** Sets the string identified by StatusDetails to the contents of the string that is accessed by the specified accessor.
    *
    * @param value The string used to set the string data type.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ProductDisseminationStatusType& setStatusDetails(const std::string& value) = 0;

  /** Sets the string identified by StatusDetails to the contents of the string that is accessed by the specified accessor.
    *
    * @param value The string used to set the string data type.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ProductDisseminationStatusType& setStatusDetails(const char* value) = 0;

  /** Returns whether the Element identified by StatusDetails exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by StatusDetails is enabled or not.
    */
  virtual bool hasStatusDetails() const = 0;

  /** Enables the Element identified by StatusDetails.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the string identified by StatusDetails.
    */
  virtual asb_uci::type::VisibleString256Type& enableStatusDetails(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by StatusDetails.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ProductDisseminationStatusType& clearStatusDetails() = 0;

  /** Returns the value of the SimplePrimitive data type identified by EstimatedCompletionTime.
    *
    * @return The value of the simple primitive data type identified by EstimatedCompletionTime.
    */
  virtual uci::type::DateTimeTypeValue getEstimatedCompletionTime() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by EstimatedCompletionTime.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ProductDisseminationStatusType& setEstimatedCompletionTime(uci::type::DateTimeTypeValue value) = 0;

  /** Returns whether the Element identified by EstimatedCompletionTime exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by EstimatedCompletionTime is enabled or not.
    */
  virtual bool hasEstimatedCompletionTime() const = 0;

  /** Clears (disabled) the Element identified by EstimatedCompletionTime.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ProductDisseminationStatusType& clearEstimatedCompletionTime() = 0;

  /** Returns the value of the SimplePrimitive data type identified by EstimatedPercentComplete.
    *
    * @return The value of the simple primitive data type identified by EstimatedPercentComplete.
    */
  virtual uci::type::PercentTypeValue getEstimatedPercentComplete() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by EstimatedPercentComplete.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ProductDisseminationStatusType& setEstimatedPercentComplete(uci::type::PercentTypeValue value) = 0;

  /** Returns whether the Element identified by EstimatedPercentComplete exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by EstimatedPercentComplete is enabled or not.
    */
  virtual bool hasEstimatedPercentComplete() const = 0;

  /** Clears (disabled) the Element identified by EstimatedPercentComplete.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ProductDisseminationStatusType& clearEstimatedPercentComplete() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  ProductDisseminationStatusType() {
  }

  /** The destructor [only available to derived classes]. */
  ~ProductDisseminationStatusType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The ProductDisseminationStatusType to copy from.
    */
  ProductDisseminationStatusType(const ProductDisseminationStatusType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this ProductDisseminationStatusType to the contents of the
    * ProductDisseminationStatusType on the right hand side (rhs) of the assignment operator [only available to derived
    * classes].
    *
    * @param rhs The ProductDisseminationStatusType on the right hand side (rhs) of the assignment operator whose contents
    *      are used to set the contents of this ProductDisseminationStatusType.
    * @return A reference to this ProductDisseminationStatusType.
    */
  ProductDisseminationStatusType& operator=(const ProductDisseminationStatusType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_PRODUCTDISSEMINATIONSTATUSTYPE_H

