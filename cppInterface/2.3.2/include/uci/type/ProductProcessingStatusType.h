/** @file ProductProcessingStatusType.h
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

#ifndef UCI_TYPE_PRODUCTPROCESSINGSTATUSTYPE_H
#define UCI_TYPE_PRODUCTPROCESSINGSTATUSTYPE_H

#include "../base/Accessor.h"
#include "../base/BoundedList.h"
#include "../base/UnsignedIntAccessor.h"
#include "../base/export.h"
#include "CannotComplyType.h"
#include "DateTimeType.h"
#include "InputProductType.h"
#include "PercentType.h"
#include "ProcessingResultsPET.h"
#include "ProcessingTypeEnum.h"
#include "ProductMetadataID_Type.h"
#include "RequestProcessingStateEnum.h"

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
class ProductProcessingStatusType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new ProductProcessingStatusType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed ProductProcessingStatusType.
    */
  static UCI_EXPORT ProductProcessingStatusType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new ProductProcessingStatusType initializing the data accessed by the new
    * ProductProcessingStatusType using the data accessed by the specified ProductProcessingStatusType (cloning).
    *
    * @param accessor The ProductProcessingStatusType that provides access to the data that is to be used to initialize the
    *      data accessed by the new created ProductProcessingStatusType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed ProductProcessingStatusType.
    */
  static UCI_EXPORT ProductProcessingStatusType& create(const ProductProcessingStatusType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified ProductProcessingStatusType. Use of the specified accessor after it has been
    * destroyed will result in undefined behavior.
    *
    * @param accessor The ProductProcessingStatusType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(ProductProcessingStatusType& accessor);

  /** Returns this accessor's type constant, i.e. productProcessingStatusType.
    *
    * @return This accessor's type constant, i.e. productProcessingStatusType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::productProcessingStatusType;
  }

  /** Returns the version that was initialized from the uci:version attribute of ProductProcessingStatusType.
    *
    * @return The version that was initialized from the uci:version attribute of ProductProcessingStatusType.
    */
  static std::string getUCITypeVersion() {
    return "002.000.003.001";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const ProductProcessingStatusType& accessor) = 0;

  /** This element specifies the input product or products to which this status applies. [Occurrences: Minimum: 1; Maximum:
    * MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::InputProductType, uci::type::accessorType::inputProductType> InputProduct;

  /** This is the ID of the ProductMetadata corresponding to the Product that is the output of the processing job. It is
    * expected that this value will not be populated until the processing state for this requirement transitions to
    * COMPLETED. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::ProductMetadataID_Type, uci::type::accessorType::productMetadataID_Type> OutputProductMetadataID;

  /** Returns a const reference to the bounded list identified by InputProduct.
    *
    * @return A const reference to the bounded list identified by InputProduct.
    */
  virtual const uci::type::ProductProcessingStatusType::InputProduct& getInputProduct() const = 0;

  /** Returns a reference to the bounded list identified by InputProduct.
    *
    * @return A reference to the bounded list identified by InputProduct.
    */
  virtual uci::type::ProductProcessingStatusType::InputProduct& getInputProduct() = 0;

  /** Sets the bounded list identified by InputProduct.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ProductProcessingStatusType& setInputProduct(const uci::type::ProductProcessingStatusType::InputProduct& value) = 0;

  /** Returns a const reference to the value of the enumeration identified by ProductProcessingState.
    *
    * @return A const reference to the value of the enumeration identified by ProductProcessingState.
    */
  virtual const uci::type::RequestProcessingStateEnum& getProductProcessingState() const = 0;

  /** Returns a reference to the value of the enumeration identified by ProductProcessingState.
    *
    * @return A reference to the value of the enumeration identified by ProductProcessingState.
    */
  virtual uci::type::RequestProcessingStateEnum& getProductProcessingState() = 0;

  /** Sets the value of the enumeration identified by ProductProcessingState.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ProductProcessingStatusType& setProductProcessingState(const uci::type::RequestProcessingStateEnum& value) = 0;

  /** Sets the value of the enumeration identified by ProductProcessingState.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ProductProcessingStatusType& setProductProcessingState(uci::type::RequestProcessingStateEnum::EnumerationItem value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by StatusDetails.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by StatusDetails.
    */
  virtual const uci::type::CannotComplyType& getStatusDetails() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by StatusDetails.
    *
    * @return A reference to the accessor that provides access to the complex content identified by StatusDetails.
    */
  virtual uci::type::CannotComplyType& getStatusDetails() = 0;

  /** Sets the complex content identified by StatusDetails to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by StatusDetails.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ProductProcessingStatusType& setStatusDetails(const uci::type::CannotComplyType& value) = 0;

  /** Returns whether the Element identified by StatusDetails exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by StatusDetails is enabled or not.
    */
  virtual bool hasStatusDetails() const = 0;

  /** Enables the Element identified by StatusDetails.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by StatusDetails.
    */
  virtual uci::type::CannotComplyType& enableStatusDetails(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by StatusDetails.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ProductProcessingStatusType& clearStatusDetails() = 0;

  /** Returns the value of the SimplePrimitive data type identified by ProcessingIndex.
    *
    * @return The value of the simple primitive data type identified by ProcessingIndex.
    */
  virtual xs::UnsignedInt getProcessingIndex() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by ProcessingIndex.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ProductProcessingStatusType& setProcessingIndex(xs::UnsignedInt value) = 0;

  /** Returns whether the Element identified by ProcessingIndex exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by ProcessingIndex is enabled or not.
    */
  virtual bool hasProcessingIndex() const = 0;

  /** Clears (disabled) the Element identified by ProcessingIndex.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ProductProcessingStatusType& clearProcessingIndex() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by OutputData.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by OutputData.
    */
  virtual const uci::type::ProcessingResultsPET& getOutputData() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by OutputData.
    *
    * @return A reference to the accessor that provides access to the complex content identified by OutputData.
    */
  virtual uci::type::ProcessingResultsPET& getOutputData() = 0;

  /** Sets the complex content identified by OutputData to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by OutputData.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ProductProcessingStatusType& setOutputData(const uci::type::ProcessingResultsPET& value) = 0;

  /** Returns whether the Element identified by OutputData exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by OutputData is enabled or not.
    */
  virtual bool hasOutputData() const = 0;

  /** Enables the Element identified by OutputData.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by OutputData.
    */
  virtual uci::type::ProcessingResultsPET& enableOutputData(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by OutputData.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ProductProcessingStatusType& clearOutputData() = 0;

  /** Returns a const reference to the value of the enumeration identified by ProcessingType.
    *
    * @return A const reference to the value of the enumeration identified by ProcessingType.
    */
  virtual const uci::type::ProcessingTypeEnum& getProcessingType() const = 0;

  /** Returns a reference to the value of the enumeration identified by ProcessingType.
    *
    * @return A reference to the value of the enumeration identified by ProcessingType.
    */
  virtual uci::type::ProcessingTypeEnum& getProcessingType() = 0;

  /** Sets the value of the enumeration identified by ProcessingType.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ProductProcessingStatusType& setProcessingType(const uci::type::ProcessingTypeEnum& value) = 0;

  /** Sets the value of the enumeration identified by ProcessingType.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ProductProcessingStatusType& setProcessingType(uci::type::ProcessingTypeEnum::EnumerationItem value) = 0;

  /** Returns whether the Element identified by ProcessingType exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by ProcessingType is enabled or not.
    */
  virtual bool hasProcessingType() const = 0;

  /** Enables the Element identified by ProcessingType.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the value of the enumeration identified by ProcessingType.
    */
  virtual uci::type::ProcessingTypeEnum& enableProcessingType(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by ProcessingType.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ProductProcessingStatusType& clearProcessingType() = 0;

  /** Returns a const reference to the bounded list identified by OutputProductMetadataID.
    *
    * @return A const reference to the bounded list identified by OutputProductMetadataID.
    */
  virtual const uci::type::ProductProcessingStatusType::OutputProductMetadataID& getOutputProductMetadataID() const = 0;

  /** Returns a reference to the bounded list identified by OutputProductMetadataID.
    *
    * @return A reference to the bounded list identified by OutputProductMetadataID.
    */
  virtual uci::type::ProductProcessingStatusType::OutputProductMetadataID& getOutputProductMetadataID() = 0;

  /** Sets the bounded list identified by OutputProductMetadataID.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ProductProcessingStatusType& setOutputProductMetadataID(const uci::type::ProductProcessingStatusType::OutputProductMetadataID& value) = 0;

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
  virtual uci::type::ProductProcessingStatusType& setEstimatedCompletionTime(uci::type::DateTimeTypeValue value) = 0;

  /** Returns whether the Element identified by EstimatedCompletionTime exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by EstimatedCompletionTime is enabled or not.
    */
  virtual bool hasEstimatedCompletionTime() const = 0;

  /** Clears (disabled) the Element identified by EstimatedCompletionTime.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ProductProcessingStatusType& clearEstimatedCompletionTime() = 0;

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
  virtual uci::type::ProductProcessingStatusType& setEstimatedPercentComplete(uci::type::PercentTypeValue value) = 0;

  /** Returns whether the Element identified by EstimatedPercentComplete exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by EstimatedPercentComplete is enabled or not.
    */
  virtual bool hasEstimatedPercentComplete() const = 0;

  /** Clears (disabled) the Element identified by EstimatedPercentComplete.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ProductProcessingStatusType& clearEstimatedPercentComplete() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  ProductProcessingStatusType() {
  }

  /** The destructor [only available to derived classes]. */
  ~ProductProcessingStatusType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The ProductProcessingStatusType to copy from.
    */
  ProductProcessingStatusType(const ProductProcessingStatusType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this ProductProcessingStatusType to the contents of the
    * ProductProcessingStatusType on the right hand side (rhs) of the assignment operator [only available to derived
    * classes].
    *
    * @param rhs The ProductProcessingStatusType on the right hand side (rhs) of the assignment operator whose contents are
    *      used to set the contents of this ProductProcessingStatusType.
    * @return A reference to this ProductProcessingStatusType.
    */
  ProductProcessingStatusType& operator=(const ProductProcessingStatusType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_PRODUCTPROCESSINGSTATUSTYPE_H

